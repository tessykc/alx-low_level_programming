#include <search_algos.h>

int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;  // Array is NULL
    }

    size_t low = 0;
    size_t high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Comparing with array[%lu] = %d\n", pos, array[pos]);

        if (array[pos] == value) {
            return pos;  // Value found at position 'pos'
        }

        if (array[pos] < value) {
            low = pos + 1;  // Adjust the search range
        } else {
            high = pos - 1;
        }
    }

    return -1;  // Value not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int value = 6;

    int result = interpolation_search(arr, size, value);

    if (result != -1) {
        printf("Value %d found at index %d\n", value, result);
    } else {
        printf("Value %d not found in the array\n", value);
    }

    return 0;
}
