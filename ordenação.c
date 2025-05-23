#include <stdio.h>
#define tam 5


void imprimir(int v[]){
 printf("Os valores do array sao: ");

 for (int i = 0; i < tam; i++)
{
   printf("%d ", v[i]);

}
printf("\n");

}

void ordenacao(int vetor[]){

  int aux;

  for (int j = 0; j < tam - 1; j++)
  {
    for (int i = 0; i < tam - 1 ; i++)
    {
        if (vetor[i] > vetor[i+1])
        {
        
            aux = vetor[i];
            vetor[i] = vetor[i+1];
            vetor[i+1] = aux;
        }
        
    }
    
  }
    

}

int main(){

 int vet[tam];
 printf("Coloque os valores do array: ");
 for (int i = 0; i < tam; i++)
 {
    
    scanf("%d", &vet[i]);
 }
 
 
 ordenacao(vet);
 imprimir(vet);
}