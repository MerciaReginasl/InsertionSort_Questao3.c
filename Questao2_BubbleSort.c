#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char vetor[5][30], aux[30];
int i, j;

	for(int i=0;i<5;i++){
	printf("String %d: ", i);
		fgets(vetor[i], 30, stdin);
	}

char BubbleSortsStrings(char** vetor, int tamanho){
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(strcmp(vetor[i], vetor[j])<0){
				strcpy(aux, vetor[i]);
				strcpy(vetor[i], vetor[j]);
				strcpy(vetor[j], aux);

			}
		}
	}
}
                
	printf("Strings ordenadas: \n");
		for(i=0;i<5;i++){
			printf("String %d: %s", i, vetor[i]);
		}

		return 0;
}

int main(int argc, char** argv)
{
	 int l[] = {25,48,37,12,57}, tam = 5; // alterado o tamanho do array 

  BubbleSortsStrings(vetor, tam);
  
  for(i=0;i<5;i++){
		printf("String %d: ", i);
			fgets(vetor[i], 30, stdin);


printf("Strings ordenadas: \n");
		for(i=0;i<5;i++){
			printf("String %d: %s", i, vetor[i]);
		}

		return 0;

