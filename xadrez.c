#include <stdio.h>

// Função recursiva para movimentar a Torre (direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar o Bispo (diagonal cima-direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função com loops aninhados para o Bispo (vertical + horizontal)
void moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

// Função recursiva para movimentar a Rainha (esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função com loops complexos para o Cavalo (movimento em "L": 2 cima + 1 direita)
void moverCavalo(int limiteY, int limiteX) {
    for (int y = 0; y < limiteY; y++) {
        for (int x = 0; x < limiteX; x++) {
            if (y + 2 < limiteY && x + 1 < limiteX) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
            } else {
                continue; // ignora movimentos inválidos
            }
        }
    }
}

int main() {
    // Constantes para número de casas
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int limiteCavaloY = 8;
    const int limiteCavaloX = 8;

    // Torre com recursividade
    printf("Movimento da Torre (Recursivo):\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo com recursividade
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // Bispo com loops aninhados
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(2); // exemplo com 2x2 casas
    printf("\n");

    // Rainha com recursividade
    printf("Movimento da Rainha (Recursivo):\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo com loops complexos
    printf("Movimento do Cavalo (Loops Complexos):\n");
    moverCavalo(limiteCavaloY, limiteCavaloX);
    printf("\n");

    return 0;
}

