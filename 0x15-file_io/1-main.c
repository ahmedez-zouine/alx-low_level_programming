#include "main.h"

#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **argv)
{
	int res;
	if (ac != 3)
	{
		dprintf(2, "Usage %s filename text \n", argv[0]);
		exit(1);
	}
	res = create_file(argv[1], argv[2]);
	printf("--> %i)\n", res);

	return (0);

}
