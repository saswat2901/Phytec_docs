#include<stdio.h>
int main()
{
        int i,j=7,k=9;
	i=printf("hello");
	printf("%d",i);
	i= printf("%d",i);
	 printf("%d",i);
        i= printf("%d %d %d",i,j,k);

	
        printf("%d",i);
        return 0;
}

