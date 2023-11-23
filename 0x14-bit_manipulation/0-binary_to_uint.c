
#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int	result;

	result = 0;
	if (!b)
		return (0);
	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		result = 2 * result + (*b - 48);
		b++;
	}
	return (result);
}
