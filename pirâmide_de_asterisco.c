#include <stdio.h>

int main() {
    int i, j, k, n;

    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // imprime os espaços antes dos asteriscos
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // imprime os asteriscos com espaço entre eles
        for (k = 1; k <= i; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
