#include<stdio.h>//包含头文件
#define PAI 3.14//定义符号产量（π）
int main()//主函数
{
	double fRadius = 0;//定义半径
	double fResult = 0;//定义结果（面积）
	printf("请输入圆的半径：");//提示
	scanf_s("%lf", &fRadius);//输入半径
	fResult = fRadius * fResult * PAI;//开始计算面积
	printf("圆的面积是：%lf\n", fResult);//显示结果
	return 0;//返回0//程序结束
}