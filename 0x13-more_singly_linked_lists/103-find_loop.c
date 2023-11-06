#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: A pointer to the head of the list
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise = head;
listint_t *here = head;

if (!head)
return (NULL);

while (tortoise && here && here->next)
{
here = here->next->next;
tortoise = tortoise->next;
if (here == tortoise)
{
tortoise = head;
while (tortoise != here)
{
tortoise = tortoise->next;
here = here->next;
}
return (here);
}
}

return (NULL);
}
