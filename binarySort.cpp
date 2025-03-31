#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) return -1;  // Base case

    int mid = left + (right - left) / 2; // Middle index

    if (arr[mid] == target) return mid; // Target found
    if (arr[mid] > target) return binarySearch(arr, left, mid - 1, target); // Search left
    return binarySearch(arr, mid + 1, right, target); // Search right
}

int main() {
    int arr[] = {2, 3, 4, 10, 15}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
