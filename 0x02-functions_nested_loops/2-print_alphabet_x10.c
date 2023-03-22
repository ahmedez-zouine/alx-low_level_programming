#include "main.h"
/**
  3  * main - check the code
  4  *
  5  * Return: Always 0.
  6  */
void print_alphabet(void)
{       
	int i;
	int j;
  for( i = 0; i <= 10 ; i++)
 {
	 for( j = 0; j <= 122; j++)
	 {
		_putchar(j);
	 }
	 putchar('\n');
 }
