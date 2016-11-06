#ifndef CLIST_H
#define CLIST_H
#include<stdlib.h>
typedef struct CListElmt_
{
  void *data;
  struct ClistElmt_ *next;
}CListElmt;
/*define a structure for circular list.*/
typedef struct CList_
{
  int size;
  int (*math)(const void *key1,const void *key2)'
void (*destroy)(void *data);
CListElmt *head;
}CList;
/*public interface*/
void clist_init(CList *list,void (*destroy)(void *data));
void clist_destroy(CList *list);
int clist_ins_next(CList *list,CListElmt *element,const void *data);
int clist_rem_next(CList *list,CListElmt *element,void **data);
#define clist_size(list) ((list)->size)
#define clist_head(list) ((list)->head)
#define clist_data(element) ((element)->data)
#define clist_next(element) ((element)->next)
#endif
