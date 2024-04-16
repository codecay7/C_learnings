#include <stdio.h>
#include <math.h>
int main()
{
      int n, rem, sum = 0, t;
      printf("enter any no.\n");
      scanf("%d,&n");

      t = n;
      while (n > 0)
            ;
      {
            rem = n % 10;
            sum = sum + (pow(rem, 3));
            n = n / 10;
      }

      if (sum == t)
            printf("armstrong");
      else
            printf("Not armstrong");

      return 0;
}
