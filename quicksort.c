#include <stdio.h>
#include "sort.h"


void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}
int main(){
 
  int i;
   
  int number[] = {2,3,1};
  size_t n = sizeof(number) / sizeof(number[0]);
  int count = (int)sizeof(number) / sizeof(number[0]);
  
   printf("before sort: ");
   print_array(number,n);

   quicksort(number,0,count-1);

   printf("after sort: ");
   print_array(number,n);
   return 0;
}
