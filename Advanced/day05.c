#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ��������

// ����һ���������������Ľϴ�ֵ
// ����� int a ������ʽ����Ҳ���β� int bҲ����ʽ������һ���������Զ�������ʽ����
// ��ʽ���������ǻ����������ͣ����飬������ָ�������һ��
// ��ʽ������ʵ�ε�һ��ǳ����
// ��ʽ�������ں���ִ��ʱ����������ִ�н�������
int get_max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int get_max_re(int a, int b)
{
	// return ����Է��ر��ʽ��return��ȱ��ʽ����󷵻ؼ�����
	return a > b ? a : b;
}

// ����һ������������������ֵ
void exchange (int a, int b)
{
	int z;
	z = a;
	z = b;
	b = a;
}

// ͨ��ָ�뽻������������ֵ�����ְ취û�а취��������ʱ��֪��ԭ��
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
	// ����� get_max(1, 10) 1��10 ��ʵ�ʲ���Ҳ��ʵ��
	printf("1��10�Ľϴ���λ��%d\n", get_max(1, 10));
	printf("1��10�Ľϴ���λ��%d\n", get_max_re(1, 10));

	//
	int x = 1, y = 10;
	printf("����ǰa = %d, b = %d\n", x, y);
	exchange(x, y); // 1, 10 ��û�н��� ����Ҳ�д�ֵ��
	printf("exchange������a = %d, b = %d\n", x, y);
	exchange_ress1(&x, &y); // �����ɹ�������Ҳ�д�ַ����
	printf("exchange_ress������a = %d, b = %d\n", x, y);


	return 0;
}