#include <stdio.h>
//C��������
//1.��������char int long...	2.�Զ�������(��������)
//���͵����壺1���������ٿռ�Ĵ�С2.
//����ԭ������ͬ
//�������ݴ�ŵ��ڴ��ǲ���

//��С�˵Ĵ洢ģʽ
//���:���ݵĵ�λ�������ڴ�ĸߵ�ַ�У����ݵĸ�λ�������ڵ͵�ַ��
//С�ˣ����ݵĵ�λ�������ڴ�ĵ͵�ַ�У����ݵĸ�λ������ߵ�ַ��
//�ж��Ǵ�˻���С�˴洢
//check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//����1С�ˣ�0���
//}
//int main()
//{
//	int ret=check_sys();
//	if (ret==1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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