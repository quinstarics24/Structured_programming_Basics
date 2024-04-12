  # Structured_programming_Basics/binary.c
 Header inclusions:
#include <stdio.h>: Provides standard input/output functions (printf, scanf).
#include <stdlib.h>: Includes functions for random number generation (srand, rand).
#include <time.h>: Provides functions for time-based seeding (time).
Maximum array size definition:
#define MAX_SIZE 100: Sets the maximum size an array can have. .
Binary search function (binary_search):
Takes an array arr, left and right indices (left, right), and target value (target) as input.
Returns the index of the target element if found, or -1 if not found.
Implements the core binary search logic:
Checks if the left index exceeds the right index, indicating the target is not present.
Calculates the middle index mid.
Checks if the target is at the middle index:
If so, returns mid as the found index.
Recursively searches the left or right half based on the target's position relative to the middle element:
If arr[mid] is less than target, searches the right half (mid + 1 to right).
If arr[mid] is greater than target, searches the left half (left to mid - 1).
Main function (main):
Seeds the random number generator using srand(time(NULL)) to ensure different random values each time the program runs.
Prompts the user to enter the desired array size, with error handling for exceeding the maximum size.
Declares variables n (array size), i (loop counter), and target (search value).
Creates an integer array arr of size n.
Asks the user to enter the array elements and stores them randomly between 0 and 99 using rand() % 100.
Prompts the user to enter the number to search for (target).
Calls the binary_search function to search for the target in the array.
Prints the search result based on the returned index:
If -1, the target is not found.
Otherwise, the target is found at the specified index.







   # Structured_programming_Basics/magic_number.c
Magic Number  (Palindrome)
This program checks if a three-digit number is a "magic number" (palindrome). A palindrome reads the same backward as forward.

Instructions:
Compile: gcc magic_number.c -o magic_number
Run: ./magic_number
Input: Enter a positive three-digit number (e.g., 121).

Output: The program will tell you if the number is a "magic number" (palindrome) or not.





    #Structured_programming_Basics/power.c
Recursive Power Calculator
This program calculates a number raised to a power using recursion.

How it works:
It breaks down the exponent (y) by repeatedly multiplying the base (x) by itself (x * _pow_recursion(x, y-1)) until the exponent reaches 0.
Base case: x^0 is always 1.
Negative exponents are not allowed and result in an error message.
Instructions:

Compile: gcc power.c -o power
Run: ./power
Input: Enter the base number and exponent (e.g., 2 3).
Output: The program will display the base raised to the power of the exponent (e.g., 2 raised to the power of 3 is 8).





    #Structured_programming_Basics/pyramide.c
Number Pyramid Generator
This program creates a number pyramid pattern with increasing and then decreasing numbers in each row.

Instructions:
Compile: gcc pyramid.c -o pyramid
Run: ./pyramid
Input: Enter the desired number of rows for the pyramid (e.g., 5).

Output: The program will print the number pyramid pattern (e.g., for 5 rows):

    1
   121
  12321
 1234321
123454321







     #Structured_programming_Basics/time_table.c
Multiplication time_Table Generator
This program generates a multiplication table for a positive integer you enter.

Instructions:

Compile: gcc time_table.c -o table
Run: ./table
Input: Enter a positive integer (e.g., 5).
Output: The program will display the multiplication table of the entered number up to 10 (e.g., for 5):

5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50









    #Structured_programming_Basics/two_swap.c
Swapping Numbers without Extra Variable
This program swaps the values of two numbers you enter without using an additional variable.

Instructions:

Compile: gcc two_swap.c -o swap
Run: ./swap
Input: Enter two integers separated by a space (e.g., 10 20).

Output: The program will print the swapped numbers (e.g., 20 10).














 
