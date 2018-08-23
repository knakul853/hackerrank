#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() 
{
    int i,m,t,p;  
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++)
    { 
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        if(a[i]>=38)
        {
            t=a[i]/5;
            p=t*5+5;
            
           if(p-a[i]<3){
               
               
               printf("%d\n",p);
           }
            else
            { printf("%d\n",a[i]);}
            
        }
        else
            printf("%d\n",a[i]);
    }
    return 0;
}
