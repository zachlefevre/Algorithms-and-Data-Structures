#include "linkedlist.h"
#include "nodetype.h"
#include <stdio.h>

int main(){
  Linked_List *l = LL_init();
  LL_append(l,Node_Type_init(5));
  LL_append(l,Node_Type_init(6));
  LL_append(l,Node_Type_init(7));
  LL_prepend(l,Node_Type_init(4));
  LL_print(l);
  LL_free(l);
}
