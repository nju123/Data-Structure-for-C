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

void Insert(sqlist &L,int position,int value){
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
void Delete(sqlist &L,int position){
	if(position<1||position>L.length+1){
		printf("��ǰλ�������ݿ�ɾ��\n"); 
		return ;
	}
	printf("ɾ����Ԫ��Ϊ%d\n",L.data[position-1]);
	for(int i=position;i<L.length+1;i++){
		L.data[i-1] = L.data[i];
	}
	L.length--;	
}
int main(){
	sqlist L;
	init(L);
	Insert(L,11,1);
	Insert(L,1,1);
	Insert(L,2,2);
	Insert(L,3,3);
	Insert(L,4,4);
	Insert(L,5,5);
	Delete(L,3);
	printf("%d\n",L.length);
	for(int i=0;i<maxsize;i++){
		printf("L.data[%d] = %d\n",i,L.data[i]);
	}
	
	
}
