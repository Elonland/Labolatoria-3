#include "deklaracje.h"
#include <stdio.h>

int main(void)
{
printf("Podaj slowo\n");
char slowo[100];

scanf("%s",slowo);

if(palindrom(slowo))
printf("Słowo: \"%s\" jest palindromem\n", slowo);
else
printf("Słowo: \"%s\" nie jest palindromem\n", slowo);
return 0;
}
