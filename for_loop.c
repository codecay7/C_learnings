#include<stdio.h>
int main(){
int a;
printf("the first natural no. is:\n");

    for ( a=1; a <100 ; a++)
    {
       printf("%d\n",a++);
       if (a==5)
             break; 
    }
    return 0;
}