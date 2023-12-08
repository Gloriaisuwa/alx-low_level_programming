#include "lists.h"

/**
 * free_distint - free a distint_t list
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	tmp = head;

	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
