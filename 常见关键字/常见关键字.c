#include <stdio.h>
//常见关键字

////typedef 类型重定义
////让类型名简化
//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 100;
//
//	return 0;
//}

//static 静态的
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//void test()
//{
//	//int a = 1;  //输出十个2
//	static int a = 1;   //static 会始终保持a计算后的值，出了局部范围不会将a计算后的值销毁
//	//即改变了局部变量生命周期
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
////extern声明外部符号
//extern int g_val;
////static修饰全局变量，使得这个全局变量只能在自己所在源文件（.c）内部使用
////其它源文件不可用，无外部链接属性
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

////static使函数只能在源文件内部使用，改变外部链接属性为内部链接属性
//extern int Add(int, int);//只要写明类型就好
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//define 定义常量(是一个预处理指令）
//1.define定义常量
//2.define定义宏
//#define MAX 1000
//int mian()
//{
//	printf("%d\n", MAX);
//	return 0;
//}
//define 定义 宏
//#define ADD(X,Y) X+Y  //宏相当于替换  1
#define ADD(X,Y) ((X)+(Y)) //这样才是 4*（2+3）
int main()
{
	printf("%d\n", 4 * ADD(2, 3)); //会计算4*2+3 而不是4*（2+3） 1

	return 0;
}




