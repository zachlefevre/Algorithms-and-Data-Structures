#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef int Node_Type;

typedef struct Node_LL{
  Node_Type data;
  struct Node_LL *next;
} Node_LL;

typedef struct Linked_List{
  Node_LL *head;
  Node_LL *tail;
} Linked_List;


Linked_List *LL_init();

Node_LL *Node_LL_init(Node_Type);

#endif
