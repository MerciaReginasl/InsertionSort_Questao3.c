#include "Questao4_SelectionSort.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
   
    inserir(9);
    inserir(65);
    inserir(111);
    inserir(15);
    inserir(70);
    inserir(57);
    inserir(26);
    inserir(81);
    inserir(2);
    inserir(10);

    int tam = tamanho();

	printf("Elementos sem ordenacao:\n");
    imprimir();

	selectionSort(ini, tam);
	printf("\n");

	
	printf("Elementos com ordenacao:\n");
	imprimir();

  return 0;
