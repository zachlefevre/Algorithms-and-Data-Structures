#include <stdlib.h>
#include "linkedlist.h"

Linked_List *LL_init()
{
  Linked_List *l = (Linked_List*) malloc(sizeof(Linked_List));
  l -> head = NULL;
  l -> tail = NULL;
  return l;
}

Node_LL *Node_LL_init(Node_Type q)
{
  Node_LL *n = (Node_LL *) malloc(sizeof(Node_LL));
  n -> data = q;
  n -> next = NULL;
  return n;
}
