# include<stdio.h>
// ˳���Ĳ��룬�Ծ�̬˳���Ϊ�� 
# define maxsize 10
typedef struct{
	int data[maxsize];
	int length;
}sqlist;

void init(sqlist &L){
	for(int i=0;i<maxsize;i++){
		L.data[i] = 0;
	}
	L.length = 0;
} 

void insert(sqlist &L,int position,int value){
	if(position<1||position>L.length+1){
		printf("��ǰλ�ò��ɲ���\n"); 
		return ;
	}
	if(L.length>=maxsize){
		printf("��˳�������\n"); 
		return ;
	}
	// ����i��λ��֮���Ԫ�ض�����Ųһλ
	for(int j = L.length; j>=position;j--){
		L.data[j] = L.data[j-1];
	} 
	L.data[position-1] = value;
	L.length++;
}
int main(){
	sqlist L;
	init(L);
	insert(L,11,1);
	insert(L,1,4);
	insert(L,2,4);
	insert(L,3,4);
	insert(L,2,5);
	printf("%d\n",L.length);
	for(int i=0;i<maxsize;i++){
		printf("L.data[%d] = %d\n",i,L.data[i]);
	}
	
}
