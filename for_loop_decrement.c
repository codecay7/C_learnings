#include<stdio.h>
int main(){
int i ,n;

printf("enter the no from you want reverse\n");
scanf("%d",&n);
printf("your reversed natural no.");

for (i=n; i; i--)
{
    printf("\n%d",i);
}      
    return 0;
}