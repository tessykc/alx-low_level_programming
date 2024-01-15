#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/*
 * Where list is a pointer to the head of the list to search in
 * size is the number of nodes in list
 * And value is the value to search for
 * function must return a pointer to the first node where value is located
 * assume that list will be sorted in ascending order
 * If value is not present in head or if head is NULL, return NULL
 * use the square root of the size of the list as the jump step.
 * print this value when you compare a value in the list.
 */
listint_t *jump_list(listint_t *list, size_t size, int value) {
	if (list == NULL || size == 0) {
		return NULL;
	}
	size_t jump_step = (size_t)sqrt(size);
	listint_t *current = list;
	listint_t *prev = NULL;
	while (current && current->value < value) {
		printf("Comparing %d\n", current->value);
		prev = current;
		for (size_t i = 0; i < jump_step && current->next; i++) {
			current = current->next;
		}
	}
	if (prev && prev->value == value) {
		return prev;
	}
	if (current && current->value == value) {
		return current;
	}
	return NULL;
}
