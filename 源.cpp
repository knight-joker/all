#include<stdio.h>
#include"四则运算1.h"
int plus(int q, int w)
{
	int e;
	e = q + w;
	printf("\n运算结果是%d\n", e);
	return 0;
}
int sub(int w, int q)
{
	int e;
	e = w - q;
	printf("\n运算结果是%d\n", e);
	return 0;
}
int mult(int w, int q)
{
	int e;
	e = w * q;
	printf("\n运算结果是%d\n", e);
	return 0;
}
int div(int w, int q)
{
	int e;
	e = w / q;
	printf("\n运算结果是%d\n", e);
	return 0;
}
extern int plus(int q, int w);
extern int sub(int w, int q);
extern int mult(int w, int q);
extern int div(int w, int q);

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("欢迎来到四则运算!\n");
	printf("请选择一种运算方法\n\n1.加法  2，减法  3，乘法  4，除法\n");
	scanf_s("%d", &a);
	printf("请输入两个数（中间用空格隔开)\n");
	scanf_s("%d %d", &b, &c);
	
	do
	{
		switch (a)
		{
		case 1:plus(b, c);
			break;
		case 2:sub(b, c);
			break;
		case 3:mult(b, c);
			break;
		case 4:div(b, c);
			break;
		default:
			printf("error");
		}
		printf("请选择下一步操作\n1 继续运算 2 结束运算\n");
		scanf_s("%d", &d);
	} 
	while (d == 2);
	return 0;
}