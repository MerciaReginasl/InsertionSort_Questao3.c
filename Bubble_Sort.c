#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void bubbleSort(int l[], int tam){
  int trocou = 1;
  for (int i = 0 ; i < tam && trocou; i++) {
    trocou = 0;
    for (int j = 0 ; j < tam - 1 - i; j++)
      if (l[j] > l[j+1]) { // no caso de ordenar o array em forma decrescente inverte o sinal: de (<) para (>).
        troca(&l[j],&l[j+1]);
        trocou = 1;
	  }
  }
  }
  
}

int main(void) {
	
  int l[] = {25,48,37,12,57,86,33,92}, tam = 8; // alterado o tamanho do array 

  bubbleSort(l, tam);

  for (int i = 0 ; i < tam ; i++)
    printf("%d ",l[i]);
  return 0;
}
