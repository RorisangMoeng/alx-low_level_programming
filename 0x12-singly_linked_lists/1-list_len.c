#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns elements in a linked list
 * @h: pointer to the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		f++;
		h = h->next;
	}
	return (f);
}
