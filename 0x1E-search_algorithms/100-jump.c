#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted
 *               array of integers using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t x = 0, m, y, i;

	if (array == NULL || size == 0)
		return (-1);
	m = sqrt(size);
	while (x < size + m)
	{
		if ((array[x] >= value) || (x > size))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", y, x);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		y = x;
		x = x + m;
	}
	for (i = y; i <= x; i++)
	{
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
