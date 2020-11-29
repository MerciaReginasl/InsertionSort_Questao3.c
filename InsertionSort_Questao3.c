#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertionSort(char *l[], int tam){
 	 for(int i =1; i < tam; i++) {
   	   char *Strings = l[i];
   	   int j = i - 1;

   	   while (j >= 0 && (strcmp(l[j], Strings) > 0)) {
     	 l[j+1] = l[j];
     	 j = j - 1;
   }
   	   	   l[j+1] = Strings;
 }
}

int main(){

    char *l[] = {"estrutura", "dados", "linguagem", "programação", "complexo", "estudar", "aprender", "Mestre", "Aluno"};
    int tam = 9;

    //Sem ordem 
    printf("Strings sem ordenacao:\n");
    for(int i = 0; i < tam; i++){
        printf("%s ", l[i]);
    }

    printf("\n");
    printf("\n");

    insertionSort(l, tam);

    //ordem crescente
    printf("Strings com ordenacao:\n");
    for(int i = 0; i < tam; i++){
        printf("%s ", l[i]);
    }
    
    return 0;
}
