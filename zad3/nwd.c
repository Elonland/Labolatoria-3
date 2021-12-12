#include "deklaracje.h"

long int nwd(long int n,long int k)
{
long int temp;
while(k != 0)
  {
  temp = k;
  k = n % k;
  n = temp;
  }
return n;
}
