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
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
/**
 * exponential_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j = 0, size1, k, l = 0;
	int *array1, m;

	if (array == NULL)
		return (-1);
	if (array[0] > value)
		return (-1);
	while (i < size)
	{
		if (array[i] >= value)
		{
kk:
				printf("Value found between indexes [%ld] and [%ld]\n", j, i);
				array1 = (int *)malloc((i - j + 1) * sizeof(int));
				if (array1 == NULL)
					return (-1);
				size1 = (i - j) + 1;
				for (k = j; k <= i; k++)
				{
					array1[l] = array[k];
					l++;
				}
				m = binary_search(array1, size1, value);
				free(array1);
				if (m != -1)
					return (m + j);
				else
					return (-1);
				break;
		}
		if (array[i] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			j = i;
			i = i * 2;
		}
		if (i >= size)
		{
			i = size - 1;
			goto kk;
		}
	}
	return (-1);
}
