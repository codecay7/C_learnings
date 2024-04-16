#include<stdio.h>
int main(){
int i=0;
do
{
    printf("the value of i is\n%d",i);
    i++;
    if (i==4)
    {
       break;
    }
    
    } while (i<10);

 return 0;
}