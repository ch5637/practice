#ifdef BITREE_H
#define BITREE_H
#include<stdlib.h>
/*Define  a structure for birary tree nodes.*/
typedef struct BitTreeNode_
{
  void *data;
  struct BitTreeNode_ *left;
  struct BitTreeNode_ *right;
}
  BitTreeNode;
/*Define a structure for binary tree.*/
typedef struct BiTree_
{
  int szie;
  int (*compare)(const void *key1,const void *key2);
  void (*destroy)(void *data);
} BiTreeNode;
typedef struct BiTree_
{
  int size;
  int (*compare)(const void *key1,const void *key2);
  void (*destroy)(void *data);
  BiTreeNode *root;
}BiTree;
/*Public Interface*/
void bitree_init(BiTree *tree,void (*destroy)(void *data));
void bitree_destroy(BiTree *tree);
int bitree_ins_left(BiTree *tree,BiTreeNode *node,const void *data);
int bitree_ins_right(BiTree *tree,BiTreeNode *node,const void *data);
void bitree_rem_left(BiTree *tree,BiTreeNode *node);
void bitree_rem_right(BiTree *,BiTreeNode *node);
int bitree_merge(BiTree *merge,BiTree *left,BiTree *right,const void *data);
#define bitree_size(tree) ((tree)->size)
#defien bitree_root(tree) ((tree)->root)
#define bitree_is_eob(node) ((node)==NULL)
#define bitree_is_leaf(node) ((node)->left==NULL&&(node)->right==NULL)
#define bitree_is_data(node) ((node)->data)
#define bitree_left(node) ((node)->left)
#define bitree_right(node) ((ndoe)->right)
#endif

