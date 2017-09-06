#include <stdio.h>

int findDuplicate(int *a, int size){
  int i;
  for(i = 0; i < size; i++){
    a[i] -= (i+1);
    if(a[i]){
      printf("%d is the duplicate\n",i);
      return;
    }
  }
  return -1;
}

int main(void){
  int a[] = {1,2,3,4,5,6,6};
  findDuplicate(a, sizeof(a)/sizeof(a[0]));
}
