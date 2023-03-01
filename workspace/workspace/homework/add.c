#include<stdio.h>
int main(int argc,char *argv[])
{
	int i,sum=0;
	printf("argument count=%d \n",argc);
	printf("file name is %s \n",argv[0]);
	for(int i=1;i<argc;i++)
	{
		sum+=atoi(argv[i]);
		printf("sum=%d",sum);
	}
}
