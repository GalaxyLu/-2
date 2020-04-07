#include<stdio.h>
#include<malloc.h>
#define ERROR 0
#define OK 1 
#define ElemType int

typedef struct LNode
{
 int data;
 struct LNode *next;
}LNode,*LinkList;

int CreateLink_L(LinkList &L,int n){
// 创建含有n个元素的单链表
 LNode *p,*q;
  int i;
  ElemType e;
  L = (LinkList)malloc(sizeof(LNode));
  L->next = NULL;              // 先建立一个带头结点的单链表
  q = L;
  for (i=0; i<n; i++) {
	 scanf("%d", &e);
    p = (LinkList)malloc(sizeof(LNode));  // 生成新结点
   p->date=e;
   q->next=p;
   q=p;
  }
  p->next=NULL;
  return OK;
}

int LoadLink_L(LinkList &L){
// 单链表遍历
 LinkList p = L->next;
 if(!p )printf("The List is empty!");
 else
 {
	 printf("The LinkList is:");
	 while(p)    // 
	 {
		printf("%d ",p->data); 
		p=p->next;   //
	 }
 }
 printf("\n");
 return OK;
}
