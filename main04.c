#include <stdio.h>
#include <stdlib.h>

void bubbleSort(const int* const ,int* ,const int const);

int main() {
int array[10]={9,4,8,7,94,87,13,15,5,1};
    int i=0;
    printf("Data items in original order:");
    
     for( i = 0; i < 10; i++ ) {
        printf("%3d", array[i]);
    }
    bubbleSort(array,array,10);
    printf("\n\nData items in ascending order:");
    for( i = 0; i < 10; i++ ) {
        printf("%3d", array[i]);
    }
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
