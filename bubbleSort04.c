#include <stdio.h>
#include <stdlib.h>
void bubbleSort(const int const *array,int *arrays,const int const size)
{
    int *size_t=0;
    int i=0, j=0,a=0;
    for( i = 0;i<size; i++) {
        for( j=i;j< size;j++) {
            if( arrays[j] > arrays[i] ) 
            {
                size_t = arrays[j];
                arrays[j] = arrays[i];
                arrays[i] = size_t;
            }
        }
    }
  return 0;
}
