#include <stdio.h>
#include <string.h>
#define MAX_PALAVRA 20

/*autora: Beatriz Lima
  ano: 2021
  disciplina: AlgProg2
  */

/*programa que troca r e rr para L, estilo Cebolinha*/

void copiar_cebolinha(char original[], char nova[])
{
    int j = 0;
    int i;

    for(i = 0; original[i] != '\0'; i++)
    {
        if(original[i] != 'R')
        {
            nova[j++] = original[i];
        }
        else if(original[i-1] != 'R')
        {
            nova[j++] = 'L';

        }
    }
    nova[j] = '\0';
}

int main()
{
  char palavra[MAX_PALAVRA];
  char palavra_modificada[MAX_PALAVRA];

  scanf("%s", palavra);
  copiar_cebolinha(palavra, palavra_modificada);
  printf("%s", palavra_modificada);

  return 0;
}
