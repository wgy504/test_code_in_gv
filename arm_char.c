#include <stdio.h>



void main()
{
	unsigned char a = 120;
	char b = -2;//0xFE
	if(a > b)
	{
		printf("b = %x\n", b);	
	}
	else
	{
		printf("a < b\n");	
	}
	
	//��arm�� 			a < b; ����arm�£�charΪ�޷�����
	//��cygwin�£� 	a > b��
	
	
}