#include "sort.h"

/**
* selection_sort - Sort an array of integers in ascending order.
* @array: Array of integers.
* @size: The size of the array.
*
* Description: Prints the array after each swap.
*/

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i = 0, j;

	if (array == NULL || size < 2)
		return;

	while (i < size - 1)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			if (array[j] < *min)
				min = array + j;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
		i++;
	}
}
