//不带头结点的单链表的插入操作
#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
	int data;
	LNode* next;
}LNode,*LinkList;

bool init(LinkList &L){
	L = NULL;
	return true;
} 

bool insert(LinkList &L,int position,int value){
	if(position<1){
		return false;
	}
	if(position==1){
		LNode* s = (LNode*)malloc(sizeof(LNode));
		s->data = value;
		s->next = L;
		L = s;
		return true;
	}
	else{
		int j = 1;
		LNode* p = L;
		while(p!=NULL&&j<position-1){
			p = p->next;
			j++;
		}
		if(p==NULL){
			return false;
		}
		LNode* s = (LNode*)malloc(sizeof(LNode));
		s->data = value;
		s->next = p->next;
		p->next = s;
		return true;
	}
}


int main(){
}
