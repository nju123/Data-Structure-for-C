//单链表元素的删除（以带头结点的链表为例）
#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
	int data;
	LNode *next;
}LNode,*LinkList;

//已知位序删除元素
bool ListDeleteByOrder(LinkList &L,int position,int deletedItem)
{
	// 1. 找到position之前位置的元素
	if(position<1){
		return false;
	} 
	LNode *p = L;
	int j = 0;
	while(p!=NULL&&j<position-1){
		p = p->next;
		j++;
	}
	if(p==NULL){
		return false;
	}
	// 2. 删除position位置上的元素
	int deletedItem = p->next->data;
	p->next = p->next->next;
	return true;
 } 
//已知结点删除元素 : 还是通过值交换的办法，但是有一点小bug，如果是从头指针遍历的话就没问题 
bool ListDeleteByNode(LNode *p){
	if(p==NULL){
		return false; 
	}
	LNode *q = p->next;
	p->data = p->next->data;
	p->next = q->next;
	free(q);
	return true;
}



















 
