/* CS100 Fall 2026 - HW1 Problem 3: Sum and maximum
 *
 * Read integers until a 0; print the sum and the maximum.
 * No arrays or dynamic memory allocation. Do not rename this file.
 */
#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    int max = num;
    int sum = 0;
    while (num != 0)
    {
        sum += num;
        if (num >= max)
        {
            max = num;
        }
        scanf("%d", &num);
    }
    printf("sum: %d\n", sum);
    printf("maximum: %d\n", max);
    return 0;
}
