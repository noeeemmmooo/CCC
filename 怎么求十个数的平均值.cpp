#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//创建数组
	int arr[10] = {};
	int i = 0;
	int sum = 0;
	//向数组输入十个数
	for (i = 0; i < 10; i ++)
	{
		scanf("%d", &arr[i]);
		//相加求和求平均
		sum = sum + arr[i];
	}
	int avg = sum / 10;
	//输出平均值
	printf("avg = %d", avg);
	return 0;
}
