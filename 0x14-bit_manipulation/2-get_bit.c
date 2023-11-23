
//#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (n == 0 && index < 64)
		return (0);
	i = 0;
	while (i<= index)
	{
		n = n >> 1;
		if (index == i)
			return (n & 1);
		i++;
	}
	return (-1);
}
