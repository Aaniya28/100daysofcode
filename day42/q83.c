#include <stdio.h>

int main() {
    char str[1000];
    scanf("%[^\n]", str);

    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c >= 'A' && c <= 'Z')
            c = c + 32;

        if (c >= 'a' && c <= 'z') {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')