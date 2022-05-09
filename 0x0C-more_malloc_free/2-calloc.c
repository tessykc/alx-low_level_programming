#include <stdlib.h>
#include "main.h"

/*
 * _calloc - allocates memory for an array of, using malloc 
 * nmemb: elements of size bytes each in the array
 * @size: bytes of the element
 * Return: void pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
