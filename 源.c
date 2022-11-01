
#include"game.h"
void menu()
{
	printf("******************");
	printf("***1,play0,exit***");
	printf("******************");
}

void game()
{
	char board[ROW][COL] = { 0 };//数组---存放走出的棋盘信息/	全部是空格
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);
	while(1)//下棋     // 判断输赢
	{
		int ret = 0;
		playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret= Iswin();
		if (ret != 'c')
		{
			break;
		}
		computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret =Iswin();
		if(ret!='c')
		{
			break;
		}
		if (ret == '*')
		{
			printf("玩家赢\n");;
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		else
		{
			printf("平局\n");
		}
	}
}
void test()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
		
	}

	while (input);
}
int main()
{



	return 0;
}