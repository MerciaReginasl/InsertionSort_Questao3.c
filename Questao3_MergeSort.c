#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intercala(char *l[],int ini, int fim, int meio) {
  char *aux[fim-ini+1];
  int p_aux = 0;
  int ini1 = ini, ini2 = meio + 1;

  while( (ini1 <= meio) && (ini2 <= fim) ) {
    if (strcmp(l[ini1], l[ini2]) < 0)
      aux[p_aux] = l[ini1++];
    else
      aux[p_aux] = l[ini2++];
    p_aux++;
  }

  for (int i = ini1 ; i <= meio ; i++)
    aux[p_aux++] = l[i];
  
  for (int i = ini2 ; i <= fim ; i++)
    aux[p_aux++] = l[i];
  
  for (int i = ini, j = 0 ; i <= fim ; i++,j++)
    l[i] = aux[j];
}

void mergeSort(char *l[], int ini, int fim) {
  if (ini < fim) {
    int meio = (ini + fim) / 2;
    mergeSort(l,ini,meio);
    mergeSort(l,meio+1,fim);
    intercala(l,ini,fim,meio);
  }
}

int main(void) {
    char *palavra[] = {"Mércia", "estudar", "linguagem", "programação", "estrutura", "dados", "segundo", "período", "IFPB", "superior", "pandemia"};
    mergeSort(palavra, 0, 10);

    for (int i = 0 ; i <= 10  ; i++)
    printf("%s ", palavra[i]);

  return 0;
}
