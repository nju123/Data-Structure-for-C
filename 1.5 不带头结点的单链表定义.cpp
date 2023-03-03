// 单链表的定义
# include<stdio.h>
# include<stdlib.h>
struct LNode{
	int data;
	struct LNode* next; 
};
typedef struct LNode LNode;
typedef struct LNode* LinkList;


bool initList(LinkList &L){
	L = NULL;
	return true;
} 

bool isEmpty(LinkList L){
	return(L==NULL);
}
int main(){
	LinkList L;
	initList(L);
}
