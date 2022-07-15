
#include "sort.h"
#include <time.h>

void swap(int *x, int *y);
void quicksort(int array[], int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

/**
 * swap - swap items at the two indexes
 * @x: pointer to first value
 * @y: pointer to second value
 */

void swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}

/**
 * quick_sort - sorts an array with the Quicksort algorithm
 * @array: array of ints to sort
 * @n: size of the array
 */

void quick_sort(int array[], size_t n)
{
if (n < 2)
return;
int length = (int)n;
srand(time(NULL));
quicksort_recursion(array, 0, length - 1);
}

/**
 * quicksort_recursion - reapets until allte necessary swaps have happened
 * @array: array of ints to swap values for
 * @low: first index in the partition
 * @high: last index in the partition
 *
 *
 */

void quicksort_recursion(int array[], int low, int high)
{
if (low < high)
{
int pivot_index = partition(array, low, high);
quicksort_recursion(array, low, pivot_index - 1);
quicksort_recursion(array, pivot_index + 1, high);
}
}

/**
 * partition - gives a piv index for Quicksort
 * @array: array to find the piv in
 * @low: index of the left element
 * @high: index of the right element
 *
 * Return: the index of the piv element
 */
int partition(int array[], int low, int high)
{
int pivot_index = high;
int pivot_value, i, j;
if (pivot_index != high)
{
swap(&array[pivot_index], &array[high]);
}
pivot_value = array[high];
i = low;
for (j = low; j < high; j++)
{
if (array[j] <= pivot_value)
{
swap(&array[i], &array[j]);
i++;
}
}
swap(&array[i], &array[high]);
return (i);
}
