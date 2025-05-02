#include <stdio.h>
#include <stdlib.h>

int fatorial(int num) {
    int fator = 1; // Variável auxiliar para armazenar o resultado
    for (int i = 1; i <= num; i++) {
        fator = fator * i;
    }
    return fator;
}

int main() {
    int input, result;
    printf("Coloque o fatorial do numero: ");
    scanf("%d", &input);

    if (input < 0) {
        printf("Erro: Não é possível calcular o fatorial de um número negativo.\n");
        return 1;
    }

    result = fatorial(input);

    printf("O fatorial de %d e: %d\n", input, result);
    return 0;
}