#include<stdio.h>
#include<trigno.h>
int main()
{
	int p,b,h,x,y,z;
	scanf("%d%d%d",&p,&b,&h);
	printf("enter an input\n");
	x=cose(b,h);
	y=sine(p,h);
	z=tane(p,b);
	printf("cose of two sides:%d\n",x);
       	printf("sine of two sides:%d\n",y);
       	printf("tane of two sides:%d\n",z);

  
	return 0;
}



