#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next = NULL;

	while (curent != NULL)
	{
		next = current->next;
		current->next = *head;
		*head = current;
		current = next;
	}
	return (*head);
}
