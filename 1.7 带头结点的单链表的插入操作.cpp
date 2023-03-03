//单链表的插入操作
#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
	int data;
	LNode* next;
}LNode,*LinkList;

bool initList(LinkList &L){
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	return true;
} 

bool isEmpty(LinkList L){
	if(L->next == NULL){
		return true;
	}
	return false;
}

bool insert(LinkList &L,int position,int data){
	//position表示次序，不能插入第0个位置 
	if(position<1){
		return false; 
	} 
	LNode* p = L;
	int j=0;
	while(p!=NULL&&j<position-1) {
		p = p->next;
		j++;
    }
	if(p==NULL){
		return false;
	}
	//=====上面将指针移到position-1的位置上，下面将进行插入===========
	LNode *s = (LNode*)malloc(sizeof(LNode));
	s->data = data;
	s->next = p->next;
	p->next = s;
	return true; 		
}
int main(){
	LinkList L;
	initList(L);
	insert(L,1,1);
	insert(L,2,2);
}








