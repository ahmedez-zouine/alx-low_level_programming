#include "main.h"

/**
 * set__bit - returns the number of bits you would
 * @n: number one
 * @index: number two
 * Return: number of bits
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
