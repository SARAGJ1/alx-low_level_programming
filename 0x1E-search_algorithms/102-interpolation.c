#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * interpolation_search -  function that searches for a value in a
 *                         sorted array of integers using the
 *                         Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, p;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);
	while (low < high)
	{
		p = low + ((value - array[low]) * (high - low)) / (array[high] - array[low]);
		if (p > size)
		{
			printf("Value checked array[%ld] is out of range\n", p);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", p, array[p]);
		if (array[p] < value)
			low = p + 1;
		else if (array[p] > value)
			high = p - 1;
		else
			return (p);
	}
	return (-1);
}
