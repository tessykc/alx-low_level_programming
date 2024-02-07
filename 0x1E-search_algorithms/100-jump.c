#include "search_algos.h"
#include <math.h>
/**
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* function must return the first index where value is located
* assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* You have to use the square root of the size of the array as the jump step.
* You can use the sqrt() function included in <math.h>
*/

int jump_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;  // Array is NULL or empty
    }

    int step = sqrt(size);
    int prev = 0;

    while (array[prev] < value) {
        printf("Comparing value at index %d\n", prev);
        
        prev += step;

        if (prev >= size) {
            break;
        }
    }

    int i;
    for (i = prev - step; i < size && array[i] < value; i++) {
        printf("Comparing value at index %d\n", i);
    }

    if (i < size && array[i] == value) {
        printf("Comparing value at index %d\n", i);
        return i;  // Value found
    }

    return -1;  // Value not present in the array
}
