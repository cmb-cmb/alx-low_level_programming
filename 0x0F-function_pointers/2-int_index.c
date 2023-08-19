#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array of integers
 * @array: the array of integers
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: If no element matches or size <= 0, -1
 *		Otherwise, the index of the first element
 *		for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
