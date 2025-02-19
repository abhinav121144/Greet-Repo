#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Take input for the array elements
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    // Display the sum of the elements
    printf("The sum of the entered numbers is: %d\n", sum);

    return 0;
}
