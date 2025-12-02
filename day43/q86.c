#include <stdio.h>

int main() {
    char str[1000];
    scanf("%[^\n]", str);

    int start = 0, end = 0;

    while (str[end] != '\0')
        end++;
    end--;

    int isPalindrome = 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}