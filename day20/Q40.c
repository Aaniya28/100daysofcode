/*
Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>
int main() 
{
    unsigned int num, digit, result = 0, place = 1;

    printf("Enter a binary number (e.g., 1011): ");
    scanf("%u", &num);

    while (num > 0) {
        digit = num % 10;

        if (digit == 0)
            result += 1 * place;
        else if (digit == 1)
            result += 0 * place;
        else {
            printf("Invalid binary digit detected.\n");
            return 1;
        }

        num /= 10;
        place *= 10;
    }

    printf("1's Complement: %u\n", result);

    return 0;
}