#include <stdio.h>
#include <stdlib.h>

int main(){

    int notas[5][5];
    int i,j;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++)
        {
            printf("Coloque inteiros[%d][%d]: ", i,j);
            scanf("%d", &notas[i][j]);
        }
        
           
    }
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++)
        {
        printf("%d %d |", i,j);
        
        }
        printf("\n");
        
    }
   
   
}