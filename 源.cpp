#include<stdio.h>
void move(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%c ->%c\n",A,C);//基础
	}
	else
	{
		move(n - 1, A, B, C);
		printf("%c ->%c\n", A, C);
		move(n-1, B, A, C);//递归
	}
}
int main()
{
	int d = 0;
	scanf_s("%d", &d);//输入n
	move(d, 'A', 'B','C');
	printf("游戏结束");
	return 0;
}