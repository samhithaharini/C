#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, result;
    char op;
    printf("Enter an operator (+, -, *, /, %%, s): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = fmod(num1, num2);
                printf("Result: %.2f %% %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Modulus by zero!\n");
            }
            break;
        case 's':
            result = num1 * num1;
            printf("Result: %.2f squared = %.2f\n", num1, result);
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}
