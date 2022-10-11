#include"game.h"
void InitBoard(char board[R][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//1，打印一行数据2，打印分割行
	{
		/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);//打印一行的数据
			if (j < col - 1)
				printf("|");
		}
		/*if (i < row - 1)
			printf("---|---|---\n");*/
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
		}
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");
	while (1)
	{
		printf("请输入要下的坐标：>");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)//判断x，y坐标的合法性
		{
			if (board[x - 1][y - 1] == ' ')
			{

				board[x - 1][y - 1] = ' ';
				break;
			}
			else
			{
				printf("该坐标以被占用\n");
			}
		}
		else
		{
			printf("坐标错误，请重新输入\n");
		}
	}
}
void computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：>");
	while (1)
	{
		int x = 0;
		int y = 0;
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] == '#';
			break;
		}
	}
}
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[1][1] && board[1][1] == board[1][2]==board[1][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][1] == board[1][2] && board);
	}
}