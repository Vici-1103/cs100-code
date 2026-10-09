/* CS100 Fall 2026 - HW1 Problem 5: Platinum Lion Dog's Bus Journey
 *
 * Input length is unknown: check the return value of scanf.
 * No arrays or dynamic memory allocation. Do not rename this file.
 */
#include <stdio.h>

int main(void)
{
    int ppl;
    scanf("%d", &ppl);
    int in, out, stops = 0;

    while (scanf("%d%d", &out, &in) == 2)
    {
        if (ppl < out)
        {
            printf("Impossible.\n");
            return 0;
        }
        else
        {
            ppl -= out;
            ppl += in;
            stops += 1;
        }
    }

    char opcode;
    scanf("%c", &opcode);

    if (opcode == 'p')
    {
        printf("%d\n", ppl);
    }
    else if (opcode == 's')
    {
        printf("%d\n", stops);
    }
    
    return 0;
}
