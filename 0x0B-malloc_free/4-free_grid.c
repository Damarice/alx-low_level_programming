#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees a 2-dimensional arrays
* @grid: The 2-dimensional array
* @height: the heighr of grid
*/

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
