#include "sort.h"

/**
 * selection_sort - sorts an array following the selection sort algorithm
 * @array: array to sort
 * @size: size of the array;
 */

void selection_sort(int *array, size_t size)
{
int i, j, min_num_index, temp;
int syze = (int)size;

if (syze < 2)
return;

for (i = 0; i < syze - 1; i++)
{
min_num_index = i;
for (j = i + 1; j < syze; j++)
{
if (array[j] < array[min_num_index])
{
min_num_index = j;
}
if (min_num_index != i)
{
temp = array[i];
array[i] = array[min_num_index];
array[min_num_index] = temp;
}
}
}
}
