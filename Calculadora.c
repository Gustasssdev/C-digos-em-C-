#include <stdio.h>

int main(){

int n1,n2,n3;
char op;

printf("Coloque um numero: ");
scanf("%d", &n1);

printf("Coloque uma operacao: ");
scanf(" %c", &op);

printf("Coloque um numero: ");
scanf("%d", &n2);

switch ( op )
{
case '+':
    n3 = n1 + n2;
    printf("O valor da soma e: %d", n3);
    break;
case '-':
    n3 = n1 - n2;
    printf("O valor da subtração e: %d", n3);
    break;
case '*':
    n3 = n1 * n2;
    printf("O valor da multiplicação e: %d", n3);
    break;
    case '/':
    
    if (n2 == 0)
    {
      printf("NUMERO INAPROPIADO");
    }
    else
    {
        n3 = n1 / n2;
        printf("O valor da divisão e: %d", n3);
        break;
    }
    
    
    
}


}
