#include "search_algos.h"

/**
 * binary_search - looks for an element in a list.
 * @array: array containing arguments passed to the program
 * @size: number of arguments
 * @value: value to search for
 * Return: when value is located, -1 if array is NULL/value not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
