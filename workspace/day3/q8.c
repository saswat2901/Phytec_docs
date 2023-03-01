#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float x,y;
		scanf("%f",&a);
		printf("input the first no:\n");
	scanf("%f",&b);
	printf("input the second no:\n");
		scanf("%f",&c);
		printf("input the third no:\n");
	x=(-b+sqrt((b*b)-4*a*c))/2*a;
	printf("root1:%f\n",x);
		y=(-b-sqrt((b*b)-4*a*c))/2*a;
		printf("root2:%f\n",y);
return 0;
}

