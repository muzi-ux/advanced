#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// switch 语句

/*
* switch 语句基本结构
* switch(整形常量（结果为整形的表达式）)
* {
*		case:
*			代码块
*			break;
*		default:（可选等同于if-else语句的else）
*			代码块
* }
*/
//int main()
int m02()
{
	int a;
	printf("%d\n", (a = 3 * 5, a * 4, a + 5));
	int week;
	printf("Please enter week:");
	scanf("%d", &week);

	switch(week)
	{
		case 1:
			printf("Monday\n");
			break; // 使用break后如果输入是1代码执行到这里便会跳出循环
		case 2:
			printf("Tuesday\n"); // 如果输入的是2则代码执行道该位置后会继续向下执行
		case 3:
			printf("Wednesday\n");
		case 4:
			printf("Thursday\n");
		case 5:
			printf("Friday\n");
		case 6:
			printf("Saturady\n");
		case 7:
			printf("Sunday\n");
		default:
			printf("input error\n");
	}
	return 0;
}