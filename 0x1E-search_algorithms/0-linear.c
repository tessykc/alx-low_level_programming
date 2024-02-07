#include "search_algos.h"

/**
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* if array is NULL, your function must return -1
*/
int linear_search(int *array, size_t size, int value){
  if (array == NULL) {
    return -1; // Return -1 if the array is NULL
}
for (size_t i = 0; i < size; i++) {
  if (array[i] == value) {
    return i; // Return the index if the value is found
        }
}
}
