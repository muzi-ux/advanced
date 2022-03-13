#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 选择结构---if
//int main()
int m1()
{
	// 基本选择结构
	int a = 0;
	/*
		if(条件)
			条件满足时执行
		else 可选
			不满足时执行
		当if和else后只有一条语句时{}可以省略不写
		如果有多条语句时 {} 必须要写
		如果有多条语句且没有 {} 包裹时，if和else只能控制最近的一条语句
		if(条件)
			条件满足时执行
			无论条件是否成立这一条语句一定会执行(使用vs2022书写此语句时编译器会报错无法通过编译，吧该行代码注释后else后的语句无法正常执行)
		else 可选
			不满足时执行
	*/
	if (1 == a)
		printf("ohhhh\n");
	else
		printf("emmmmm\n");

	/*
		多分支语句
		if(条件)
			条件满足时执行
		else if(条件1)
			条件满足时执行
		else if(条件2)
			条件满足时执行
		else if(条件3)
			条件满足时执行
		else 可选
			不满足时执行

		于基本判断语句一样如有条件后只有一条语句时可以不使用 {} 包裹，否则必须使用 {} 包裹
	*/
	int i;
	printf("please input 1-100:");
	scanf("%d", &i);
	if (i > 1 && i < 5)
		printf("这个数有点小");
	else if (6 == i)
		printf("刚刚好");
	else if (i > 6)
		printf("大了");

	/*
	* 嵌套判断
	* if(条件)
	* {
	*		if(条件1)
	*		{
	*			条件成立的代码
	*		}
	*		else
	*		{
	*			条件不成立时代码
	*		}
	* }
	* else (可选)
	*/

	int number1 = 1, number2 = 2;
	if (1 == number1)
	{
		if (2 == number2)
		{
			printf("hhhhh");
		}
	}

	return 0;
}