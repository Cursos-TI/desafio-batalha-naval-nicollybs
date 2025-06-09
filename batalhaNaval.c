#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0};


    // Posição inicial dos navios
    int x_vert = 1, y_vert = 2; // navio vertical começa em (1,2)
    int x_horz = 3, y_horz = 0; // navio horizontal começa em (3,0)

    // Posicionando o navio vertical (3 células para baixo)
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_vert + i][y_vert] = 1;
        printf("Navio Vertical: (%d,%d)\n", x_vert + i, y_vert);
    }

    printf("\n");

    // Posicionando o navio horizontal (3 células para a direita)
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_horz][y_horz + i] = 1;
        printf("Navio Horizontal: (%d,%d)\n", x_horz, y_horz + i);
    }

    return 0;
}