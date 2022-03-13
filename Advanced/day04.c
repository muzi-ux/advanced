#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// for循环
//int main()
int m4()
{
	/*
	* 基本结构
	* for(初始化;判断;改值)
	*	{
	*		循环体
	*	}
	*/
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n",i);
	}

	/*
	* 多条件循环
	* for(初始化1,初始化2; 条件1, 条件2; 改值1, 改值2)
	* {
	*		循环体
	* }
	*/
	printf("---------------------------------------------\n");
	int a, b;
	for (a = 0, b = 0; a < 4 && b < 4; a++, b++)
	{
		printf("%d %d\n", a, b);
	}

	/*
	* 省略条件循环
	* for(;;)
	* {
	*		循环体
	* }
	*/
	for (;;)
	{
		printf("hhhhhh\n");
	}
}