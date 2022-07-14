#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {0,0,19, 48, 99, 71, 13, 52, 96, 73, 86, 7, 100, -2};
    


    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("before sorting\n");
    bubble_sort(array, n);
    printf("after sorting\n");
    print_array(array, n);
    return (0);
}
