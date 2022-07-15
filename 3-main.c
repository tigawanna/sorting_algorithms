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
    int array[] = {2,1,3};
    size_t n = sizeof(array) / sizeof(array[0]);
  
    printf("before sort\n");
    print_array(array, n);
    quick_sort(array, n);
    printf("after sort\n");
    print_array(array, n);
    return (0);
}
