//Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

    #include <stdio.h>

int main() {
    int n = 5;  // number of rows

    for (int i = 1; i <= n; i++) {         // rows
        for (int j = 1; j < i; j++) {      // spaces
            printf(" ");
        }
        for (int k = i; k <= n; k++) {     // stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}