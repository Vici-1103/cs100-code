#include <stdio.h>
#include <stdbool.h>

bool is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int main(void) {
    char c;
    scanf("%c", &c);
    if (is_digit(c)) {
        printf("%c is a digit.\n", c);
    } else {
        printf("%c is not a digit.\n", c);
    }
    return 0;
}
