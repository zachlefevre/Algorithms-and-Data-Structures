#include "nodetype.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool Node_Type_free(Node_Type *n)
{
  printf("Freeing Node_Type %d\n", n -> t);
  free(n);
}

Node_Type *Node_Type_init(int d)
{
  Node_Type *n = (Node_Type *)malloc(sizeof(Node_Type));
  n -> t = d;
  return n;
}

void Node_Type_print(Node_Type *n)
{
  printf("%d ", n -> t);
}
