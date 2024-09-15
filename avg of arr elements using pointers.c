#include <stdio.h>
float findAverage(int *arr, int size) {
    int sum = 0;
    float average;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    average = (float)sum / size;

    return average;
}

int main() {
    int arr[100], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    float avg = findAverage(arr, size);
    printf("Average of array elements: %.2f\n", avg);

    return 0;
}
