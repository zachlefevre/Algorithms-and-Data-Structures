#include "trie.h"
#include "stdlib.h"
#include <stdio.h>
#include "../linkedlist/linkedlist.h"

Trie * Trie_init(int numBranches)
{
  Trie *t = (Trie *)malloc(sizeof(Trie) + (numBranches*sizeof(Linked_List*)));
  int i;
  for(i = 0; i < numBranches; i++)
  {
    printf("branch made\n");
    t -> branches[i] = LL_init();
    LL_append(t -> branches[i], Node_Type_init("foo",i));
  }
  for(i = 0; i < numBranches; i++)
  {
    LL_print(t -> branches[i]);
  }
}
