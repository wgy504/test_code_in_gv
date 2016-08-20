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
	
	//在arm下 			a < b; 即在arm下，char为无符号型
	//在cygwin下： 	a > b；
	
	
}