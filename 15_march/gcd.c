
#include <stdio.h>

//Finds the greatest common divisor of m and n
//m and n are both > 0
int
gcd (int m, int n)
{
      int ans;

      if (m % n == 0)
            ans = n;
      else
            ans = gcd(n, m % n);

      return (ans);
}
int main (void)
{
      int n1, n2;

      printf("Enter two positive integers separated by a space> ");
      scanf("%d%d", &n1, &n2);
      printf("Their greatest common divisor is %d\n", gcd(n1, n2));

      return (0);
}