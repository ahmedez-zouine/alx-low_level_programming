
#include "main.h"

/**
 * get_bit - returns the number of bits you would
 * @n: number one
 * @index: number two
 * Return: number of bits
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}
	return (-1);
}
