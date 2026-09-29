#include <stdio.h>
#include <stdlib.h>
/*int main(void)
{
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("%d\n", a + b);
        break;
    case '-':
        printf("%d\n", a - b);
        break;
    case '*':
        printf("%d\n", a * b);
        break;
    case '/':
        if (b != 0)
        {
            printf("%d\n", a / b);
        }
        else
        {
            printf("Error: Division by zero\n");
        }
        break;
    default:
        printf("Error: Invalid operator\n");
    }
}
*/


int main(void)
{
    char c;
    do
    {
        scanf("%c", &c);
        if (c == 'y')
        {
            printf("yesok\n");
            break;
        }
        if (c == 'n')
        {
            printf("nohh\n");
            break;
        }
    } while (c != 'y');

    return 0;
}

