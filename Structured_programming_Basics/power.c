#include <stdio.h>

int _pow_recursion(int x, int y) {
    if (y < 0) {  // Handle negative exponents
        return -1;
    } else if (y == 0) {
        return 1;  // Base case: x^0 = 1
    } else {
        return x * _pow_recursion(x, y - 1); // Recursive call
    }
}

int main() {
    int base, exponent, result;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = _pow_recursion(base, exponent);

    if (result == -1) {
        printf("Error: Exponent cannot be negative.\n");
    } else {
        printf("%d raised to the power of %d is %d\n", base, exponent, result);
    }

    return 0;
}
