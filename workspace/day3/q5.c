#include<stdio.h>
int main()
{
	int x,y,z;
	int big;
	scanf("%d\n%d\n%d",&x,&y,&z);
        printf("input the first integer:%d\n",x);
	printf("input the first integer:%d\n",y);
	printf("input the first integer:%d\n",z);
		if (x>y && x>z)
		big = x;
		else if (y>z)
		big = y;
		else
		big = z;
		printf("goat is:%d",big);

	return 0;
	}	
