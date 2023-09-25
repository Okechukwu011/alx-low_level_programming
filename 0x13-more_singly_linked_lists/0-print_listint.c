#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * Description: singly linked list node structure
 * @h: pointer to the head
 * format: see example
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
