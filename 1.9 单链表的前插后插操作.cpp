//单链表（以带头结点为例）的后插前插 (其中节点已知)操作
#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
	int data;
	LNode* next;
}LNode,*LinkList;

bool insertNextLNode(LNode *p,int value){
	//已知结点，在结点之后插入结点 O(1)
	if(p==NULL){
		return false;
	}
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if(s==NULL){
		return false;//内存满了 
	}
	s->data = value;
	s->next = p->next;
	p = s;
	return true; 
} 

// 第一种前插的方法：知道头指针，从头开始遍历到p的前驱结点q，在q之后进行后插即可   O(n)
bool insertPriorNode(LinkList L,LNode *p,int value){
	LNode *q = (LNode*)malloc(sizeof(LNode));//q是p的前驱结点 
	if(q==NULL||p==NULL){//指没内存了 或 p不存在 
		return false;
	}
	LNode *find = L;//find是用来遍历的指针 
	while(find->next!=p){
		find = find->next;
	}
	q = find;
	insertNextLNode(q,value);
	return true;
}
// 第二种前插的方法：将p与s的数据域中的值互换  O(1)
bool insertPriorNode2(LNode *p,int value){
	if(p==NULL){
		return false;
	}
	LNode *s = (LNode*)malloc(sizeof(LNode));
	if(s==NULL){
		return false;
	} 
	s->next = p->next;
	p->next = s;
	s->data = p->data;
	p->data = value;
	return true;
} 
int main(){
}












 
