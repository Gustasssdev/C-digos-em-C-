#include <stdio.h>

int soma(int num) {
    int n, somatorio = 0;
    while (num > 0) {
        n = num % 10;       // Obtém o último dígito
        somatorio += n;     // Soma o dígito ao somatório
        num = num / 10;     // Remove o último dígito
    }
    return somatorio;
}

int main() {
    int input, somar;
    printf("Coloque o numero a ser somado: ");
    scanf("%d", &input);

    if (input < 0) {
        printf("Erro: Apenas números positivos são permitidos.\n");
        return 1;
    }

    somar = soma(input);

    printf("O somatorio eh: %d\n", somar);
    return 0;
}