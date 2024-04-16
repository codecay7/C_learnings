// greattest of three numbers

#include <stdio.h>
int main()
{
   int num1, num2, num3;
   printf("enter three numbers to check the greatest one\n");
   scanf("%d%d%d", &num1, &num2, &num3);

   if (num1 > num2 && num1 > num3)
   {
      printf("num1 is greater %d\n", num1);
   }
   if (num2 > num1 && num2 > num3)
   {
      printf("num2 is greater %d\n", num2);
   }
   if (num3 > num2 && num3 > num1)
   {
      printf("num3 is greater %d\n", num3);
   }
   return 0;
}