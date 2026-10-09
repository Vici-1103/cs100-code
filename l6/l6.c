#include <stdio.h>

int copy_odd_reversed(int *from, int n, int *to) {
    int cnt = 0;

    for (int i = n - 1; i >= 0; --i)
        if (from[i] % 2 == 1)
            to[cnt++] = from[i];

    return cnt;
}

int main(void) {
    int a[5] = {1, 2, 3, 5, 6};
    int b[5];

    int b_length = copy_odd_reversed(a, 5, b);

    for (int i = 0; i < b_length; i++) {
        printf("%d ", b[i]);
    }

    printf("\n");

    return 0;
}