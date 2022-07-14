#include "main.h"
/**
 * div - divides two integers
 * @a: int to be divided to b
 * @b: int to be divided to a
 * Return: the result of the operation
 */
int div(int a, int b)
{
	int c;

	while (b != 0)
		c = a / b;
	return (c);
}
