#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//��������
	int arr[10] = {};
	int i = 0;
	int sum = 0;
	//����������ʮ����
	for (i = 0; i < 10; i ++)
	{
		scanf("%d", &arr[i]);
		//��������ƽ��
		sum = sum + arr[i];
	}
	int avg = sum / 10;
	//���ƽ��ֵ
	printf("avg = %d", avg);
	return 0;
}
