//����ϰ��ӡ
//#include <stdio.h>
//int main()
//{
//	int x, y;
//	x = 10;
//	y = 5;
//	y = x + y;
//	x = x * y;
//	printf("%d %d\n", x, y);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	a = 5;
//	b = 2;
//	b = a;
//	a = b;
//	printf("%d %d", a, b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("eeemmmooo no\n");
//	printf("eeemmmooo\nno\n");
//	printf("eeemmmooo ");
//	printf("no\n");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int age;
//    printf("age:");
//    scanf("%d", &age);
//    printf("��������ǣ�%d��,ת��Ϊ������%d��", age, age * 365);//����������
//
//    return 0;
//}

#include <stdio.h>
int main()  //��������һֱ����֪��ΪʲôҪɰ���ˣ�
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		void jolly();   //��ô����void����ʾδ���尡��
	}                   
	void deny();       //��ͬ���Ĵ�������ô��һֱ�����ܲ�����
	return 0;          //�ö���Ҳ������ȷ������У���Ҫ����
}
void jolly()
{
	printf("For he's a jolly good fellow!\n");
}
void deny()
{
	printf("Which nobody can deny!\n");
}
