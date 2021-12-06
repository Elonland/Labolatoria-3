#include "deklaracje.h"

bool palindrom(char napis[])
{
int n = 0;
while(napis[n] != '\0')
++n;

int a = 0;
int b = n-1;

while(a < b)
{
if(napis[a] != napis[b])
return false;

++a;
--b;
}

return true;
}
