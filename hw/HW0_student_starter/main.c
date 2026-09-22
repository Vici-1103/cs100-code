#include <stdio.h>

int main(void)
{
    int x, y;
    if (scanf("%d %d", &x, &y) != 2)
    {
        return 1;
    }
    else
    {
        printf("%d\n", x + y);
    }
    return 0;
}
