#include <stdio.h>

int main() {
    char str[1000];
    scanf("%[^\n]", str);

    int spaces = 0, digits = 0, special = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c == ' ')
            spaces++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
            special++;
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", special);

    return 0;
}