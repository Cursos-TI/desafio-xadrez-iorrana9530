#include <stdio.h>

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // Movimento da Rainha
    
    printf("Movimento da Rainha:\n");
    
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");

    // Loop para mover duas casas para baixo
    for (int l = 1; l <= 2; l++) {
        printf("Baixo\n");
    }

    // Loop para mover uma casa para a esquerda
    int m = 1;
    while (m <= 1) {
        printf("Esquerda\n");
        m++;
    }
    //--------FIM----------//

    return 0;
}
