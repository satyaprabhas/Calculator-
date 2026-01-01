#include <stdio.h>

int main() {
    double a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &b);

    if (op == '+') {
        result = a + b;
        printf("Result: %.2lf\n", result);
    } else if (op == '-') {
        result = a - b;
        printf("Result: %.2lf\n", result);
    } else if (op == '*') {
        result = a * b;
        printf("Result: %.2lf\n", result);
    } else if (op == '/') {
        if (b != 0) {
            result = a / b;
            printf("Result: %.2lf\n", result);
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}