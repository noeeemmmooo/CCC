#include <stdio.h>


//1.作用域和生命周期
//局部变量作用域即为变量所在局部范围
//全局变量，整个工程可用（但同一工程下想用另一个文件代码需先声明：extern + 变量名）
//执行性代码必须放在函数中

//局部变量生命周期：进入运行范围（局部范围）开始，出就结束
//全局：整个程序的周期

//int a = 10;
//int main()
//{
//	
//	
//	return 0;
//
//}

////2.const 修饰常变量
//int main()
//{
//	int num = 10;     //const int num = 10 即固定了num只能为10，后续改num=20就会报错
//	num = 20;         //此时num常变量。常属性（不能改变的属性) 被const修饰了，但本质还是变量而不能改变值
//	printf("num = %d\n", num);
//
//	return 0;
//}

////3.define 标识符常量
//#define MAX 10000   //定义后MAX值不可改
//int main()
//{
//	int a = MAX;
//	// 若加上 int MAX = 20000，会报错
//	printf("a = %d\n", a);
//
//	return 0;
//}

////4.枚举常量
////可一一列举常量  enum 枚举关键字
//enum Sex
//{
//	//枚举变量可能取值
//	MALE,   // 为0（默认） 后续书写中不可改  //若写MALE = 3 ，即为赋初值（后续书写也不可更改赋值（看54
//	FEMALE, // 1                                       // 4
//	SECRET  // 2                                       // 5
//};
//int main()
//{
//	enum Sex s = MALE;
//	//若在此定义MALE = 2 会报错
//	printf("%d\n", MALE);  
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}

//字符串
//字符串结束标志 ：\0
#include <string.h>
int main()
{
	
	char arr1[] = "abc";  //自带结束标志 \0
	//char arr2[] = { 'a','b','c'}; //不自带\0  &1
	char arr2[] = { 'a','b','c','\0'}; //修改:带上结束标志

	////验证\0 方法（1）：打印结果
	//printf("%s\n", arr1);  //打印完就结束
	//printf("%s\n", arr2);   //打印完后续无法自动停止会打印出乱码  &1

	//验证\0 方法（2）：求字符串长度
	int len = strlen(arr1); //string length   使用前先引用头文件<string.h>
	printf("%d\n", len);   // \0 只是结束标志，不是字符串中的内容
	printf("%d\n", strlen(arr2));   //不加 \0 ，会返回随机数值  &1
	return 0;
}
