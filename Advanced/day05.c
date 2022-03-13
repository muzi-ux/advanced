#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 函数基础

// 定义一个函数求两个数的较大值
// 这里的 int a 叫做形式参数也是形参 int b也是形式参数，一个函数可以定义多个形式参数
// 形式参数可以是基本数据类型，数组，函数，指针的任意一种
// 形式参数是实参的一种浅拷贝
// 形式参数会在函数执行时创建，函数执行结束销毁
int get_max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int get_max_re(int a, int b)
{
	// return 后可以返回表达式，return会等表达式计算后返回计算结果
	return a > b ? a : b;
}

// 定义一个参数交换两个数的值
void exchange (int a, int b)
{
	int z;
	z = a;
	z = b;
	b = a;
}

// 通过指针交换两个变量的值，这种办法没有办法交换，暂时不知道原因
void exchange_ress(int * a, int * b)
{
	int* z = NULL;
	z = a;
	a = b;
	b = z;
}

void exchange_ress1(int* a, int* b)
{
	int z;
	z = *a;
	*a = *b;
	*b = z;
}

int main()
{
	// 这里的 get_max(1, 10) 1和10 叫实际参数也叫实参
	printf("1和10的较大数位：%d\n", get_max(1, 10));
	printf("1和10的较大数位：%d\n", get_max_re(1, 10));

	//
	int x = 1, y = 10;
	printf("交换前a = %d, b = %d\n", x, y);
	exchange(x, y); // 1, 10 并没有交换 这种也叫传值调
	printf("exchange交换后a = %d, b = %d\n", x, y);
	exchange_ress1(&x, &y); // 交换成功，这种也叫传址调用
	printf("exchange_ress交换后a = %d, b = %d\n", x, y);


	return 0;
}