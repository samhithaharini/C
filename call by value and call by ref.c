#include <stdio.h>
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nSwapping using Call by Value:\n");
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    printf("\nSwapping using Call by Reference:\n");
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
