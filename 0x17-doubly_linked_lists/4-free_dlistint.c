#include "lists.h"

/**
  * free_dlistint - this function free list of node.
  * @head: start of list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;

	currentNode = head;
	while (currentNode->next != NULL)
	{
		free(currentNode);
		currentNode = currentNode->next;
	}
	free(currentNode);
}
