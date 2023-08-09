#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - two dimensional array of integers
 * @width: .
 * @height: .
 * Return: .
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **e;

	if (width <= 0 || height <= 0)
		return (NULL);

	e = malloc(sizeof(int *) * height);

	if (e == NULL)
	{
		free(e);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		e[a] = malloc(sizeof(int) * width);

		if (e[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(e[b]);
			}

			free(e);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			e[c][d] = 0;
		}
	}

	return (e);
}
