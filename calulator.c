#include <stdio.h>

int main() {
    char operator;
    float num1, num2;

    printf("Enter operator (+,-,*,/): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(operator) {
        case '+':
            printf("%.2f", num1 + num2);
            break;

        case '-':
            printf("%.2f", num1 - num2);
            break;

        case '*':
            printf("%.2f", num1 * num2);
            break;

        case '/':
            printf("%.2f", num1 / num2);26
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}