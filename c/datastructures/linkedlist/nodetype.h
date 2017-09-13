#ifndef NODE_TYPE_H
#define NODE_TYPE_H
#include <stdbool.h>

typedef struct Node_Type
{
  int t;
} Node_Type;

bool Node_Type_free(Node_Type *);
Node_Type *Node_Type_init(int);
void Node_Type_print(Node_Type *);

#endif
