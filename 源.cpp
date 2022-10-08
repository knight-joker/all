#include <stdio.h>
int main()
{
	int mouth, day,week;
	printf("请输入月份，再输入日期（中间用空隔隔开）\n");
	scanf_s("%d %d", &mouth, &day);
	if (mouth == 2 || mouth == 3 || mouth == 11)
	{
		week = (day + 1) % 7;
	}
	if(mouth == 1 || mouth == 10);
	{
		week = (day + 5) % 7;
	}
	if (mouth == 4 || mouth == 7)
	{
		week = (day + 4) % 7;
	}
	if (mouth == 5)
	{
		week = (day + 6) % 7;
	}
	if (mouth == 8)
	{
		week = day % 7;
	}
	if (mouth == 6)
	{
		week = (day + 2) % 7;
	}
	if (mouth == 9 || mouth == 12)
	{
		week = (day + 3) % 7;
	}
	printf("今天是2022年%d月%d日，星期%d。\n",mouth,day,week);
	return 0;
}