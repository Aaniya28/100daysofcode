//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, key, pos;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n+1];   // +1 for the new element

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find correct position for insertion
    pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the element
    arr[pos] = key;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}