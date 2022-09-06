#include "sort.h"

/**
 * bubble_sort - Method bubble sort to sort an array
 * @array: array to be sorted
 * @size: array's size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t tmp;
	size_t flag;

	if (array == NULL || size == 0)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
