#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/* Where list is a pointer to the head of the skip list to search in
* A node of the express lane is placed every index
* which is a multiple of the square root of the size of the list 
* And value is the value to search for
* You can assume that list will be sorted in ascending order
* Your function must return a pointer on the first node where value is located
* If value is not present in list or if head is NULL, return NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value) {
  if(list == NULL)
    return NULL;
  
