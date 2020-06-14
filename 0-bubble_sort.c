#include "sort.h"

/**
* swap - switches a and b
* @a: > num
* @b: < num
* Returns: N/A
*/

void swap(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}



/**
* bubble_sort - sorts an array using bubble sort
* @array: the array
* @size: size of array
* Return: N/A
*/

void bubble_sort(int *array, size_t size)
{
size_t i, j;

for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array(array, size);
}
}
}
}
