#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int j = 5;
	int i = ++j + ++j + ++j;
	printf("%d", i);
	return 0;
}