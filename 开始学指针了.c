#include <stdio.h>
//
// 指针变量  存储变量地址
////如何创建指针变量
//int main()
//{ 
//	int a = 10; //a 在内存中占4个字节
//	printf("%p\n", &a); //%p 专门用来打印地址
//
//	int * pa = &a; //pa是用来存放地址的，在c语言中pa也叫做指针变量
//
//	// * 说明 pa是指针变量
//	//int 说明pa执行的对象是int类型
//  // & 取地址操作符，单目操作符
//
//	char ch = 'w';
//	char * pc = &ch;
//
//	return 0;
//
//
//}

////指针变量存放自身地址
//int main()
//{
//	int* pa = &pa;  //int * 和int类型不同
//
//	return 0;
//}
   

////指针 就是 地址
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//解引用操作 *pa通过pa里的地址找到a
//	//会改变a的值
//	printf("%d\n", a);
//
//	return 0;
//}

////指针变量大小
//int main()
//{
//	//指针大小相同，需要多大空间取决于地址存储需要多大空间
//	//64位机器，所以8字节，地址全是8
//	printf("%d\n",sizeof(char*));
//	printf("%d\n",sizeof(short*));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(long*));
//	printf("%d\n",sizeof(long long*));
//	printf("%d\n",sizeof(double*));
//	printf("%d\n",sizeof(float*));
//
//	return 0;
//
//}

