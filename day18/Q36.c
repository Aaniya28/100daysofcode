/*
Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main() 
{
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    int a = num1;
    int b = num2;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF of %d and %d is: %d\n", num1, num2, a);

    return 0;
}