#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM][TAM];
    int navioH[TAM_NAVIO] = {3, 3, 3};
    int navioV[TAM_NAVIO] = {3, 3, 3};

    int i, j;

    /* Inicializa o tabuleiro com 0 (água) */
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    /* Coordenadas iniciais dos navios */
    int linhaH = 2, colunaH = 1; // navio horizontal
    int linhaV = 5, colunaV = 6; // navio vertical

    /* Posiciona navio horizontal */
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = navioH[i];
    }

    /* Posiciona navio vertical */
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }

    /* Exibe o tabuleiro */
    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
