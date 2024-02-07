#include "search_algos.h"

/**
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the index where value is located
* You can assume that array will be sorted in ascending order
* You can assume that value won’t appear more than once in array
* if array is NULL, your function must return -1
*/
int binary_search(int *array, size_t size, int value){
  if (array == NULL) {
    return -1; // Return -1 if the array is NULL
  }
  int left = 0;
  int right = size - 1;
  while (left <= right) {
    int middle = left + (right - left) / 2;
    if (array[middle] == value) {
      return middle; // Return the index if the value is found
    } else if (array[middle] < value) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }
  return -1; // Return -1 if the value is not found in the array
}

