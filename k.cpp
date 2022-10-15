#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdio.h>
int main()
{
	结构体
	char int double ......
	/*struct Book
	{
		char name[20];
		short prince;

	}*/


	/*printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));*/

	double d = 3.14;
	double* pd = &d;
	printf("%d\n", sizeof(pd));//4 or 8
	*pd = 5.5;
	/*printf("%lf\n",* pd);*/
	printf("%lf\n", d);

	
	int a = 10;//申请了4个字节的空间
	/*printf("%p/n", &a);*/
	int*p = &a;//p是一个指针变量
	/*printf("%p\n", &p);*/
	*p=20;//*__解引用操作符 间接访问操作符
	printf("a=%d\n", a);
	return 0;

}
struct Book
{
	char name[20];
	short price;

};
int main()
{
	struct Book b1 = { "c语言程序设计",55};
	struct Book* pb = &b1;
	/*printf("%s\n", (*pb).name);*/
	/*printf("%s\n", pb->name);
	printf("%s\n",pb->price);*/
	利用pb打印我的书名和价格
	.    结构体变量 .成员
	-> 结构体指针->成员

	/*printf("书名;%s\n", b1. name);
	printf("价格;%d\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d\n", b1.price);*/

	return 0;
}
#include<stdio.h>
int main()
{
	int a = 20;
	int c = 30;
	int b = 10;
	int age = 10;
	if (age < 18)
	{
		printf("未成年\n");
		printf("不能谈恋爱\n");
	}
	else if (age >= 18 && age < 28)
		printf("成年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 80)
		printf("老年\n");

	else
		printf("老不死\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 1;
	while (i < 100)

	{
		printf("%d ", i);
	    i+= 2;
	}
	while (i < 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}


	return 0;
}
#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i ==5)
			continue;
		printf("%d", i);
		i++;
	}


	return 0;
}
int main()
{
	

	int i = 0;
	while (i <= 10);
	{
		i++;
		if (i == 5)
			continue:
		printf("%d", i);
		
	}
	return 0;
}
int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (5 == i)
			continue;
		printf("%d", i);

	}



	return 0;

}
int main()
{

	int ch = 0;//ctrl+z      EOF =end of fill ->-1  //文件结束标志
	while (ch = getchar() != EOF)

	{
		putchar(ch);

	}

	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);*/

	return 0;

}
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("输入密码；>");
	scanf("%s", password);//输入密码并存放在password数组中
	printf("请确认（Y/N）:>");
	ret = getchar();//Y/N
	if (ret == 'Y')
	{
		printf("输入成功");
	}
	else
	{
		printf("输入失败");
	}
	return  0;
}

/*nt main()、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
{
	int ch = 0;
	while ((ch=getchar())!=EOF)
	{
		if (ch < '0' || ch>'9')
			conntinue:
		putchar(ch);
	}


	return 0;*/

}
int main()
{
	int i = 0;//初始化
	while (i < 10)//判断
	{
		i++;//调整
	}
//


	return 0;

}

int main()、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
{
	int i = 1;//初始化
	 

	while (i == 5) continue;
	printf("%d", i);
	i++;//调整


	return 0;
}
int main()、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d", i);
	}
//
//	return 0;
}
int main()、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
{
	for (;;)
	{
		printf("hehe")；
	}

	return 0;
int main()、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
{
	int j = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j < 10; j++)
		{
			printf("hehe\n");
		}return 0
	}




	return 0;
}


int main()、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1;i<=n; i++)
	{
		ret  = ret * i;
	}
	printf("ret=%d\n", ret);
	return 0;
}
int main()、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
	
		{
		
			ret = ret * i;
	
		}//n的阶乘
		sum = sum + ret;
	}


	printf("sum=%d\n", sum);
	return 0;
//int main()、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
{
	int sum = 0;
	int n = 1;
	int i = 0;
	for (i = 1; i<= 10; i++)
	{
		n = n * i;
		sum = sum + n;

	}
	
	printf("sum=%d\n", sum);



	return 0;
}
int main()、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是:%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("找不到\n");

	return 0;
}
int main()、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标
	while(left<=right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] > k)

		{

			right = mid - 1;

		}

		else if (arr[mid]<k)

		{

			left = mid + 1;

		}

		else


		{

			printf("找到了,下标是:%d\n", mid);
			break;

		}
	}
	if(left>right)
	{
		{
			printf("找不到")
		} 
	}
	return 0;
{
}、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
#include<string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
	char arr1[] = "welcome to school";
	char arr2[] = "#################";
	int left = 0;
	int right = strlen(arr1) - 1;//int right =sizeof(arr1)/sizeof(arr1[0])-2；

	while (right >= left)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休息一秒
		system("cls");//执行系统命令的一个函数 --cls-清空屏幕
		left++;
		right--;

	}
	printf("%s\n", arr2);
	return 0;
}\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i <= 3; i++)
	{
		printf("请输入密码");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//== 不能用来比较两个字符串是否相等，应用一个库函数---strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误");
		}
	}
	if (i == 3)
		printf("3次密码错误，退出程序\n");

	return 0;
 }
