// visual slam, estudar, usar uma camera mono pra fazer mapeamento e navegação 
//simultaneamente 
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

struct complexo_polar {
    double real_polar;       // Magnitude
    double imaginario_polar; // Ângulo em graus
};


struct complexo_polar calcular(double num1, double num2) {
    struct complexo_polar converter;

    // Calcula a magnitude
    converter.real_polar = sqrt(pow(num1, 2) + pow(num2, 2));

    // Calcula o ângulo (em radianos) e converte para graus
    converter.imaginario_polar = atan2(num2, num1) * (180.0 / M_PI);

    return converter;
}

// Definição da struct para números complexos
struct complexo {
    float real;
    float imaginaria;
};

// Função para somar dois números complexos
struct complexo soma_complexos(struct complexo a, struct complexo b) {
    struct complexo resultado;
    resultado.real = a.real + b.real;
    resultado.imaginaria = a.imaginaria + b.imaginaria;
    return resultado;
}

// Função para subtrair dois números complexos
struct complexo subtrai_complexos(struct complexo a, struct complexo b) {
    struct complexo resultado;
    resultado.real = a.real - b.real;
    resultado.imaginaria = a.imaginaria - b.imaginaria;
    return resultado;
}

// Função para multiplicar dois números complexos
struct complexo multiplica_complexos(struct complexo a, struct complexo b) {
    struct complexo resultado;
    resultado.real = a.real * b.real - a.imaginaria * b.imaginaria;
    resultado.imaginaria = a.real * b.imaginaria + a.imaginaria * b.real;
    return resultado;
}

// Função para dividir dois números complexos
struct complexo divide_complexos(struct complexo a, struct complexo b) {
    struct complexo resultado;
    float denominador = b.real * b.real + b.imaginaria * b.imaginaria;
    if (denominador == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        resultado.real = 0;
        resultado.imaginaria = 0;
        return resultado;
    }
    resultado.real = (a.real * b.real + a.imaginaria * b.imaginaria) / denominador;
    resultado.imaginaria = (a.imaginaria * b.real - a.real * b.imaginaria) / denominador;
    return resultado;
}

float raiz(int radicando){ 
    float r_new;
    float erro = 0.0000001;
    r_new = radicando/2.0;
    
    while (r_new * r_new - radicando > erro)
    { 
        r_new = (r_new + radicando / r_new) / 2.0;
    }
    
    return r_new;
    }
    
    float pot(float base, float expoente){

        int result_pot = 1; // Declare and initialize result_pot
        for (int i = 0; i < expoente; i++)
        {
            result_pot = result_pot * base; 
        }
        return result_pot; 
        }

        
        // Funções e structs permanecem iguais...
        float calcular_naturais(float n1, float n2,char op){
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
            char resposta;
            char operacao; 
            struct complexo num1, num2, resultado;
            float num1_1,num2_2;
            char operator;
            float n3; 
            
            do {
                printf("Escolha uma funcao da calculadora (r, p, C, c, n): ");
                scanf(" %c", &resposta); // Corrigido o espaço antes de %c
        
                if (resposta == 'r') {
                    float num_raiz, result_raiz;
                    printf("Coloque o valor a ser tirado a raiz: ");
                    scanf("%f", &num_raiz);
                    if (num_raiz < 0) {
                        printf("Erro: Nao é possível calcular a raiz de um número negativo.\n");
                    } else {
                        result_raiz = raiz(num_raiz);
                        printf("Resultado da raiz: %.4f\n", result_raiz);
                    }
                } else if (resposta == 'p') {
                    float base_2, expoente_2, resultado;
                    printf("Coloque o numero da base: ");
                    scanf("%f", &base_2);
                    printf("Coloque o numero do expoente: ");
                    scanf("%f", &expoente_2);
                    resultado = pot(base_2, expoente_2);
                    printf("Resultado da potencia: %.4f\n", resultado);
                } else if (resposta == 'C') {
                    double real_num, imaginario_num;
                    printf("Coloque a parte real e a imaginaria: ");
                    scanf("%lf %lf", &real_num, &imaginario_num);
                    struct complexo_polar converter = calcular(real_num, imaginario_num);
                    printf("Resultado da conversao: Magnitude = %.4lf, Angulo = %.4lf graus\n", converter.real_polar, converter.imaginario_polar);
                } else if (resposta == 'c') {
                    printf("Digite a parte real e imaginária do primeiro número: ");
                    scanf("%f %f", &num1.real, &num1.imaginaria);
                    printf("Digite a parte real e imaginária do segundo número: ");
                    scanf("%f %f", &num2.real, &num2.imaginaria);
                    printf("Escolha a operação (+, -, *, /): ");
                    scanf(" %c", &operacao);
        
                    switch (operacao) {
                        case '+':
                            resultado = soma_complexos(num1, num2);
                            break;
                        case '-':
                            resultado = subtrai_complexos(num1, num2);
                            break;
                        case '*':
                            resultado = multiplica_complexos(num1, num2);
                            break;
                        case '/':
                            resultado = divide_complexos(num1, num2);
                            break;
                        default:
                            printf("Operação inválida.\n");
                            continue;
                    }
                    printf("Resultado: %.2f %.2fi\n", resultado.real, resultado.imaginaria);
                } 
                
                
                else if(resposta == 'n'){

                    printf("Coloque um numero: ");
                    scanf("%f", &num1_1);
                    
                    
                    printf("Coloque um numero: ");
                    scanf("%f", &num2_2);
                    
                    printf("Coloque uma operacao: ");
                    scanf(" %c", &operator);
                    
                    
                    n3 = calcular_naturais(num1_1,num2_2,operator);
                    printf("O valor e: %f", n3);

                }else {
                    printf("Opcao invalida.\n");
                }
                while (getchar() != '\n'); // Limpa o buffer de entrada
            } while (resposta != 'C' && resposta != 'c' && resposta != 'r' && resposta != 'p' && resposta != 'n');
        
            return 0;
        }
    


    
  