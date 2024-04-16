#include<stdio.h>
int main(){

    int i,n=10,prime=1;
    for(i=2;i<n;i++)
    {
    if (n%i==0){
    prime=0;
    
        break;
    } }
    if (prime==0)
    {
        printf("this is not a prime");
    }
    else{
    printf("this is prime");}
    return 0;
}