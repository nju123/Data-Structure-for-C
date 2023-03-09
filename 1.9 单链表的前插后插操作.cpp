//�������Դ�ͷ���Ϊ�����ĺ��ǰ�� (���нڵ���֪)����
#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
	int data;
	LNode* next;
}LNode,*LinkList;

bool insertNextLNode(LNode *p,int value){
	//��֪��㣬�ڽ��֮������� O(1)
	if(p==NULL){
		return false;
	}
	LNode* s = (LNode*)malloc(sizeof(LNode));
	if(s==NULL){
		return false;//�ڴ����� 
	}
	s->data = value;
	s->next = p->next;
	p = s;
	return true; 
} 

// ��һ��ǰ��ķ�����֪��ͷָ�룬��ͷ��ʼ������p��ǰ�����q����q֮����к�弴��   O(n)
bool insertPriorNode(LinkList L,LNode *p,int value){
	LNode *q = (LNode*)malloc(sizeof(LNode));//q��p��ǰ����� 
	if(q==NULL||p==NULL){//ָû�ڴ��� �� p������ 
		return false;
	}
	LNode *find = L;//find������������ָ�� 
	while(find->next!=p){
		find = find->next;
	}
	q = find;
	insertNextLNode(q,value);
	return true;
}
// �ڶ���ǰ��ķ�������p��s���������е�ֵ����  O(1)
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












 
