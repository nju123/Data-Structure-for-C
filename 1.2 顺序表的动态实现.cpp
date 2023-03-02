#include<stdio.h>
#include<stdlib.h>
#define InitSize 10
typedef struct {
	int* data;
	int Maxsize;
	int length;
}Seqlist;

void Init(Seqlist  &L) {
	L.data = (int*)malloc(InitSize * sizeof(int));
	L.length = 0;
	L.Maxsize = InitSize;
}

void IncreaseSize(Seqlist& L, int addedLength) {
	int* p = L.data;
	L.data = (int*)malloc((L.Maxsize + addedLength) * sizeof(int));
	for (int i = 0; i < L.Maxsize; i++)
	{
		L.data[i] = p[i];
	}
	L.Maxsize = L.Maxsize + addedLength;
	free(p);
}
//int main() {
//	Seqlist L;
//	Init(L);
//	IncreaseSize(L, 5);
//	return 0;
//}