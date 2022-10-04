#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: NULL on faliure
 */
int **alloc_grid(int width, int height)
{
	int **grid, adefioye, afolake;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (adefioye = 0; adefioye < height; adefioye++)
	{
		grid[adefioye] = malloc(width * sizeof(int));

		if (grid[adefioye] == NULL)
		{
			while (adefioye >= 0)
			{
				free(grid[adefioye]);
				adefioye--;
			}
			free(grid);
			return (NULL);
		}
		for (afolake = 0; afolake < width; afolake++)
			grid[afolake][adefioye] = 0;
	}
	return (grid);
}
