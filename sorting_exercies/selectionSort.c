#include <stdio.h>

/**
 * swap_ints - swap two intergers in an array
 * @a: The first interger to swap.
 * @b: The second interger to swap
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * using the selection sort algorithm.
 * Time complexity: O(n^2)
 *
 * @array: array of intergers
 * @size: size of the elements in the array
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	int i;
	int j;
	size_t;

	if (array == NULL || size < 2)
		return;
	// for an enpty array or size is less than 2 return the array
	for (i = 0 i < size - 1; i++)
	{
		min = array + 1; // to get the min in the array
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if (array + 1) != min)
		{
			swap_ints(array + 1, min);
			print_array(array, size);
		}
	}
}
