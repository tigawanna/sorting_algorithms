#include "sort.h"




void bubble_sort(int *array, size_t size){
size_t i,j;

for (i = 0; i < size; i++)
{
  for (j = 0; j < size -1; j++)
  {
    if(array[j] > array[j + 1]){
        int temp=array[j];
        array[j] = array[j + 1];
        array[ j + 1] = temp;

    }
  }
}


}
