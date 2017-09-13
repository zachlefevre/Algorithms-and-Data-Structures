#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "linkedlist.h"

Linked_List *LL_init()
{
  Linked_List *l = (Linked_List*) malloc(sizeof(Linked_List));
  l -> head = NULL;
  l -> tail = NULL;
  return l;
}

bool LL_append(Linked_List *list, Node_Type q)
{
  if(list == NULL) return false;
  Node_LL *n = Node_LL_init(q);
  if(list -> head == NULL){
    list -> head = n;
    list -> tail = n;
    return true;
  }else{
    list -> tail -> next = n;
    list -> tail = n;
    return true;
  }
  return false;
}

bool LL_prepend(Linked_List *list, Node_Type q)
{
  if(list == NULL) return false;
  Node_LL *n = Node_LL_init(q);
  if(list -> head == NULL){
    list -> head = n;
    list -> tail = n;
    return true;
  }else{
    Node_LL *temp = list -> head;
    list -> head = n;
    n -> next = temp;
    return true;
  }
}

void LL_print(Linked_List *list)
{
  Node_LL *trace;
  for(trace = list -> head; trace != NULL; trace = trace -> next){
    printf("%d ", trace -> data);
  }
  printf("\n");
  return;
}

Linked_List *LL_atLL(Node_Type *a, int size){
  int i;

  if(a == NULL) return NULL;
  Linked_List *list = LL_init();
  for(i = 0; i < size; i++){
    LL_append(list, a[i]);
  }
  return list;
}

bool LL_free(Linked_List *list)
{
  Node_LL *trace;
  for(trace = list -> head; trace != NULL;){
    printf("%d\n",trace -> data);
    Node_LL *tmp = trace;
    trace = trace -> next;
    Node_LL_free(tmp);
  }
  free(list);
}

Node_LL *Node_LL_init(Node_Type q)
{
  Node_LL *n = (Node_LL *) malloc(sizeof(Node_LL));
  n -> data = q;
  n -> next = NULL;
  return n;
}

Node_LL *Node_LL_free(Node_LL *n)
{
  Node_LL *tmp = n -> next;
  free(n);
  return n;
}
