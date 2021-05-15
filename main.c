#include <stdio.h>
//C语言类型
//1.内置类型char int long...	2.自定义类型(构造类型)
//类型的意义：1、决定开辟空间的大小2.
//整数原反补相同
//整数数据存放的内存是补码

//大小端的存储模式
//大端:数据的低位保存在内存的高地址中，数据的高位，保存在低地址中
//小端：数据的低位保存在内存的低地址中，数据的高位，保存高地址中
//判断是大端或者小端存储
//check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//返回1小端，0大端
//}
//int main()
//{
//	int ret=check_sys();
//	if (ret==1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b= -1;
//	unsigned char c= -1;
//	printf("a=%d b=%d c=%d", a, b, c);//-1,-1,255
//	return 0;
//}

//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("111");
//	}
//	return 0;
//}

int main()
{
	int n = 9;
	float* p = (float*)&n;
	printf("%d\n", n);
	printf("%f\n", *p);
	*p = 9.0;
	printf("%d\n", n);
	printf("%f\n", *p);
	return 0;
}