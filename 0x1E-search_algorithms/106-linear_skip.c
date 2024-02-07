#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/* 
 * Where list is a pointer to the head of the skip list to search in
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
	skiplist_t *current = list;
	skiplist_t *express = list;
	/* 
	 * Finding the express lane
	 */
	while (express ->express != Null && express->n 
			< value) {
		printf("Value checked at index [%d]\n", express->express - list,
				express->n);
		current = express;
		express = express->express;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", current - list,
			express - list);
	/*
	 * Searching in the express lane
	 */
	while (current->n < value) {
		printf("Value checked at index [%lu] = [%d]\n", current - list,
				current->n);
		current = current->next;
		if (current == NULL || current->n > value)
			return NULL;
		else if (current->n == value)
			return current;
	}
	return NULL; // Value not found
}
