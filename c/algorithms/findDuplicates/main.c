#include <stdio.h>

int findDuplicate(int *a, int size){
  int i;
  for(i = 0; i < size; i++){
    a[i] -= (i+1);
    if(a[i]){
      return i;
    }
  }
  return -1;
}

int main(void){
  int a[] = {1,2,3,4,5,6,7,7,8,9};
  int size = sizeof(a)/sizeof(a[0]);
  int duplicate = findDuplicate(a, size);
  if(duplicate > 0){
    printf("duplicate: %d\n", duplicate);
  }else{
    printf("duplicate not found\n");
  }
  return 0;
}
