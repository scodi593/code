#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a=0,b=0,n=0;
    char* arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&a);
    scanf("%d",&b);

    for(n = a;n<=b;n++)
    {
        if(n>9)
        {
            if(n%2 ==0)
               printf("even\n");
            else {
            printf("odd\n");
            }   
        }
        else {
          puts(arr[n]);
        }
    }
    return 0;

}
