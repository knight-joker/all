#include<stdio.h>//����ͷ�ļ�
#define PAI 3.14//������Ų������У�
int main()//������
{
	double fRadius = 0;//����뾶
	double fResult = 0;//�������������
	printf("������Բ�İ뾶��");//��ʾ
	scanf_s("%lf", &fRadius);//����뾶
	fResult = fRadius * fResult * PAI;//��ʼ�������
	printf("Բ������ǣ�%lf\n", fResult);//��ʾ���
	return 0;//����0//�������
}