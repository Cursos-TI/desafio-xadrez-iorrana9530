#include <stdio.h>

int main() {
    //    // Movimento da Torre
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
     //Movimento do Bispo 

    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // O movimentoda Rainha
      printf("Movimento da Rainha:\n");
      
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    //----FIM----//
    return 0;
}

