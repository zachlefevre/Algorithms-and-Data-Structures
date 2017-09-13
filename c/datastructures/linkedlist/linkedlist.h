#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdbool.h>
#include "nodetype.h"

typedef struct Node_LL{
  Node_Type data;
  struct Node_LL *next;
} Node_LL;

typedef struct Linked_List{
  Node_LL *head;
  Node_LL *tail;
} Linked_List;


Linked_List *LL_init();
bool LL_append(Linked_List*, Node_Type);
bool LL_prepend(Linked_List*, Node_Type);
void LL_print(Linked_List*);
Linked_List *LL_atLL(Node_Type *, int);
Node_LL *Node_LL_free(Node_LL *);

Node_LL *Node_LL_init(Node_Type);

#endif
