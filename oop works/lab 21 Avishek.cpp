#include <stdio.h>
#include <stdlib.h>

// Function to generate the next r-combination in lexicographic order
int next_combination(int arr[], int n, int r) {
    int i;

    // Find the rightmost element that is not at its maximum value
    for (i = r - 1; i >= 0 && arr[i] == n - r + i; i--);

    // If no such element is found, we have generated all combinations
    if (i == -1) {
        return 0;
    }

    // Increment the current element
    arr[i]++;

    // Update the rest of the elements to their minimum values
    for (int j = i + 1; j < r; j++) {
        arr[j] = arr[j - 1] + 1;
    }

    return 1;
}

// Function to print an array
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, r;

    // Input the values of n and r
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Initialize the array with the first combination
    int arr[r];
    for (int i = 0; i < r; i++) {
        arr[i] = i;
    }

    // Print the first combination
    printf("First combination: ");
    print_array(arr, r);

    // Generate and print the next combinations until there are no more
    while (next_combination(arr, n, r)) {
        printf("Next combination: ");
        print_array(arr, r);
    }

    return 0;
}

