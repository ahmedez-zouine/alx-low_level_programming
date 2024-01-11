#include "lists.h"
#include <stddef.h>
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t lst;
	lst =(dlistint_t) h;
	size_t i = 0;
	while (!lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
