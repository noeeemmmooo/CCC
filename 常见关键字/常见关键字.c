#include <stdio.h>
//�����ؼ���

////typedef �����ض���
////����������
//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 100;
//
//	return 0;
//}

//static ��̬��
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//void test()
//{
//	//int a = 1;  //���ʮ��2
//	static int a = 1;   //static ��ʼ�ձ���a������ֵ�����˾ֲ���Χ���Ὣa������ֵ����
//	//���ı��˾ֲ�������������
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i ++;
//	}
//	return 0;
//}
////extern�����ⲿ����
//extern int g_val;
////static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ�����Դ�ļ���.c���ڲ�ʹ��
////����Դ�ļ������ã����ⲿ��������
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

////staticʹ����ֻ����Դ�ļ��ڲ�ʹ�ã��ı��ⲿ��������Ϊ�ڲ���������
//extern int Add(int, int);//ֻҪд�����;ͺ�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//define ���峣��(��һ��Ԥ����ָ�
//1.define���峣��
//2.define�����
//#define MAX 1000
//int mian()
//{
//	printf("%d\n", MAX);
//	return 0;
//}
//define ���� ��
//#define ADD(X,Y) X+Y  //���൱���滻  1
#define ADD(X,Y) ((X)+(Y)) //�������� 4*��2+3��
int main()
{
	printf("%d\n", 4 * ADD(2, 3)); //�����4*2+3 ������4*��2+3�� 1

	return 0;
}




