
#include <stdio.h>

// Função recursiva para movimentar a Torre para a Direita
void moverTorre(int passo, int maximo) {
    if (passo > maximo) return;
    printf("Direita\n");
    moverTorre(passo + 1, maximo);
}

// Função recursiva para movimentar a Rainha para a Esquerda
void moverRainha(int passo, int maximo) {
    if (passo > maximo) return;
    printf("Esquerda\n");
    moverRainha(passo + 1, maximo);
}

// Função recursiva para o Bispo (diagonal cima-direita)
void moverBispo(int passo, int maximo) {
    if (passo > maximo) return;
    printf("Cima Direita\n");
    moverBispo(passo + 1, maximo);
}

// Função com loops aninhados para o movimento do Cavalo (duas para cima, uma para direita)
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < 2; i++) {
        if (i == 1) continue;  // Simulação de pulo com controle de fluxo
        printf("Cima\n");

        for (int j = 0; j < 1; j++) {
            if (j > 0) break;
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    printf("\n");
}

// Função com loops aninhados para o Bispo (extra com loops)
void moverBispoComLoops(int casas) {
    printf("Movimento do Bispo com loops aninhados:\n");

    for (int i = 1; i <= casas; i++) { // movimento vertical (linha)
        for (int j = 1; j <= 1; j++) { // movimento horizontal (coluna)
            printf("Cima Direita\n");
        }
    }
    printf("\n");
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(1, 5); // 5 casas para a Direita
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(1, 8); // 8 casas para a Esquerda
    printf("\n");

    printf("Movimento do Bispo com Recursividade:\n");
    moverBispo(1, 5); // 5 casas na diagonal Cima Direita
    printf("\n");

    moverBispoComLoops(5); // Extra: com loops aninhados

    moverCavalo(); // Cavalo com loops complexos

    return 0;
}
