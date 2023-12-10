#include <stdio.h>

// Function declarations
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() {
    char operator;
    float num1, num2, result;

    // Input two numbers and the operator
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = divide(num1, num2);
            } else {
                printf("Error: Division by zero\n");
                return 1; // Exit the program with an error code
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; // Exit the program with an error code
    }

    // Display the result
    printf("Result: %.2f\n", result);

    return 0; // Exit the program successfully
}

// Function definitions

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}

