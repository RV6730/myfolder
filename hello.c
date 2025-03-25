#include <stdio.h>

int main() {
    int num1, num2, sum; // Declare variables to store the numbers and their sum
    printf("Enter the first number: ");
    scanf("%d", &num1); // Read the first number from the user
    printf("Enter the second number: ");
    scanf("%d", &num2); // Read the second number from the user
    sum = num1 + num2; // Add the two numbers
    printf("Sum of %d and %d is: %d", num1, num2, sum); // Display the sum
    return 0;
}

