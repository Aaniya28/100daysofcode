//Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int temp[100];  
    
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

   
    k = k % n;

   
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

   
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
// Copy back the last k elements to the beginning
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Display rotated array
    printf("Array after rotating right by %d positions: ", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}