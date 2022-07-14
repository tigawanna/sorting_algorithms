#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of ints to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
size_t i = 0, j;
bool swapped = false;
do {
swapped = false;
for (j = 0; j < size - 1 - i; j++)
{
printf(" main loop %lu  ", i);
printf(" child loop %lu\n", j);
if (j == 0)
{
printf("=======level: %lu  ========\n", i);
}
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
