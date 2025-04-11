#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calcular(float *v1, float *v2, float *delta, float a, float b, float c){
  
  *delta = (b *b ) - (4 * a * c);
  *v1 = ((-b) + sqrt(*delta)) / 2 * a;
  *v2 = ((-b) - sqrt(*delta)) / 2 * a;
  

}

int main()
{

float *v1 =(float*) malloc(sizeof(float) * 1);
float *v2 =(float*) malloc(sizeof(float) * 1);
float *delta =(float*) malloc(sizeof(float) * 1);

float a, b, c;

printf("Coloque os valores: ");
scanf("%f %f %f", &a, &b, &c);


calcular(v1, v2, delta, a, b, c);

if (a == 0)
{
  printf("Nao e uma funcao quadratica");
}

else if (*delta == 0)
{
    printf("As raizes sao iguais : %f", *v1);
}

else if (*delta < 0)
{

    printf("NO TEM RAIZ REAL");
}
else{
  printf("As raizes sao: %.2f %.2f", *v1, *v2);
}
free(v1);
free(v2);
free(delta);
return 0;
}