#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Handle negative input gracefully
    if (num < 0) {
        printf("Invalid input: Number must be positive.\n");
        return 1;
    }

    if (num < 100 || num > 999) {
        printf("Invalid input: Number must be three-digit.\n");
        return 1;
    }

    originalNum = num; // Store original number for output

    // Reverse the number
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    if (originalNum == reversed) {
        printf("%d is a magic number (palindrome).\n", originalNum);
    } else {
        printf("%d is not a magic number.\n", originalNum);
    }

    return 0;
}