#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array : the array where we want to look
 * @size : the size of the array
 * @value : the value we want to find
 *
 * Return: index i if SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = (size / 2), j;

	printf("Searching in array:");
	for (j = 0; j < size; j++)
	{
		printf("%d, ",array[j]);
	}
	printf("\n");
	while (i < size)
	{
		printf("Searching in array:");
		if (array[i] > value)
		{
			for (j = 0; j < i; j++)
			{
				printf("%d, ",array[j]);
			}
			printf("\n");
			i = i / 2;
		}
		else if (array[i] < value)
		{
			for (j = i + 1; j < size; j++)
			{
				printf("%d, ",array[j]);
			}
			printf("\n");
			i = (i + 1 + size) / 2;
		}
		else
		{
			return ((int)i);
		}
	}
	return (-1);
}
