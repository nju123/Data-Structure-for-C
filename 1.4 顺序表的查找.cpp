//˳���Ĳ��ң���λ���Ҽ���ֵ����
# include<stdio.h>
# include<stdlib.h>

# define initsize 10
typedef struct { //���嶯̬˳��� 
	int* data;
	int maxsize;
	int length;
}Seqlist;

// ��ʼ����̬˳��� 
void init(Seqlist &L){
	L.data = (int*)malloc(initsize*sizeof(int));
	for(int i=0;i<initsize;i++){
		L.data[i] = i;//���ڲ��� 
	}
	L.maxsize = initsize;
	L.length = 0;	
}
//===================================�ָ���==============================================



//��λ���ң�ֱ�ӷ��ؼ��ɣ�ʱ�临�Ӷ�ΪO��1�� 
//���ﲻ���ټ� ��&�� ��Ϊ���ö�L���иı䣬��Ϊ���ĸ���ƷҲ������ɹ��� 
int FindByOrder(Seqlist L,int position){
	if(position<1||position>L.length){
		printf("������Χ����Ч��");
		return 0; 
	}
	return L.data[position-1];
} 
//��ֵ���� 
int FindByValue(Seqlist L,int value){
	for(int i=0;i<L.maxsize;i++){
		if(L.data[i] == value){
			return i+1;
		}
	}
	return 0;
} 

int main(){
	Seqlist L;
	init(L);
	printf("��Ҫ���ҵ���%dλ���ϵ�Ԫ��Ϊ%d\n",3,FindByOrder(L,20)); 
	printf("��Ҫ���ҵ�Ԫ��%d��λ��Ϊ%d\n",8,FindByValue(L,8));
}




