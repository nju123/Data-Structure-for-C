//顺序表的查找：按位查找及按值查找
# include<stdio.h>
# include<stdlib.h>

# define initsize 10
typedef struct { //定义动态顺序表 
	int* data;
	int maxsize;
	int length;
}Seqlist;

// 初始化动态顺序表 
void init(Seqlist &L){
	L.data = (int*)malloc(initsize*sizeof(int));
	for(int i=0;i<initsize;i++){
		L.data[i] = i;//用于测试 
	}
	L.maxsize = initsize;
	L.length = 0;	
}
//===================================分割线==============================================



//按位查找：直接返回即可，时间复杂度为O（1） 
//这里不用再加 “&” 因为不用对L进行改变，因为它的复制品也可以完成工作 
int FindByOrder(Seqlist L,int position){
	if(position<1||position>L.length){
		printf("超出范围！无效：");
		return 0; 
	}
	return L.data[position-1];
} 
//按值查找 
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
	printf("您要查找的在%d位置上的元素为%d\n",3,FindByOrder(L,20)); 
	printf("您要查找的元素%d的位置为%d\n",8,FindByValue(L,8));
}




