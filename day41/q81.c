#include <stdio.h>

int main() {
    char str[1000];
    scanf("%[^\n]", str);

    int count = 0;
    while (str[count] != '\0') {
        count++;
    }

    printf("Length = %d", count);
    return 0;
}