int main()//排列大小
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入任意三个数字（空格隔开）\n");
	scanf_s("%d %d %d",&a,&b,&c);
	if (a<b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a<c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b<c)
	{
		int tmp = b;
	    b = c;
		c = tmp;
	}
	printf("从大到小排列:%d %d %d\n", a, b, c);

	return 0;
}
int main()////////////////////////////////////////////////////////////////
{
	int i = 0;
	int k;
	int l;
	printf("请输入两个数，并用空格隔开,\n第一个数是所求范围，第二个数是筛选数.\n");
	scanf_s("%d %d",&l, &k);//输入l和k
	for (i = 1; i <= l; i++)//选取范围l
	{
		if (i % k == 0)//设置筛选整除数k
			printf("%d ", i);

	}


	return 0;
}、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、///////////////////////////////////
int main()//最大公约数//辗转相除法

{
	int l, k,r;
	printf("请输入两个数，并用空格隔开.\n");
	scanf_s("%d %d", &l, &k);
	while (l % k)
	{
		r = l % k;
		l = k;
		k = r;
	}
	printf("两数的最大公约数为：%d\n", k);

	return 0;
}
#include <math.h>
int main()
{
	int h,j,k,l;
	int o = 0;
	printf("请输入范围（两个数之间用空格隔开。)\n");
	scanf_s(" %d %d", &k, &l);
	for (j = k; j <= l; j++)
	{
		for (h = 2; h <= l;h++)
		{
			if (j % h == 0)
				break;
		}
		if (j == h)
		{
			printf(" %d", j);
			o++;
		}
	}
	printf("\n%d到%d之间的素数一共有:%d个",k,l, o);

	return 0;
}

#include <stdio.h>
int main()
{
	int mouth, day, week;
	printf("请输入月份，再输入日期（中间用空隔隔开）\n");
	scanf_s("%d %d", &mouth, &day);
	if (mouth == 2 || mouth == 3 || mouth == 11)
	{
		week = (day + 1) % 7;
	}
	if (mouth == 1 || mouth == 10);
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
	printf("今天是2022年%d月%d日，星期%d。\n", mouth, day, week);
	return 0;
}
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum +=flag* 1.0 / i;
		flag = -1;
	}
	printf("%lf\n", sum);

	return 0;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10, };
	int max = arr[0];//最大值
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i =1; i < sz; i++)
	{
		max = arr[i];
	}
	printf("max=%d\n", max);


	return 0;
}
/////九九乘法口诀表


