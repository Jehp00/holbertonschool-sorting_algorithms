#include "sort.h"

/**
 * swap - it swaps two numbers.
 * @a: first integer.
 * @b: second integer.
 **/

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - split array around pivot
 * @array: array
 * @first: first element
 * @last: last element
 * @size: size
 * Return: i
 */

int partition(int *array, int first, int last, size_t size)
{
	int pivot = array[last];
	int i = first;
	int j;

	for (j = first; j < last; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	swap(&array[i], &array[last]);
	if (i != j)
		print_array(array, size);
	return (i);
}

/**
 * quickSort - sort a part of the list
*  @array: array
 * @first: first element
 * @last: last element
 * @size: size
 * Return: nothing
 */

void quickSort(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(array, first, last, size);
		quickSort(array, first, pivot - 1, size);
		quickSort(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - quick sort method array
 * @array: array
 * @size: size
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}
