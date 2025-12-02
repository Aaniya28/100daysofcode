//Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

#include <stdio.h>

int main() {
    int groups[] = {4, 5, 4};  // number of stars in each group
    int totalGroups = 3;

    for (int i = 0; i < totalGroups; i++) {
        for (int j = 1; j <= groups[i]; j++) {
            printf("*\n");
        }
        printf("\n");  // blank line between groups
    }

    return 0;
}