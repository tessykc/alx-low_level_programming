#include "search_algos.h"

/**
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* function must return the first index where value is located
* assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* To determine the probe position, you can use : 
* size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))
*/
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

