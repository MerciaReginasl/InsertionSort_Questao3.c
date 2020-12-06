#include "Questao4_SelectionSort.h"
#include <stdio.h>
#include <stdlib.h>

struct sNODE{
  int dado;
  struct sNODE *prox;
};

struct sNODE *ini = NULL, *fim = NULL;

void inserir(int dado);

void remover(int dado);

struct sNODE *buscar(int dado);

int obter(struct sNODE *node);

int tamanho();

//Ordenação Selection Sort
void selectionSort(struct sNODE *l, int tam);

//Auxiliar da função Selection Sort
struct sNODE *indexMin(struct sNODE *aux);

void imprimir();
