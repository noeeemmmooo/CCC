#include <stdio.h>

//结构体 描述复杂对象

//结构体可以让c创建新的类型

////创建一个学生
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
////创建一本书的类型
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};

//int main()
//{
//	// 1：
//	struct Stu s = {"张三",20,85.5}; //结构体的创建和初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//s. 结构体变量.成员变量（.操作符)
//	
//	//2：
//	struct Stu* ps = &s;
//	printf("2:%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
//	//*ps 相当于查找了地址，就是s变量
//
//	//3：-> 箭头操作符 用法（更省事）
//	printf("3:%s %d %f", ps->name, ps->age, ps->score);
//	//->箭头 指针指向对象 （结构体指针->成员变量名）
//
//	return  0;
//
//}

