#include "sort.h"
/**
 * bubble_sort - A function to sort an array using
 * bubble_sort
 * @array: Pointer to the array to be sorted
 * @size: length of the array
 */

void bubble_sort(int *array, size_t size)
{
	int i, j;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < (int)size - 1; i++)
	{
		for (j = 0; j < (int)size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
