#include <stdio.h>

/*
 * ============================================================
 * 第一部分（已注释掉）：交换两个 int 变量的值
 * ============================================================
 *
 * C 语言的函数参数是"值传递"：函数拿到的是实参的副本。
 * 如果写成 void swap(int x, int y)，交换的只是副本，main 里的 a、b 不会变。
 *
 * 所以要把 a、b 的地址传进来（int *），再通过 *pa、*pb
 * 直接去改 main 里那两个变量本身。

void swap(int *pa, int *pb){
    int tmp = *pb;      // 先把 b 的值存起来，否则下一步会被覆盖
        *pb = *pa;      // b = a
        *pa = tmp;      // a = 原来的 b
}

int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);                // 传 a、b 的地址
    printf("%d %d\n",a, b);      // a、b 的值被真正交换了
}

*/

/*
 * ============================================================
 * 第二部分：交换两个指针（交换它们存的地址）
 * ============================================================
 *
 * 和上面同一个道理：
 *   想在函数里修改 int     变量 -> 传 int  *（int 的地址）
 *   想在函数里修改 int *   变量 -> 传 int **（指针的地址）
 *
 * 这里要修改的是 main 里的 p1、p2 这两个指针变量，
 * 所以参数类型是 int **。
 *
 *   pa  : p1 的地址（int **）
 *   *pa : p1 本身，也就是 p1 里存的地址（int *）
 *   **pa: p1 指向的那个 int，也就是 a（int）
 */
void swap_pointers(int **pa, int **pb){
    int *tmp = *pa;     // tmp 是 int *，暂存 p1 里的地址（&a）
        *pa = *pb;      // p1 = p2，p1 现在指向 b
        *pb = tmp;      // p2 = 原来的 p1，p2 现在指向 a
}

int main(void){
    int a, b;
    scanf("%d%d", &a, &b);

    int *p1 = &a;       // p1 指向 a
    int *p2 = &b;       // p2 指向 b

    /*
     * %p 用来打印地址。
     * C 标准规定 %p 只接收 void *（"通用指针"：只有地址，不带类型），
     * 所以要写 (void *) 把 int * 转一下。
     * 转换不会改变地址值，只是换了类型标签。
     * 不转在常见电脑上通常也能用，但 gcc -Wpedantic 会报警告。
     */
    printf("&a = %p, &b = %p\n", (void *)&a, (void *)&b);

    // 交换前：p1 存 &a，p2 存 &b
    printf("before: p1 = %p, *p1 = %d\n", (void *)p1, *p1);
    printf("        p2 = %p, *p2 = %d\n", (void *)p2, *p2);

    swap_pointers(&p1, &p2);    // 传的是 p1、p2 自己的地址

    // 交换后：p1 存 &b，p2 存 &a，所以 *p1、*p2 的值也对调了
    printf("after:  p1 = %p, *p1 = %d\n", (void *)p1, *p1);
    printf("        p2 = %p, *p2 = %d\n", (void *)p2, *p2);

    // 注意：a、b 本身完全没变！被交换的只是两个指针里存的地址
    printf("a = %d, b = %d\n", a, b);
}
