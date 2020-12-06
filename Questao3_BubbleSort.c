#include <stdio.h>
#include <stdlib.h>

typedef struct LISTA{

int dado;
struct LISTA *prox; 

}lista;

lista *insere(lista *p, int valor){

lista *novo;
novo=(lista*)malloc(sizeof(lista));
novo->dado = valor;
novo->prox = p;
return novo;

 }
 
lista *BubbleSort(lista *p){
lista *aux = NULL;
lista *novo = p;


int *recebe;
int x=0;
int menor=0;


void bubbleSort(int l[], int tam){
  int trocou = 1;
  int troca;
  for(int i = 0 ; i < tam && trocou; i++) {
    trocou = 0;
    for (int j = 0 ; j < tam - 1 - i; j++)
      if (l[j] > l[j+1]) {
        troca(&l[j],&l[j+1]);
        trocou = 1;
	  }
   }
  }
}

void imprime(lista *p){
	lista *novo;
	for(novo = p; novo!= NULL; novo=novo->prox){
    	printf(" %d",novo->dado);

}

 }

  int main(){

  lista *l,i;
  lista *primeiro, *ultimo;
  
	
	l = insere(l, 90);
	l = insere(l, 5);
	l = insere(l, 30);
	l = insere(l, 50);
	l = insere(l, 80);
	
	bubbleSort(l, tam);
	
	imprime(l);
	printf("\n");
	l = BubbleSort(l);

  }
