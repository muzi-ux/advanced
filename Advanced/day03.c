#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// while ѭ��
/*
*  ����ѭ���ṹ
* while(����) ѭ������Ϊ1��������������Ȼ��ʱ�������ѭ�� 
* {
*		ѭ����
*		break; // whileѭ��Ҳ����ʹ��break;������ѭ��
*		continue; // Ҳ��������������ѭ��
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