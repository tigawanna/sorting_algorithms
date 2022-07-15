#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of ints to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
if (size < 2)
return;
size_t i = 0, j;
bool swapped = false;
do {
swapped = false;
for (j = 0; j < size - 1 - i; j++)
{
if (array[j] > array[j + 1])
{
int temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
swapped = true;
}
}
i++;
} while (swapped);
}
