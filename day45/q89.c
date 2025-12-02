#include <stdio.h>

int main() {
    char str[1000], ch;
    scanf("%[^\n]", str);
    getchar();
    scanf("%c", &ch);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency = %d", count);
    return 0;
}