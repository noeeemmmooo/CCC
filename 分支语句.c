#include <stdio.h>

////1.�ж��Ƿ�Ϊ����
////2.��ӡ1-100֮�������
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
		{  //switch ������ѭ��Ƕ��
		case 1: // n = 1 ʱ�Ż�ִ��
			n++;
		case 2:
			m++; n++;
			break; //break�������Լ����ڵ�switch���
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