#include "linkedlist.h"
#include <stdio.h>

int main(){
  int a[] = {1,2,3,4,2,3,2};
  Linked_List *l = LL_atLL(a, sizeof(a)/sizeof(a[0]));
  LL_print(l);
  LL_free(l);
}
