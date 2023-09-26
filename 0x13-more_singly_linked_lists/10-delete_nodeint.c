#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		if (current_node == NULL)
		{
			return (-1);
		}
		previous_node = current_node;
		current_node = current_node->next;
	}
	if (previous_node == NULL)
	{
		*head = current_node->next;
	}
	else
	{
		previous_node->next = current_node->next;
	}
	free(current_node);
	return (1);
}
