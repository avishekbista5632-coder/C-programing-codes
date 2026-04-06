#include <stdio.h>

// Function to perform binary search recursively
int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the key is present at the middle
        if (arr[mid] == key)
            return mid;

        // If the key is smaller than the middle element, search in the left subarray
        if (arr[mid] > key)
            return binarySearchRecursive(arr, low, mid - 1, key);

        // If the key is larger than the middle element, search in the right subarray
        return binarySearchRecursive(arr, mid + 1, high, key);
    }

    // Key is not present in the array
    return -1;
}

// Objective: Implement a perfect binary search using recursion.
// Theory: Binary search is an efficient algorithm for finding an item from a sorted list of items. 
//          It works by repeatedly dividing the search range in half. In this implementation, recursion is used to
//          perform the binary search. The key advantage of binary search is that it has a time complexity of O(log n).
//          The program takes a sorted array, low and high indices, and a key to search for. It returns the index of the key
//          if found, otherwise -1.

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    // Perform binary search
    int result = binarySearchRecursive(arr, 0, n - 1, key);

    // Display the result
    if (result != -1)
        printf("Element %d found at index %d.\n", key, result);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
