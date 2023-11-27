#include "main.h"
/*
 * read_textfile - this method use for recuper text 
 * from file provider in param
 * @filename name d'un file
 * @letters numbers of the letter read and printed
 * @return number of the caracter print
 *
 * */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[letters];
	char c;
	int m;
	int i;
	i = 0;
	m = 0;
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	m = read(fd,buffer, sizeof(buffer));
	if (m < 0)
		return (0);
	while (i < letters)
	{
		c = buffer[i];
		_putchar(c);
		i++;
	}
	close(fd);
}
