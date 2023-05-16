#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to grid or NULL on failure
 */

int **alloc_grid(int width, int height)
{
        int **grid;
        int i, j;

        if (width <= 0 || height <= 0)
                return (NULL);

        grid = (int **)malloc(width * sizeof(*grid));

        if (grid == NULL)
                return (NULL);

        for (i = 0; i < width; i++)
        {
                grid[i] = malloc(height * sizeof(**grid));
                if (grid[i] == NULL)
                {
                        for (j = 0; j < i; j++)
                                free(grid[j]);

                        free(grid);
                        return (NULL);
                }

                for (j = 0; j < height; j++)
                        grid[i][j] = 0;
        }

        return (grid);
}
