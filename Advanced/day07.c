#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// º¯ÊýµÝ¹é

int factorial(int i)
{
	if (i <= 1)
		return 1;
	else
		return i * factorial(i - 1);
}

int fibonacci(int n)
{
	if (n <= 1 || n == 2)
		return 1;
	else
		return fibonacci(n - 2) + fibonacci(n - 1);
}

void print_table(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}
}

int m07()
{
	//printf("%d", factorial(4));
	//printf("%d", fibonacci(6));

	//int i = 0, one = 1, two = 0, sum = 0;
	//int x = 50;
	//for (i = 0; i < x; i++)
	//{
	//	sum = one + two;
	//	one = two;
	//	two = sum;
	//}

	//printf("%d\n", sum);

	//print_table(12);
	int arr[8] = { 1,6,3,3,8,0,7,4 };
	int* p = arr;

	for (int i = 0; i < 8; i++)
		if (p[i] % 2 == 0)
	printf("%d", p[i]);
	return 0;
}