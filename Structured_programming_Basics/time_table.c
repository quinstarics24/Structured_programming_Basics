#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Error: Invalid input. Please enter a positive integer.\n");
        return 1; 
    }

    if (n <= 0) {
        fprintf(stderr, "Error: Please enter a positive integer.\n");
        return 1; 
    }

    printf("Multiplication Table of %d:\n", n);

    // Use a for loop for efficient and clear multiplication
    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0; 
}