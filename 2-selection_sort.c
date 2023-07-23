#include "sort.h"

/**
  * selection_sort - the selection sort algorithm
  * @array: array to be sort
  * @size: size of the array
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp = 0, index = 0, isChanged = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
	index = i;
	for (j = i + 1; j < size; j++)
	{
		if (array[index] > array[j])
		{
			index = j;
			isChanged = 1;
		}
	}
	if (isChanged == 1)
	{
		tmp = array[i];
		array[i] = array[index];
		array[index] = tmp;
		print_array(array, size);
		isChanged = 0;
	}
	}
}
