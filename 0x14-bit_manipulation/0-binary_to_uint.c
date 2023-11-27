
#include "main.h"

/**
 * bnary_to_uint - this function qui perment de
 * conver binary number  to decimal number
 *
 * 
 * @: the string
 * Return: Decimal of the binary (Sccess) otherwise 0
 *
 **/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
