#include <stdio.h>


void main()
{
	int a = 0;
	char *p = "test";
	a = sizeof(char);
	printf("char 		len = %d\n", a);
	a = sizeof(short);
	printf("short 		len = %d\n", a);
	a = sizeof(int);
	printf("int 		len = %d\n", a);
	a = sizeof(long);
	printf("long 		len = %d\n", a);
	a = sizeof(long long);
	printf("long long 	len = %d\n", a);
	a = sizeof(float);
	printf("float 		len = %d\n", a);
	a = sizeof(double);
	printf("double 		len = %d\n", a);
	a = sizeof(long double);
	printf("long double 	len = %d\n", a);
	a = sizeof(p);
	printf("p 		len = %d\n", a);

}