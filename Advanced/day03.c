#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// while 循环
/*
*  基本循环结构
* while(条件) 循环条件为1或者任意非零的自然数时会造成死循环 
* {
*		循环体
*		break; // while循环也可以使用break;来跳出循环
*		continue; // 也可用来跳过单次循环
* }
*/
//int main()
int m03()
{ 
	//while (1)
	//{
	//	printf("I won't stop\n");
	//}

	//int i = 1;
	//while (i < 6)
	//{
	//	printf("I will loop 5 times\n");
	//	i++;
	//}

	//int i = 1;
	//while (i < 10)
	//{
	//	if (i == 6)
	//	{
	//		i++;
	//		continue;
	//	}
	//	printf("I not input 6 : %d\n", i);
	//	i++;
	//}

	int i = 1;
	while (i < 10)
	{
		if (i == 5)
		{
			break;
		}
		printf("only see 4 : %d\n", i);
		i++;
	}
	return 0;
}