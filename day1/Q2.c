//Q2 Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
   int num1, num2, sum , difference, product, quotient;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n",num1, num2, sum);

    difference = num1 - num2;
    printf("The difference of %d and %d is: %d\n",num1, num2, difference);

    product = num1*num2;
    printf("The product of %d and %d is: %d\n",num1, num2, product);

    quotient = num1%num2;
    printf("The quotient of %d and %d is: %d\n",num1, num2, quotient);

    return 0;

}