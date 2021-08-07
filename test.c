//#define _CRT_SECURE_NO_WARNINGS   1
//
////内存开辟
//
//
////1. 栈区（stack）：在执行函数时，函数内局部变量的存储单元都可以在栈上创建，函数执行结束时这些
////存储单元自动被释放。栈内存分配运算内置于处理器的指令集中，效率很高，但是分配的内存容量有
////限。 栈区主要存放运行函数而分配的局部变量、函数参数、返回数据、返回地址等。
////2. 堆区（heap）：一般由程序员分配释放， 若程序员不释放，程序结束时可能由OS回收 。分配方式类似
////于链表。
////3. 数据段（静态区）（static）存放全局变量、静态数据。程序结束后由系统释放。
////4. 代码段：存放函数体（类成员函数和全局函数）的二进制代码。
//
////实际上普通的局部变量是在栈区分配空间的，栈区的特点是在上面创建的变量出了作用域就销毁。
////但是被static修饰的变量存放在数据段（静态区），数据段的特点是在上面创建的变量，直到程序结束才销毁
////所以生命周期变长。
//
//
////内核空间用户代码不能读写
//
////内存映射段（文件映射、动态库、匿名映射）
//
//
//#include<stdio.h>
//
////数据段（全局变量，静态数据）
//int globalVar = 1;
//static int staticGlobalVar = 1;
//
//void test()
//{
//	static int staticVar = 1;//数据段
//
//	//栈（向下增长)=号前面的
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";//这两个abcd在代码段（可执行代码，只读常量）
//	char *pchar3 = "abcd";
//	int *ptr1 = (int*)malloc(sizeof(int)*4);//堆（向上增长)malloc calloc  realloc
//	int *ptr2 = (int*)calloc(4,sizeof(int));
//	int *ptr3= (int*)realloc(ptr2,sizeof(int)*4);
//	
//	free(ptr1);
//	free(ptr3);
//}
//
//int main()
//{
//	return 0;
//}