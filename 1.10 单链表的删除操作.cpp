//������Ԫ�ص�ɾ�����Դ�ͷ��������Ϊ����
#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
	int data;
	LNode *next;
}LNode,*LinkList;

//��֪λ��ɾ��Ԫ��
bool ListDeleteByOrder(LinkList &L,int position,int deletedItem)
{
	// 1. �ҵ�position֮ǰλ�õ�Ԫ��
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
	// 2. ɾ��positionλ���ϵ�Ԫ��
	int deletedItem = p->next->data;
	p->next = p->next->next;
	return true;
 } 
//��֪���ɾ��Ԫ�� : ����ͨ��ֵ�����İ취��������һ��Сbug������Ǵ�ͷָ������Ļ���û���� 
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



















 
