//Q43: Write a program to check if a number is a strong number.//

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a STRONG number.\n", originalNum);
        printf("Explanation: Sum of factorials of digits equals the number itself.\n");
    } else {
        printf("%d is NOT a strong number.\n", originalNum);
        printf("Explanation: Sum of factorials (%d) is not equal to %d.\n", sum, originalNum);
    }

    return 0;
}