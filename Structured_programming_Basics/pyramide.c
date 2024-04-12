#include <stdio.h>

int main() {
    int rows, i, j, space, number;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print numbers in increasing order
        for (number = 1; number <= i; number++) {
            printf("%d", number);
        }

        // Print numbers in decreasing order (except for the last row)
        if (i < rows) {
            for (number = i - 1; number >= 1; number--) {
                printf("%d", number);
            }
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
