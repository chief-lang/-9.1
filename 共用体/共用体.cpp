// 共用体.cpp : union
//共用体内存;共用体所有的成员里面最大的成员的空间，在同一时刻只能存一个成员的值

#include <iostream>
union Arr
{
	int c;
	char a[10];//共用体这只算a的内存，同时以最大的基本数据类型来算
	float b;
};//大多数都和结构体一样，不一样的是内存计算方法
int main()
{
	printf("Arr的字节数为%d\n", sizeof(Arr));
}



