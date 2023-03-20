#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar("\n");
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	return (0);
}
