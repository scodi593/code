#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int a,b,x,x1;
    float c,d,y,y1;
     scanf("%d %d",&a,&b);
     scanf("%f %f",&c,&d);
     x=a+b;
     x1=a-b;
     printf("%d %d\n",x,x1);
     
     y=c+d;
     y1=c-d;
     printf("%.1f %.1f",y,y1);
     
    return 0;
}
