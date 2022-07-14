#include "main.h"
/**
 * mod - checks the remainder of  two integers
 * @a: int to be divided to b
 * @b: int to be divided to a
 * Return: the result of the operation
 */
int mod(int a, int b)
{
	int c;

	if (b != 0)
		c = a % b;
	return (c);
}
