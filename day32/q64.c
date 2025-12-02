//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int digit, freq[10] = {0};  
    int maxFreq = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    
    if (num < 0) {
        num = -num;
    }

   
    while (num > 0) {
        digit = num % 10;      
        freq[digit]++;         
        num /= 10;             
    }

   
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    printf("Digit %d occurs the most times (%d times).\n", result, maxFreq);

    return 0;
}