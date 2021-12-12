#include "deklaracje.h"
#include <stdio.h>

int main(void)
{
long int n;
printf("Podaj liczbę n: ");
scanf("%ld",&n);
printf("W przedziale od <1 - %ld>\nLiczb względnie pierwszych z %ld jest: %d\n",n,n,phi(n));

return 0;
}
