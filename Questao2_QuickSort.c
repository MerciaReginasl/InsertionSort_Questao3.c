#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int particao(int l[], int ini, int fim) {
  int pivo = l[(ini+fim)/2];
  int i = ini-1, j = fim+1;

  while ( i < j ) {
    while (l[--j] < pivo);
    while (l[++i] > pivo);
    if (i < j) troca(&l[i],&l[j]);
  }

  return j;
}

void quickSort(int l[], int ini, int fim) {
  if (ini < fim) {
    int p = particao(l,ini,fim);
    quickSort(l,ini,p);
    quickSort(l,p+1,fim);
  }
}

int main(void) {
  int l[15] = {7, 81, 12, 100, 57, 33, 78, 95, 66, 24, 250, 120, 300, 10, 43};
  quickSort(l, 0, 14);

  for (int i = 0 ; i <= 14 ; i++)
    printf("%d ",l[i]);

  return 0;
}
