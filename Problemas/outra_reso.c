#include <stdio.h>

int main()
{
  char entrada = 0;
  int count = 0;

  for (int i = 0; i < 6; i++)
  {
    scanf("%c", &entrada);
    if (entrada == 'V')
      count ++;
  }

  if (count >= 5)
    printf("\n1");

  else if (count >= 3 && count < 5)
    printf("\n2");

  else if (count >= 1 && count < 3)
    printf("\n3");

  else
    printf("\n-1");

}