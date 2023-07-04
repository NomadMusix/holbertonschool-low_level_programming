#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by
 * alloc_grid function.
 * @grid: the 2 dimensional grid to be freed.
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]); /* free memory allocated for each row */
	}
	free(grid); /* free the memory allocated for the grid */
}
