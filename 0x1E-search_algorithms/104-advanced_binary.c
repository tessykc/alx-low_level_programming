#include "search_algos.h"
#include <stdio.h>
int advanced_binary_recursive(int *array, size_t low, size_t high, int value) {
    if (low > high)
        return -1;

    size_t mid = low + (high - low) / 2;

    printf("Searching in array: ");
    for (size_t i = low; i <= high; ++i) {
        printf("%d", array[i]);
        if (i < high)
            printf(", ");
    }
    printf("\n");

    if (array[mid] == value) {
        if (mid > 0 && array[mid - 1] == value)
            return advanced_binary_recursive(array, low, mid, value);
        return mid;
    } else if (array[mid] < value)
        return advanced_binary_recursive(array, mid + 1, high, value);
    else
        return advanced_binary_recursive(array, low, mid - 1, value);
}

int advanced_binary(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}
