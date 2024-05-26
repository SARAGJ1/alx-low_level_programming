#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * 
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j = 0, size1, k, l = 0;
	int *array1;
	int m;

	if (array == NULL)
		return (-1);
	if (array[0] > value)
		return (-1);
	while (i < size)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", j, i);
			array1 =(int *)malloc((i - j + 1) * sizeof(int));
			if (array1 == NULL)
			{
				return (-1);
			}
			size1 = (i - j) + 1;
			for (k = j; k <= i; k++)
			{
				array1[l] = array[k];
				l++;
			}
			m = binary_search(array1, size1, value);
			free(array1);
			return (m + j);
			break;
		}
		if (array[i] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			j = i;
			i = i * 2;
		}
		if (i >= size)
			i = size - 1;
	}
	return (-1);
}