////猜数字游戏//////////////////////////////////////////////////////////////////////////////////
1电脑会随机生成一个数字
猜数字
#include <stdlib.h>
#include <time.h>
int times;
int i = 0;
#include<string.h>
#include <windows.h>
#include <stdlib.h>
void menu()
{
	if (i == 0)
	{
		char arr1[] = "欢迎来到我的猜数字游戏，游戏范围（1-100）加油，挑战者";
		char arr2[] = "#####################################################";
		int left = 0;
		int right = sizeof(arr1) / sizeof(arr1[0]) - 2;

		while (right >= left)
		{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", arr2);
			Sleep(1);//休息一秒
			system("cls");//执行系统命令的一个函数 --cls-清空屏幕
			left++;
			right--;

		}
	
		printf("%s\n", arr2);
		printf("输入1开始，输入0结束\n");

	}
}
void game()//生成随机数，并猜数字
{
	int ret;
	int guess;
    ret=rand()%100+1;//rand-----函数是随机生成数///(1-100)
	while (1)
	{
		printf("开始猜数字:>");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了,再试一次\n");
		}
		else if (guess < ret)
		{
			printf("猜小了，再试一次\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			times++;
			break;
		}
	}
}
int main ()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//时间戳————————————当前计算机的时间—计算机的起始时间（1970.1.1.0:0:0)=(xxxx)秒///拿时间戳设置随机变量元素起
	//time_t time(time_t*timer)
	do
	{
		menu();
		printf("请选择>:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			printf("你一共答对了:%d次", times);
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	i++;
	return 0;
}//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

	char input[20] = { 0 };
	//shutdown -s -t 60关闭系统
	//system()-执行系统命令
	system("shutdown -s -t 60");
again:
	printf("请耐心等待1分钟，有惊喜\n");
	printf("请输入密码\n");
	scanf_s("%s", input);
	if (strcmp(input, "我是猪1234") == 0)//比较两个字符串-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、、
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<string.h>
int main()
{
	//strcpy----string copy  字符串拷贝
	//strlen----string length  求字符串长度
	char arr1[] = "bit";//"\o"结束标志
	char arr2[20] = "###########";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;

}
#include<string.h>
int main()
{
	//memset---memory  内存    set  设置
	char arr[] = "Hello Wsrld !";
	memset(arr, '*', 5);
	printf("%s\n", arr);				

	return 0;
}
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

}
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int max = get_max(a, b);
	printf("max=%d\n", max);

	return 0;
}
void sawp(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}
int main()
{
	int a = 10;
	int b = 20;
	scanf_s("%d %d", &a, &b);
	sawp(&a, &b);
	printf("%d%d", a, b);
	return 0;
#include<math.h>
int  is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if(is_prime(i)==1)
		printf("%d ", i);
	}
	return 0;
}
int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是不是闰年
		if (1 == is_leap_year(year))
		{
			printf("%d ", year);
		}

	}
	return 0;
}
int binary_search(int arr[], int m,int sz)//算法的实现/////////arr是指针
{
	int left = 0;
	
	int right = sz - 1;
	while(left<=right)
	{
		int mid = right + left;
		if (arr[mid] < m)
		{
			left = mid + 1;
		}
		else if (arr[mid] > m)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	//二分查找：在一个有序数组中查找某个数
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);
	if (ret == -1)
	{
		printf("找不到目标数字\n");
	}
	else
	{
		printf("找到了目标，下标是%d\n", ret);
	}
	return 0;
}
void add(int* p)
{
	(* p)++;
}
int main()
{
	int num = 0;
	add(&num);
	printf("num=%d\n",num);
	add(&num);
	printf("num=%d\n", num);
	add(&num);
	printf("num=%d\n", num);
	return 0;
}

int add(int x, int y);//函数 声明
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = add(a, b);//函数调用
	printf("%d\n", sum);

	return 0;
}

	int add(int x, int y)//函数定义
{
	int z = x + y;
	return z;
}
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
    sum = add(a,b);
	printf("%d\n", sum);
	return 0;
}

#include "k.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n",sum);
}int 
i
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf(" %d", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234
	print(num);

	return 0;

}
#include<string.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;

}
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);//求字符串长度
	//printf("%d\n", len);
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址。
	printf("len=%d\n", len);
	return 0;

}
int Facl(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int Facl(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Facl(n - 1);
}
int main()//n的阶乘《递归》
{
	int  n = 0;
	int ret = 0;
	scanf_s("%d", &n);
	ret = Facl(n);
	printf("%d\n", ret);


	return 0;
}
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
斐波那契数列     1 1 2 3 4 8 13 21 34 55 ..........
求第n个斐波那契数
int Fac(int n)
{
	if (n <= 2)
         return 1;
	else 
         return Fac(n - 1) + Fac(n - 2);
}
int Fac(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf_s("%d", &n);//TDD----测试驱动开发
	ret = Fac(n);
	printf("ret=%d\n",ret);
	return 0;
}
void test(int n)
{
	if(n<10000)
	{
		test(n+1);
	}
}
int main()
{
	test(1);
	return 0;
}
int main()//创建一个数组
{
	int arr[10];//不完全初始化，剩下的元素默认为0
	char arr2[5];


	return 0;
}
#include<string>
int main()
{
	char arr[] = "abcdef";
	//printf("%c\n", arr[3]);
	int i = 0;
	for (i = 0; i < strlen(arr);
i++)
	{
		printf("%c ", arr[i] );
	}
	return 0;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n",i,&arr[i]);//地址%p
	}

	return 0;
}
int main()
{
	//int arr[3][4]={1,2,3,4,5};//3行4列；行可以略，但是列不行,连续存放
	//char ch[5][6];
	int arr[3][4] = { {1,2,3,},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf(" %d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
int main()
{

	int arr[3][4] = { {1,2,3,},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]= %p\n",i,j, &arr[i][j]);
		}
	}

	return 0;


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int sz = sizeof(arr) / sizeof(arr[0]);//1  sizeof(数组名）--数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节。2 &数组名，数组名代表整个数组，取出的是整个数组的地址。
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);

	return 0;
}
#define ROW 3
#define COL 3
void menu()
{
	printf("******************");
	printf("***1,play0,exit***");
	printf("******************");
}
void InitBoard(int board[ROW][COL], int row, int col)
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
void game()
{
	char boards[ROW][COL]={0};//数组---存放走出的棋盘信息/	全部是空格
	InitBoard(board,ROW,COL);//初始化棋盘
	DisplayBoard();
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
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


}
int main()
{



	return 0;
}
交换两个变量，并且不创建临时变量
 111111111
