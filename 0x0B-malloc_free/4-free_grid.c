#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees 2dimensional grid
 * @grid: 2 dimensional grid
 * @height: height dimension
 * Description: frees memory of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
