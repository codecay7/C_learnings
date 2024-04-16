#include<stdio.h>
int main(){
int i=0,n=3;
int factorial =1;
for (i = 1; i <= n; i++)
{
  factorial= factorial*i ;
}

    printf("the value of fact %d is %d",n,factorial);
    
    return 0;
}