#include "linkedlist.h"
#include "nodetype.h"
#include <stdio.h>

int main(){
  Linked_List *l = LL_init();
  LL_append(l,Node_Type_init("baz",5));
  LL_append(l,Node_Type_init("zach",6));
  LL_append(l,Node_Type_init("foo",7));
  LL_prepend(l,Node_Type_init("bar",4));
  LL_print(l);
  LL_free(l);

  Node_Type *a[] = {Node_Type_init("",5),Node_Type_init("",6),Node_Type_init("",5)};
  Linked_List *l2 = LL_atLL(a, sizeof(a)/sizeof(a[0]));
  LL_print(l2);
  LL_free(l2);
}
