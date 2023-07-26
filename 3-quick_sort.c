#include "sort.h"

/**
 * partition - function that sort a part of the array
 * @array: pointer to array of integers to be sorted
 * @low: position of the start
 * @hight: position of the finish
 * @size: size of the array
 *
 * Return: the index of the pivot
 */

int partition(int *array, int low, int hight, int size)
{
	int i, j, tmp, pivot;

	pivot = array[hight];
	i = low - 1;

	for (j = low; j < hight; j++)
	{
	if (pivot > array[j])
	{
		i++;
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		if (i != j)
			print_array(array, size);
	}

	}
	if (array[hight] < array[i + 1])
	{
	tmp = array[i + 1];
	array[i + 1] = array[hight];
	array[hight] = tmp;
	if (i + 1 != j)
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quickSort - function that sorts the array recursively
 * @array: pointer to array of integers to be sorted
 * @low: position of the start
 * @hight: position of the finish
 * @size: size of the array
 */

void quickSort(int *array, int low, int hight, int size)
{
	if (low < hight)
	{
	int pivot = partition(array, low, hight, size);

	quickSort(array, low, pivot - 1, size);
	quickSort(array, pivot + 1, hight, size);
	}
}

/**
 * quick_sort - sorts an array of integers in using a quick sort algorithm
 * @array: pointer to array of integers to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quickSort(array, 0, (int)size - 1, size);
}
