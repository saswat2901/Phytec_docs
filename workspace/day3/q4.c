#include<stdio.h>

int main()
{
	int a=125,b=12345;
	long ax =1234567890;
	short s =4043;
	float x =2.13459;
	double dx= 1.1415927;
	char c='w';
	unsigned long ux = 2541567890;

	printf("a+c=%d\n",a+c);
	printf("hola amigos");
	printf("a+c=%f\n",x+c);
	printf("a+c=%f\n",dx+c);
	printf("a+c=%ld\n",((int) dx)+ax);
	printf("a+c=%f\n",a+x);
	printf("a+c=%d\n",s+b);
	printf("a+c=%ld\n",ax+b);
	printf("a+c=%hd\n",s+c);
	printf("a+c=%ld\n",ax+c);
	printf("a+c=%lu\n",ax+ux);
	return 0;
	}


	
