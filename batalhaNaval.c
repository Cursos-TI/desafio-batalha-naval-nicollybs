#include <stdio.h>

#define TAM 10  // tamanho tabuleiro 

// ---------------------
// Funções utilitárias
// ---------------------

// Imprime qualquer matriz TAMxTAM
void imprimirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Preenche tudo com 0
void limparMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            matriz[i][j] = 0;
}

int main() {
    // --------------------
    // 🟢 NÍVEL NOVATO
    // --------------------
    int tabuleiro[TAM][TAM];
    limparMatriz(tabuleiro);

    // Navio vertical (3 posições)
    int x_vert = 1, y_vert = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_vert + i][y_vert] = 3;
        printf("Navio Vertical: (%d,%d)\n", x_vert + i, y_vert);
    }

    // Navio horizontal (3 posições)
    int x_horz = 3, y_horz = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_horz][y_horz + i] = 3;
        printf("Navio Horizontal: (%d,%d)\n", x_horz, y_horz + i);
    }

    // --------------------
    // 🟡 NÍVEL AVENTUREIRO
    // --------------------
    // Navio diagonal principal
    for (int i = 0; i < 4; i++)
        tabuleiro[i][i] = 3;

    // Navio diagonal secundária
    for (int i = 0; i < 4; i++)
        tabuleiro[i][9 - i] = 3;

    // Exibe tabuleiro completo
    printf("\nTabuleiro Completo:\n");
    imprimirMatriz(tabuleiro);

    // --------------------
    // 🔴 NÍVEL MESTRE
    // --------------------
    int habilidade[TAM][TAM];

    // Cruz
    limparMatriz(habilidade);
    habilidade[2][0] = habilidade[2][1] = habilidade[2][2] = habilidade[2][3] = habilidade[2][4] = 1;
    habilidade[0][2] = habilidade[1][2] = habilidade[3][2] = habilidade[4][2] = 1;

    printf("\nHabilidade: Cruz\n");
    imprimirMatriz(habilidade);

    // Cone
    limparMatriz(habilidade);
    habilidade[0][2] = 1;
    habilidade[1][1] = habilidade[1][2] = habilidade[1][3] = 1;
    for (int i = 0; i < 5; i++) habilidade[2][i] = 1;

    printf("\nHabilidade: Cone\n");
    imprimirMatriz(habilidade);

    // Octaedro
    limparMatriz(habilidade);
    habilidade[0][2] = habilidade[2][0] = habilidade[2][4] = habilidade[4][2] = 0; // bordas = 0
    habilidade[1][2] = habilidade[2][1] = habilidade[2][2] = habilidade[2][3] = habilidade[3][2] = 1;

    printf("\nHabilidade: Octaedro\n");
    imprimirMatriz(habilidade);

    return 0;
}


