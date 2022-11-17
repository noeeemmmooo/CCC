//简单练习打印
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
//    printf("你的年龄是：%d岁,转换为天数后：%d天", age, age * 365);//不考虑闰年
//
//    return 0;
//}

#include <stdio.h>
int main()  //这条程序一直出错不知道为什么要砂仁了！
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		void jolly();   //怎么不加void就显示未定义啊！
	}                   
	void deny();       //敲同样的代码你怎么就一直出错！受不了了
	return 0;          //敲对了也不出正确结果运行，你要怎样
}
void jolly()
{
	printf("For he's a jolly good fellow!\n");
}
void deny()
{
	printf("Which nobody can deny!\n");
}
