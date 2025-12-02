//Write a program to print the following pattern:
    5
   45
  345
 2345
12345

#include <stdio.h>

int main() {
    int n = 5;  // number of rows

    for (int i = n; i >= 1; i--) {           // rows
        for (int j = 1; j < i; j++) {        // spaces
            printf(" ");
        }
        for (int k = i; k <= n; k++) {       // numbers
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}