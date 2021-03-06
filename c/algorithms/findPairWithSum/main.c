#include <stdio.h>

int *findPairList(int *arr, int size, int sum){
  int i;
  int low = 0;
  int high = size - 1;
  static int pair[2];
  while(low < high){
    if(arr[low] + arr[high] == sum){
      pair[0] = arr[low];
      pair[1] = arr[high];
      return pair;
    }
    (arr[low] + arr[high] < sum)? low++: high--;
  }
  return NULL;
}

int *findPairSet(int *arr, int size, int sum){
  int i;
  int low = 0;
  int high = size - 1;
  static int pair[2];
  while(low <= high){
    if(arr[low] + arr[high] == sum){
      pair[0] = arr[low];
      pair[1] = arr[high];
      return pair;
    }
    (arr[low] + arr[high] < sum)? low++: high--;
  }
  return NULL;
}

int main(void){
  int a[] = {1,2,3};
  int size = sizeof(a)/sizeof(a[0]);
  int *pair = findPairList(a, size, 16);
  pair = findPairSet(a, size, 6);
  if(pair){
    printf("pair: %d, %d\n", pair[0], pair[1]);
  }else{
    printf("pair not found\n");
  }

}
