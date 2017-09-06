#include <stdio.h>

void sort(int* a, int n, int o, int t){
  int i;
  int k = 0;

  for(i = 0; i < n; i++){
    if(a[i] == o){
      a[k++] = o;
    }
  }

  for(i = k; i < n; i++){
    a[i] = t;
  }
}

int main(void){
  int i;
  int arr[] = {0,0,2,2,0,2,0};
  int size = sizeof(arr)/sizeof(arr[0]);
  sort(arr, size, 0, 2);
  for(i = 0; i < size; i++){
    printf("%i", arr[i]);
  }
  printf("\n");
}
