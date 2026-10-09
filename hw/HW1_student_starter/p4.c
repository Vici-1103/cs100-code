/* CS100 Fall 2026 - HW1 Problem 4: Second maximum and second minimum
 *
 * No arrays or dynamic memory allocation (the last 5 test cases require
 * O(1) extra space). Do not rename this file.
 */
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int num;
    scanf("%d", &num);
    int max = num, min = num, scndmax = -101, scndmin = 101;
    for (int i = 0; i < (n - 1); ++i)
    {
        scanf("%d", &num);
        if (num > max)
        {
            scndmax = max;
            max = num;
        }
        if (num < max && num > scndmax)
        {
            scndmax = num;
        }
        if (num < min)
        {
            scndmin = min;
            min = num;
        }
        if (num > min && num < scndmin)
        {
            scndmin = num;
        }
    }
    printf("%d %d\n", scndmax, scndmin);
    return 0;
}
