#include<stdio.h>
int main()
{
	int sec,m,h,s;
	printf("input seconds:");
	scanf("%d",&sec);

	h= (sec/3600);
	m= (sec -(3600*h))/60;
	s= (sec -(3600*h)-(m*60));
	printf("h:m:s-%d:%d:%d\n",h,m,s);
	return 0;
}
