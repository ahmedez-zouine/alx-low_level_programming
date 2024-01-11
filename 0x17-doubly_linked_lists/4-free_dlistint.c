#include "lists.h"

/**
  * free_dlistint - this function free list of node. 
  * @head: start of list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;

	while (head)
	{
		cur = head;
		free(head);
		head = cur->next;
	}
}
