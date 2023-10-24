#include "lists.h"

/**
 * add_nodeint - add a node to the begining of a list
 * @head: the pointer points to the head pointer
 * which the head points to the first node
 * @n: new int to be created
 * Return: the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n,
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