int main()
{
	int a = 3;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后:a=%d b=%d\n", a, b);
	return 0;
}//整形溢出    int---4个字节，32个比特位    整形有最大值
2222222

找出只出现一次的数字

int main()
{
	int arr[] = { 1,2,3,4,5,7,1,2,3,4,5 };//"^"可以消去相同的元素
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("%d\n", ret);
	return 0;
}
int main()
{
	int a = 16;
	printf("%d\n", a);
	a=a >> 1;
	printf("%d\n", a);
	return 0;
}
int main()
{
	int num = 0;
	int count = 0;
	int i = 0;
	scanf_s("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	return 0;
}	
int main()
{
	int a = 0;
	//~按位取反
	printf("%d\n",~a);
	ret
#include<stdio.h>
int main()
{
	int *p1, *p2, a, b;
	scanf_s("%d %d", &a, &b);
	p1 = &a;
	p2 = &b;
	printf("p1=%d,p2=%d\n", *p1, *p2);
	if (a < b)
	{
		p1 = &b; p2 = &a;
	}
	printf("max=%d,min=%d\n", *p1, *p2);
	return 0;
}
int main()
{
	int *p1, *p2, a, b, temp;
	scanf_s("%d %d", &a, &b);
	p1 = &a;
	p2 = &b;
	printf("*p1=%d,*p2=%d\n", *p1, *p2);
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("*p1=%d,*p2=%d\n", *p1, *p2);
	return 0;
}
int main()
{
	int i;
	int a[10];
	int iTemp;
	int iPos;
	printf("请输入10个数：\n");
	for (i = 0; i < 10; i++)//输入10个数
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	for (i = 1; i < 10; i++)
	{
		iTemp = a[i];
		iPos = i - 1;
		while ((iPos >= 0) && (iTemp < a[iPos]))
		{
			a[iPos + 1] = a[iPos];
			iPos--;
		}
		a[iPos + 1] = iTemp;
	}
	for (i = 0; i < 10; i++)//换行
	{
		printf("%d\t", a[i]);
		if (i == 4)
			printf("\n");
	}
	printf("\n");
	return 0;
}
int main()
{
	int year = 0;
	printf("请输入年份\n");
	scanf_s("%d", &year);
	if (year % 4 == 0 && year % 100 != 0||year%400==0)
	{
		printf("%d是闰年\n",year);
	}
	else
	{
		printf("%d不是闰年\n",year);
	}
	return 0;
}
#include "game.h"
void mune()//菜单
{
	char arr1[] = " 欢迎来到三子棋max.";
	char arr2[] = "###################";
	char arr3[] = "1开始游戏 2结束游戏";
	char arr4[] = "###################";
	int left1 = 0;
	int right1 = strlen(arr1) - 1;//int right =sizeof(arr1)/sizeof(arr1[0])-2；
	int left2 = 0;
	int right2 = strlen(arr3) - 1;
	while (right1 >= left1 && right2 >= left2)
	{
		arr2[left1] = arr1[left1];
		arr2[right1] = arr1[right1];
		arr4[left2] = arr3[left2];
		arr4[right2] = arr3[right2];
		printf("%s\n", arr2);
		printf("%s\n", arr4);
		Sleep(100);//休息一秒
		system("cls");//执行系统命令的一个函数 --cls-清空屏幕
		left1++;
		right1--;
		left2++;
		right2--;
	}
	printf("%s\n", arr2);
	printf("%s\n", arr4);
}
void init_board(char board[ROW][COL], int row, int col)//清理棋盘
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
void print_board(char board[ROW][COL], int row, int col)//生成棋盘
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		printf("---|---|---\n");*///打印太垃圾了
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---", board[i][j]);
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走；>\n");
	printf("请输入坐标（中间用空格隔开）\n");
	while (1)
	{
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("此位置已被占用，请重新输入\n");
			}
		}
		else
		{
			printf("此坐标已超出棋盘，请重新输入\n");
		}
	}
}
void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;
		}
	}
}
static int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
int rule(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];//平局或者继续
	}
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}
	return ' ';
}
void game()
{
	char ret = 0;
	char board[ROW][COL];
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		ret = rule(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		print_board(board, ROW, COL);
		computer_move(board, ROW, COL);
		ret = rule(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		print_board(board, ROW, COL);
	}
	if (ret == 'X')
	{
		printf("很遗憾，玩家胜利\n");
	}
	else if (ret == '0')
	{
		printf("恭喜电脑胜利\n");
	}
	else if (ret == 'Q')
	{
		printf("您非常厉害，和电脑和棋\n");
	}
	print_board(board, ROW, COL);
}
void begin()//开始
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("请选择；>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("开始游戏，请准备。\n");
			break;
		case 2:
			printf("退出游戏，谢谢使用。\n");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
	} while (input);
}
int main()
{
	int i,j,I,J,k;
	printf("请输入您所需要排序的数字个数\n");
	scanf_s("%d", &k);
	int a[]={0};//创建变量和储存器
	for (i = 0; i < k; i++)
	{
		printf("a[%d]   ", i);//显示
		scanf_s("%d", &a[i]);//输入
	}
	for (i = 0; i < k-1; i++)
	{
		I = a[i];
		J = i;//临时储存
		for (j = i + 1; j < k; j++)//比较a[i]和a[i+1]的大小
		{
			if (a[j] > I)//比较大小
			{
				I = a[j];
				J = j;
			}
		}
		a[J] = a[i];//交换位置
		a[i] = I;//临时储存
	}
	for (i = 0; i < k; i++)
	{
		printf("%d\t", a[i]);//控制间隔
		if (i == k/2)//行数
			printf("\n");

	}
	return 0;
}
void swap(int *p1,int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void exchange(int* pt1, int* pt2, int* pt3)
{
	if (*pt1 < *pt2)
	{
		swap(pt1, pt2);
	}
	if (*pt1 < *pt3)
	{
		swap(pt1, pt3);
	}
	if (*pt2 < *pt3)
	{
		swap(pt2, pt3);
	}
}
int main()
{
	int a, b, c, * q1, * q2, * q3;
	puts("please input three key numbers you want to rank:");
	scanf_s("%d %d %d", & a, & b, & c);
	q1 = &a;
	q2 = &b;
	q3 = &c;
	exchange(q1, q2, q3);
	printf("\n%d %d %d\n", a, b, c);
	return 0;
}
void max(int(*a)[4], int m)
{
	int value, i, j, sum = 0;
	for (i = 0; i < m; i++)
	{
		value = *(*(a + i));
		for (j = 0; j < 4; j++)
		{
			if (*(*(a + i) + j) > value)
			{
				value = *(*(a + i) + j);
				printf("第%d行：最大数是：%d\n", i, value);
				sum = sum + value;
			}
		}
		printf("\n");
		printf("每行中最大数相加和是：%d\n",sum);
	}
}
int main()
{
	int a[3][4];
	int i, j;
	int(*p)[4];
	p = &a[0];
	printf("请输入\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &a[i][j]);
			max(p, 3);
		}
	}
	return 0;
}
struct
struct date
{
	int yrar;
	int month;
	int day;
};
struct student
{
	char name[30];
	int num;
	char sex[20];
}student = {"SuYuQun",12061212,"m"};



int main()
{
	printf()
	return 0;

}
#include<stdio.h>
int main()
{
	float x;
	float y;
	char op;
	printf("输入表达式\n");
	scanf_s("%f%c%f", &x, &op, &y);
	switch (op)
	{
	case '+':
		printf("%.2f%c%.2f=%.2f\n", x, op, y, x + y);
		break;
	case'-':
		printf("%.2f%c%.2f=%.2f\n", x, op, y, x - y);
		break;
	case '*':
		printf("%.2f%c%.2f=%.2f\n", x, op, y, x * y);
		break;
	case '/':
		if (y != 0)
		{
			printf("%.2f%c%.2f=%.2f\n", x, op, y, x / y);
		}
		else
		{
			printf("除数为0！");
			break;
		}
	default:printf("输入表达式有误\n");
	}
	return 0;
}
