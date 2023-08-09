#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a grid
 * @grid: value
 * @height: value
 * Return: value
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
