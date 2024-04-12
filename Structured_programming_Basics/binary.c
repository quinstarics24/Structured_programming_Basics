#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100  // Adjust the maximum size as needed

int binary_search(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;  // Not found
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;  // Found at index mid
    } else if (arr[mid] < target) {
        return binary_search(arr, mid + 1, right, target);  // Search right half
    } else {
        return binary_search(arr, left, mid - 1, target);  // Search left half
    }
}

int main() {
    srand(time(NULL));  // Seed random number generation

    int n, i, target;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("Error: Array size exceeds maximum.\n");
        return 1;
    }

    int arr[n];

    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // Generate random numbers between 0 and 99
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int index = binary_search(arr, 0, n - 1, target);

    if (index == -1) {
        printf("%d is not found in the array.\n", target);
    } else {
        printf("%d is found at index %d.\n", target, index);
    }

    return 0;
}