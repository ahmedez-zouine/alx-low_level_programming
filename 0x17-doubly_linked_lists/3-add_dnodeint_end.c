#include "lists.h"

/**
  * add_dnodeint_end - add node to last list
  * @head: head of the lint.
  * @n: date to add in new node,
  *
  * Return: qui return node to be added
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *currentNode;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	currentNode = *head;
	while (currentNode && (currentNode)->next != NULL)
		(currentNode) = (currentNode)->next;

	(currentNode)->next = node;
	node->prev = currentNode;

	return (node);
}
