#include <stdio.h>

////1.判断是否为奇数
////2.打印1-100之间的奇数
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1: m++;
	case 2: n++;
	case 3:
		switch (n)
		{  //switch 语句可以循环嵌套
		case 1: // n = 1 时才会执行
			n++;
		case 2:
			m++; n++;
			break; //break跳出的自己所在的switch语句
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d,n = %d\n", m, n);
	return 0;
}