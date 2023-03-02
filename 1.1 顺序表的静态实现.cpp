#include<stdio.h>

#define Maxsize 10      //定义最大长度
typedef struct {
    int data[Maxsize];   //用静态数组存放元素
    int length;              //顺序表的当前长度
}Sqlist;    // 顺序表的类型定义

void InitList(Sqlist &L) {
    for (int i = 0; i < Maxsize; i++)
    {
        L.data[i] = 0;//默认值设置
    }
    L.length = 0;//顺序表初始长度为0
}
int main()
{
    Sqlist L;
    InitList(L);
    return 0; 
}

