#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	current = *head;
	*head = NULL;

	if (head == NULL)
	{
		return;
	}
	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}
}
