#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // If num1 is greater than num2
    if(num1 > num2) {
        printf("%d is maximum", num1);
    } else {
        // If num2 is greater than or equal to num1
        printf("%d is maximum", num2);
    }

    return 0;
}

