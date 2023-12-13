#include <search_algos.h>
#include <math.h>

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
