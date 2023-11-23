
#include "main.h"

/**
 * clear_bit - returns one if condition existe
 * @n: number one
 * @index: number two
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
