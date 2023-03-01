#include<stdio.h>
int main(int argc,char *argv[])
{
	int i;
	printf("argument count= %d\n",argc);
	printf("file name is %s\n",argv[0]);
	for(i=1;i<argc;i++)
	{
		printf("argument %d is %s \n",i,argv[i]);
	}
	return 0;
}
