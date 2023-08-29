#include "lists.h"

/**
 * print_listint - prints elements of a listin_t list
 * @h: linked list to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
