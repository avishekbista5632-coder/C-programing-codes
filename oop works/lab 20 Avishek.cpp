#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to swap two elements in an array
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reverse the elements in an array from start to end
void reverse(char arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

// Function to find the next permutation in lexicographic order
int next_permutation(char arr[]) {
    int n = strlen(arr);

    // Find the rightmost character that is smaller than the character to its right
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    // If no such character is found, the permutation is the last one
    if (i == -1) {
        return 0;
    }

    // Find the smallest character to the right of arr[i] and greater than arr[i]
    int j = n - 1;
    while (arr[j] <= arr[i]) {
        j--;
    }

    // Swap arr[i] and arr[j]
    swap(&arr[i], &arr[j]);

    // Reverse the suffix from arr[i+1] to the end
    reverse(arr, i + 1, n - 1);

    return 1;
}

int main() {
    char arr[] = "abc"; // Change this to your desired set of elements

    printf("Current permutation: %s\n", arr);

    // Generate and print permutations until there are no more
    while (next_permutation(arr)) {
        printf("Next permutation: %s\n", arr);
    }

    return 0;
}

