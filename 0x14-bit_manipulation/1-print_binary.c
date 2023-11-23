
#include "main.h"

/**
 * print_binary - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one
 * Return: number of bits
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
