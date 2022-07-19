#include "sort.h"
#include <stdbool.h>

/**
 *swap - swaps two integers.
 *@xp: Pointer to the first integer.
 *@yp: Pointer tothe second integer.
 *Return: Nothing.
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - The function to sort an array
 * @array: The array to be sorted
 * @size: The number of elements in the arraiy
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	for (i = 0; i < size; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
				print_array(array, size);
			}
		}
		if (swapped == false)
			break;
	}
}
