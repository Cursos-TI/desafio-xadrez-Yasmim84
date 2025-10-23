#include <stdio.h>

int main() {
  // Constantes para o número de casas
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Implementação de Movimentação da Torre
    // Utiliza estrutura for para mover 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação do Bispo
    // Utiliza estrutura while para mover 5 casas na diagonal (cima e direita)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while ( j < casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // Implementação de Movimentação da Rainha
    // Utiliza estrutura do-while para mover 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);
    return 0;
}