#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables to store maximum element and its index
    int maxElement = arr[0];
    int maxIndex = 0;

    // Find the maximum element and its index
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    // Output the maximum element and its index
    printf("Maximum element is %d at index %d.\n", maxElement, maxIndex);

    return 0;
}
