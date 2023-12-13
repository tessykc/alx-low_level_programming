#include <search_algos.h>

int binary_search(int *array, size_t low, size_t high, int value) {
    while (low <= high) {
        size_t mid = low + (high - low) / 2;

        printf("Comparing with array[%lu] = %d\n", mid, array[mid]);

        if (array[mid] == value) {
            return mid;  // Value found at position 'mid'
        }

        if (array[mid] < value) {
            low = mid + 1;  // Adjust the search range
        } else {
            high = mid - 1;
        }
    }

    return -1;  // Value not found
}

int exponential_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;  // Array is NULL
    }

    if (array[0] == value) {
        return 0;  // Value is at the first position
    }

    size_t i = 1;
    while (i < size && array[i] <= value) {
        printf("Comparing with array[%lu] = %d\n", i, array[i]);

        if (array[i] == value) {
            return i;  // Value found at position 'i'
        }

        i *= 2;  // Double the index for exponential range
    }

    size_t low = i / 2;
    size_t high = (i < size) ? i : size - 1;

    printf("Exponential range found: array[%lu] to array[%lu]\n", low, high);

    // Use binary search in the found range
    return binary_search(array, low, high, value);
}
