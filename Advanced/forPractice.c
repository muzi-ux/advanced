#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// int main()
int mf()
{
	char arr[20] = { 'w','e','l','c','o','m','e',' ','t','o' };
	int i, j, z, u, p;
	for (i = 0, j = 9; i < 5 && j>=5; i++, j--)
	{
		for(u = 0; u<=i; u++)
		{
			printf("%c", arr[u]);
		}
		for (z = 0; z < j - i - 1; z++)
		{
			printf(" ");
		}
		for (p = j; p < 10; p++)
		{
			printf("%c", arr[p]);
		}
		printf("\n");
	}

	printf("----------------------------------\n");
	char arr2[20] = {' ', ' ', ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' };
	i = 0;
	j = 0;
	int f = 0;
	for (i = 0, j = 9; i < 5 && j >= 5; i++, j--)
	{
		arr2[i] = arr[i];
		arr2[j] = arr[j];
		for (f = 0; f < 10; f++) 
		{
			printf("%c", arr2[f]);
		}
		printf("\n");
	}
	return 0;
}