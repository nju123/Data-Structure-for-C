// 带头结点的单链表
# include<stdio.h>
# include<stdlib.h>

typedef struct LNode{
	int data;//数据域 
	struct LNode* next;//指针域 
}LNode,*LinkList;

bool initList(LinkList &L){
	L = (LNode*)malloc(sizeof(LNode));
	if(L==NULL){
		return false;
	}
	L->next = NULL;
	return true; 
}
bool isEmpty(LinkList L){
	if(L->next==NULL){
		return true;
	}
	return false;
}
int main(){
	LinkList L;
	initList(L);
}
 
