#include <stdio.h>

void insertion_sort(int a[], int length);

int main()
{
  // test the algorithm implementation with an example array
  int a[] = {3,2,1};
  
  int n = (int)sizeof(a) / sizeof(a[0]);
   printf(" array size ==== %d\n",n);
   for (int i = 0; i < n; i++)
    printf("%d,",a[i]);

    printf("\n");
  insertion_sort(a, n);

   for (int i = 0; i < n; i++)
    printf("%d,",a[i]);
    printf("\n");
  return 0;
}


// sorts the array a with the given length using the insertion sort algorithm:
//   https://en.wikipedia.org/wiki/Insertion_sort
void insertion_sort(int a[], int length)
{
 int ex[] ={3,1,2};
 // ex=[1,3,2]
  // the outer loop examines each element on the right-hand side of the array 
  // from the 2nd element on to the end of the array
  for (int i = 1; i < length; i++)
  {
    // the inner loop shifts over elements on the sorted left hand side of the 
    // list until the correct sorted position for the key element is found, at 
    // which point we place it there
    int key = a[i];
    int j = i - 1;

    // printf("key === %d  I === %d J === %d  a[j] ==== %d\n",key,i,j,a[j]);
    // i = 2
    // j = 1
    while (j >= 0 && a[j] > key)
    {
      printf("key === %d  I === %d J === %d  a[j] ==== %d\n",key,i,j,a[j]);  
      a[j + 1] = a[j];
      j = j - 1;

      printf("j after loop === %d\n",j);
    }
    a[j + 1] = key;
  }
}


void insert_sort(int a[], int length){
int ex[] ={3,1,2};

int i,j,key;

for(i = 1; i<length ;i++){
key = a[i];

}

}
