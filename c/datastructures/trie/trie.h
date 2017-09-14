#ifndef TRIE_H
#define TRIE_H
#include "../linkedlist/linkedlist.h"
#include "../linkedlist/nodetype.h"
#include <stdbool.h>

typedef struct Trie
{
  bool isNode;
  Linked_List *branches[];
}Trie;

Trie * Trie_init(int);

#endif
