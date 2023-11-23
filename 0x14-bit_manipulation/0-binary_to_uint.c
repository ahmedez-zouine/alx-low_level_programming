
#include "main.h"

/*
 * this function qui perment de convert
 * binary number  to decimal number
 * qui return number decimal 
 *
 * */

unsigned int binary_to_uint(const char *b)
{
	unsigned int	result;
	int	i;

	i = 0;
	result = 0;
	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
		i++;
	}
	return (result);
}
