#include "sort.h"

/**
* bubble_sort - sorts an array of integers using bubble sort
* array is sorted in ascending order
* @array: given array to sort
* @size: size of array to sort
*/

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, k;

	if (!array || size < 2)
		return;
	i = 0;
	while (i < size)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
