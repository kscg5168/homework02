#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int *const array,int const size)
{
    int *size_t=0;
    int i=0, j=0,a=0;
    for( i = 0;i<size; i++) {
        for( j=i;j< size;j++) {
            if( array[j] > array[i] ) 
            {
                size_t = array[j];
                array[j] = array[i];
                array[i] = size_t;
            }
        }
    }
  return 0;
}
