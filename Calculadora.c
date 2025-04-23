#include <stdio.h>

float calcular(float n1, float n2,char op){
    float n3;
    
    switch ( op )
    {
    case '+':
        n3 = n1 + n2;
        
        break;
    case '-':
        n3 = n1 - n2;
        
        break;
    case '*':
        n3 = n1 * n2;
        
        break;
        case '/':
        
        if (n2 == 0)
        {
          printf("NUMERO INAPROPIADO");
        }
        else
        {
            n3 = n1 / n2;
            
            break;
        }
        
        
        
    }
    
return n3;
}

int main() {
float num1,num2;
char operator;
float n3; 

printf("Coloque um numero: ");
scanf("%f", &num1);


printf("Coloque um numero: ");
scanf("%f", &num2);

printf("Coloque uma operacao: ");
scanf(" %c", &operator);


n3 = calcular(num1,num2,operator);
printf("O valor e: %f", n3);
}
