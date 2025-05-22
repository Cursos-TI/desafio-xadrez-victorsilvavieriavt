#include <stdio.h>

int main() {

    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    int contador_bispo = 1;
    while (contador_bispo <= 5) {
        printf("Cima Direita\n");
        contador_bispo++;
    }
    printf("\n");

    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= 8);
    printf("\n");

    return 0;
}