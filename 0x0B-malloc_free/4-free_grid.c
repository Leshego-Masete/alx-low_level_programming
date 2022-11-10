#include "main.h"

/**
 * free_grid-allocats a grid, makes space and free space
 * @grid:takes on the width of a grid
 * @height:height of the grid
 * Return:the free grid
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
