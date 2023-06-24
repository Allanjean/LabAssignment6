int search(int numbers[], int low, int high, int value) {
    if (low > high) {
        return -1;  // Base case: value not found in the array
    }

    int mid = low + (high - low) / 2;  // Calculate the middle index

    if (numbers[mid] == value) {
        return mid;  // Base case: value found at the middle index
    } else if (numbers[mid] < value) {
        return search(numbers, mid + 1, high, value);  // Search in the 2nd half
    } else {
        return search(numbers, low, mid - 1, value);  // Search in the 1st half
    }
}