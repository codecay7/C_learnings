#include<stdio.h>
int main()
{
int n=0,i=0;
printf("give *n* to get multiplication table\n\n ");
scanf("%d",&n);
  for ( i=0; i<n; i++)
  {
    printf("entered n*%d=%d\n",i,n*i);
    
  }
  
    return 0;
}