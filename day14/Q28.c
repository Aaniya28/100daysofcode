/*
Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() 
{
    int n;
    long long product = 1; 

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 1) 
    {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    for (int i = 1; i <= n; i++) 
    {
        if (i % 2 == 0) 
        { 
            product *= i; 
        }
    }

    if (product == 1 && n < 2)
    { 
        printf("There are no even numbers to multiply in the range 1 to %d. Product is 1.\n", n);
    } else 
    {
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    }

    return 0; 
}