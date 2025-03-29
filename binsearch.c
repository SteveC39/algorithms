// C Program to implement binary search using iteration
#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        // Using bit shift for faster division by 2
        int mid = left + ((right - left) >> 1);
        
        int midVal = arr[mid];  // Avoid multiple array accesses
        
        if (midVal == key) {
            return mid;
        }
        
        if (midVal < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}


int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Element to be searched
    int key = 29;

    int result = binarySearch(arr, 0, size - 1, key);
    if (result == -1) {
        printf("Element is not present in array");
    }
    else {
        printf("Element is present at index %d", result);
    }
    return 0;
}
