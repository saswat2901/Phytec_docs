#include<stdio.h>
#include"math.h"
int main()
{
	float x1,x2,y1,y2,dis;
	 scanf("%f\n%f\n%f\n%f",&x1,&x2,&y1,&y2);
	 printf("input x1:%f\n",x1);
	  printf("input y1:%f\n",y1);
	 printf("input x2:%f\n",x2);
          printf("input y2:%f\n",y2);
          dis=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	  printf("distance between the said points:%f\n",sqrt(dis));
		  return 0;
}

	 






