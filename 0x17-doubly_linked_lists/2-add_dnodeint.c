#include "lists.h"
/**
 * add_dnodeint- Insert new node at the beginnig
 * @head: Is the pointer to the direction of the head
 * @n:The data integer
 * Return: The new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (node);
}
