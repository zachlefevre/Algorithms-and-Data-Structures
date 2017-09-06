#include <stdio.h>

void sort(int* a, int n){
  int i;
  int k = 0;

  for(i = 0; i < n; i++){
    if(a[i] == 0){
      a[k++] = 0;
    }
  }

  for(i = k; i < n; i++){
    a[i] = 1;
  }
}

int main(void){
  int i;
  int arr[] = {1,0,0,1,1,1,0,0,0,0,1,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  sort(arr, size);
  for(i = 0; i < size; i++){
    printf("%i", arr[i]);
  }
  printf("\n");
}
