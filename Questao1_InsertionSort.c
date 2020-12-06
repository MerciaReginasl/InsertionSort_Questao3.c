#include <stdio.h>
#include <stdlib.h>


void insertionSort(int array[], int tamanho) {
      int i, j, tmp;
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && array[j - 1] < array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
}

int main(void) {
  int l[] = {36, 85, 97, 10, 24, 6, 57}, tam = 7;

  insertionSort(l, tam);

  for (int i = 0 ; i < tam ; i++)
    printf("%d ",l[i]);
  return 0;
}
