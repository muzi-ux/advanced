#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// forѭ��
//int main()
int m4()
{
	/*
	* �����ṹ
	* for(��ʼ��;�ж�;��ֵ)
	*	{
	*		ѭ����
	*	}
	*/
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n",i);
	}

	/*
	* ������ѭ��
	* for(��ʼ��1,��ʼ��2; ����1, ����2; ��ֵ1, ��ֵ2)
	* {
	*		ѭ����
	* }
	*/
	printf("---------------------------------------------\n");
	int a, b;
	for (a = 0, b = 0; a < 4 && b < 4; a++, b++)
	{
		printf("%d %d\n", a, b);
	}

	/*
	* ʡ������ѭ��
	* for(;;)
	* {
	*		ѭ����
	* }
	*/
	for (;;)
	{
		printf("hhhhhh\n");
	}
}