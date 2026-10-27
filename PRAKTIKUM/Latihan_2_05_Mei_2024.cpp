#include <iostream>
#include <algorithm>

// Sequential Search
int sequentialSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Binary Search
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

// Interpolation Search
int interpolationSearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high && target >= arr[low] && target <= arr[high]) {
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (target - arr[low]);
        if (arr[pos] == target) {
            return pos;
        } else if (arr[pos] < target) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Example usage
    int target = 3;

    // Sequential Search
    int resultSequential = sequentialSearch(arr, n, target);
    if (resultSequential != -1) {
        std::cout << "Sequential Search: Element found at index " << resultSequential << std::endl;
    } else {
        std::cout << "Sequential Search: Element not found" << std::endl;
    }

    // Binary Search
    std::sort(arr, arr + n);
    int resultBinary = binarySearch(arr, n, target);
    if (resultBinary != -1) {
        std::cout << "Binary Search: Element found at index " << resultBinary << std::endl;
    } else {
        std::cout << "Binary Search: Element not found" << std::endl;
    }

    // Interpolation Search
    int resultInterpolation = interpolationSearch(arr, n, target);
    if (resultInterpolation != -1) {
        std::cout << "Interpolation Search: Element found at index " << resultInterpolation << std::endl;
    } else {
        std::cout << "Interpolation Search: Element not found" << std::endl;
    }

    return 0;
}

