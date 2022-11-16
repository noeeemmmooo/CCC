//找出十个数中的最大值
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//创建数集
	int arr[10] = { 0 };
	int i = 0;
	//向数集输入数字
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//找最大
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	//输出最大值
	printf("max = %d \n", max);
	return 0;
}