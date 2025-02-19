#include <stdio.h>

int main() {
    int arr[10];
    int max, min;

    // Ask the user to input 10 numbers
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    max = arr[0];
    min = arr[0];

    // Traverse the array to find max and min
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Display the maximum and minimum numbers
    printf("The maximum number is: %d\n", max);
    printf("The minimum number is: %d\n", min);

    return 0;
}
