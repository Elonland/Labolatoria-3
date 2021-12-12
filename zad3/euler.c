#include "deklaracje.h"


int phi(long int n)
{
int licznik = 0;

for(int i = 1; i < n; i++)
  {
  if(n % 2 == 0 && i % 2 == 0)
  continue;
  if(nwd(n,i) == 1)
  ++licznik;
  }

if(n == 1)
++licznik;


return licznik;
}
