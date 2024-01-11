#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
  * print_dlistint - print a double linked list
  * @h: head of the linked list
  *
  * Return: size_t, size of the linked list
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
