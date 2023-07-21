#include "sort.h"

/**
* bubble_sort - Bubble sort function
* @array: array that will be stored
* @size: size of the array
*
* Return: non
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
			tmp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = tmp;
			print_array(array,size);
			}
		}
	}
}
