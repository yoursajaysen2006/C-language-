#include <stdio.h>

int main() {
    float A, B;
    char op;

    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%f", &A);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &B);

    if (op == '+') {
        printf(" %.2f\n", A + B);
    } else if (op == '-') {
        printf(" %.2f\n", A - B);
    } else if (op == '*') {
        printf(" %.2f\n", A * B);
    } else if (op == '/') {
        if (B != 0) {
            printf(" %.2f\n", A / B);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}