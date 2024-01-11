#include "lists.h"

/**
  * print_dlistint - print node data.
  * @h: head of the list.
  *
  * Return: return lenght of the liste
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
