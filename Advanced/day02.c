#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// switch ���

/*
* switch �������ṹ
* switch(���γ��������Ϊ���εı��ʽ��)
* {
*		case:
*			�����
*			break;
*		default:����ѡ��ͬ��if-else����else��
*			�����
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
			break; // ʹ��break�����������1����ִ�е�����������ѭ��
		case 2:
			printf("Tuesday\n"); // ����������2�����ִ�е���λ�ú���������ִ��
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