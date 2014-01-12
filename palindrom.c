#include <stdio.h>
#include <string.h>
int main()
{
  char wyraz[100];
  int i=0, j;
  printf("Podaj slowo: ");
  scanf("%s", wyraz);
  j=strlen(wyraz)-1;
  while((wyraz[j-i]==wyraz[i]) && i<j)i++;
  if (j==i)
  printf("%s jest palindromem \n", wyraz);
  else
  printf("%s nie jest palindromem \n", wyraz);  
  return 0;
}
