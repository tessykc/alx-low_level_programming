#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index of the value in the array if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t prev_bound = 0;

    if (array == NULL)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        prev_bound = bound;
        bound *= 2;
    }

    if (bound >= size)
        bound = size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", prev_bound, bound);

    return binary_search(array, prev_bound, value);
}
