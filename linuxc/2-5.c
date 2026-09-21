#include <stdio.h>

int main(void)
{
    int x, n, answer;
    scanf("%d%d", &x, &n);
    answer = (x + n - 1) / n;
    printf("the answer is %d", answer);
    return 0;
}