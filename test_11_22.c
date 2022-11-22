#include <stdio.h>


//// ~使用（按位取反）
////位是指二进制位
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//-1   (将所有二进制位中0变1，1变0） 
//	//整数在内存中存储的是补码（补码返原码，先-1，再除符号位外其余位按位取反）
//
//	return 0;
//}

// ++ 使用规则
//int main()
//{
//	////前置 ++ ，先++，后使用
//	//int a = 10;
//	//int b = ++a; //a先++后，再给b赋值使用
//
//	//后置 ++ ，先使用，后++
//	//int a = 10;
//	//int b = a++; //a值先给b使用，用完a再++
//
//	//printf("%d\n", a); //  11  //11
//	//printf("%d\n", b); //  11  // 10
//
//	//return 0;
//
//}
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//
//	return 0;
//}

////(类型) 强制类型转换 
//int main()
//{
//	int a = (int)3.14;  //强制将double类型转为int
//
//	printf("%d\n", a);
//	return 0;
//}

//逻辑操作符
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//&& 并且（即判断符号两边都为真才为真，有一个为假就为假）
//	//int c = a && b;
//	//  || 或 （符号两边只要有一个为真就为真）
//	//int c = a || b;
//	printf("%d\n", c);
//
//	return 0;
//}

//条件操作符（三木操作符）
//exp1？exp2：exp3
//exp1 成立，exp2计算，整个表达式是exp2的结果
//exp1 不成立，exp3计算，整个表达式是exp3的结果
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	//相当于：
//	/*if (a > b)
//		max = a;
//	else
//		max = b;
//	*/
//	return 0;
//}

////逗号表达式
////从左向右计算，结果是最后一个表达式的结果
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	          // a =  5  //c = 1    // b = 3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	          //最后输出3
//	printf("%d\n", d);
//	return 0;
//}

//下标操作符
int main()
{
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n", arr[5]); //[ ]下标引用操作符，调用下标为5的数
	//函数名后的( )，函数调用操作符


	return 0;
}