#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 函数的嵌套和链式访问

// 函数可以嵌套调用，不能嵌套定义
// 这是合法的嵌套调用
void t1()
{
	printf("我是t1\n");
}

void t2()
{
	printf("我是t2\n");
	t1();
}

void t3()
{
	printf("我是t3\n");
	t2();
}

/*
void t4()
{
	void t5()
	{
		// 这是错误的语法写法，C语言不支持嵌套定义函数
	}
}
*/

// 导入外部静态库，静态库是编译好的二进制代码
#pragma comment(lib, "Sub.lib")
int m06()
{
	// C语言语法支持这种链式访问（把一个函数做为另一个函数的参数）
	printf("%d", printf("%d", printf("%d", 43)));  // 4321，printf函数的返回值是打印的字符数
	t3();

	// 使用Add函数进行加法运算
	// 这也是链式访问
	// printf("%d", Add(12, 3)); // 如果是低版本的编译器这里会报错，Add函数没有定义

	// 正确的写法是
	int Add(int, int); // 先声明Add是一个函数
	printf("12 + 3 = %d\n", Add(12, 3)); // 再在这里调用Add函数

	// 函数的声明一般写在头文件内（好处是，可以隐藏函数的实现内容，仅展示函数的声明内容，可以更好的保护代码不被滥用）
	printf("1 - 3 = %d\n", sub(1, 3)); // 这里调用的是外部静态库内的sub函数
	return 0;
}


// 函数的定义和使用
int Add(int x, int y)
{
	return x + y;
}