#include <stdio.h>

#define TAMANHOTABULEIRO 10
#define HABILIDADE 5

int main() {
  
    // Criando tabuleiro
    char linha[10]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Cabeçalho
    int tabuleiro[TAMANHOTABULEIRO][TAMANHOTABULEIRO];
        for (int i = 0; i < TAMANHOTABULEIRO; i++){
        for (int j = 0; j < TAMANHOTABULEIRO; j++){
            tabuleiro [i][j] = 0;
        }
    }
    //Posicionando navio horizontal
    tabuleiro [2][2] = 3;
    tabuleiro [2][3] = 3;
    tabuleiro [2][4] = 3;

    //Posicionando navio vertical
    tabuleiro [4][7] = 3;
    tabuleiro [5][7] = 3;
    tabuleiro [6][7] = 3;  
    
    //Posicionando navios na diagonal
    //Navio 1
    tabuleiro [8][2] = 3;
    tabuleiro [7][3] = 3;
    tabuleiro [6][4] = 3;
    //Navio 2
    tabuleiro [3][0] = 3;
    tabuleiro [4][1] = 3;
    tabuleiro [5][2] = 3;      


    //Habilidades

    //Cone
    int cone[HABILIDADE][HABILIDADE]; 
    for (int i = 0; i < HABILIDADE; i++){
        for (int j = 0; j < HABILIDADE; j++){
            if (i == 0 && j == HABILIDADE/2) {
                cone[i][j] = 3; 
            } else if (i == 1 && j >= 1 && j <= HABILIDADE-2) {
                cone[i][j] = 3; 
            } else if (i == 2) {
                cone[i][j] = 3; 
            } else {
                cone[i][j] = 0;
            }
        }
    }
   
    //Cruz
    int cruz[HABILIDADE][HABILIDADE];
    int centro = HABILIDADE/2; 
    for (int i = 0; i < HABILIDADE; i++){
        for (int j = 0; j < HABILIDADE; j++){
            if (i == centro || j == centro) {
                cruz[i][j] = 3;
                } else {
                    cruz[i][j] = 0;   
                }
            } 
        }

    //Octadero
    int octaedro[HABILIDADE][HABILIDADE];
    for (int i = 0; i < HABILIDADE; i++){
        for (int j = 0; j < HABILIDADE; j++){
            octaedro[i][j] = 0;
            } 
        }
    for (int j = centro - 1; j <= centro +1; j++){
        octaedro[centro][j] = 3;
    } 
    octaedro[centro - 1][centro] = 3;
    octaedro[centro + 1][centro] = 3;

    //Exibição dos dados

    // CONE
    printf("\n**** Habilidade Cone ****\n");
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%2d  ", i);
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // Cruz
    printf("\n**** Habilidade Cruz ****\n");
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%2d  ", i);
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // Octaedro
    printf("\n**** Habilidade Octaedro ****\n");
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%2d  ", i);
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    printf("\n**** Tabuleiro de Batalha Naval ****\n");
    printf("\n");
    
    //Cabeçalho
    printf("    ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);
    }
    printf("\n");

    // tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
       printf("\n");
    }
    printf("\n");

   
    return 0;
}