#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ������Ƕ�׺���ʽ����

// ��������Ƕ�׵��ã�����Ƕ�׶���
// ���ǺϷ���Ƕ�׵���
void t1()
{
	printf("����t1\n");
}

void t2()
{
	printf("����t2\n");
	t1();
}

void t3()
{
	printf("����t3\n");
	t2();
}

/*
void t4()
{
	void t5()
	{
		// ���Ǵ�����﷨д����C���Բ�֧��Ƕ�׶��庯��
	}
}
*/

// �����ⲿ��̬�⣬��̬���Ǳ���õĶ����ƴ���
#pragma comment(lib, "Sub.lib")
int m06()
{
	// C�����﷨֧��������ʽ���ʣ���һ��������Ϊ��һ�������Ĳ�����
	printf("%d", printf("%d", printf("%d", 43)));  // 4321��printf�����ķ���ֵ�Ǵ�ӡ���ַ���
	t3();

	// ʹ��Add�������мӷ�����
	// ��Ҳ����ʽ����
	// printf("%d", Add(12, 3)); // ����ǵͰ汾�ı���������ᱨ����Add����û�ж���

	// ��ȷ��д����
	int Add(int, int); // ������Add��һ������
	printf("12 + 3 = %d\n", Add(12, 3)); // �����������Add����

	// ����������һ��д��ͷ�ļ��ڣ��ô��ǣ��������غ�����ʵ�����ݣ���չʾ�������������ݣ����Ը��õı������벻�����ã�
	printf("1 - 3 = %d\n", sub(1, 3)); // ������õ����ⲿ��̬���ڵ�sub����
	return 0;
}


// �����Ķ����ʹ��
int Add(int x, int y)
{
	return x + y;
}