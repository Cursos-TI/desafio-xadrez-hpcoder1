#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void movTorre (int casas){
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {
        printf("Direita\n");
    }
    movTorre (casas - 1);
    }
}

void movBispo (int casas){
    if (casas > 0) {
        int x = 0;
        while (x < 1){
            printf("Cima, ");
            for (int i = 0; i < 1; i++) {
                printf("Direita\n");
            }
            x = 1;
        }
        movBispo (casas - 1);
    }
}

void movRainha (int casas){
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {
        printf("Esquerda\n");
    }
    movRainha (casas - 1);
    }
}

void movCavalo () {
    for (int i = 1, j = 1; i > 0 && j > 0; i--, j--) {
        for (int k = 2; k > 0; k--){
            printf("Cima\n");
            if (k > 0) {
                continue;
            }
        }
        printf("Direita\n");
        if (i = 0) {
            break;
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");
    movBispo(casasBispo);
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da Torre:\n");
    movTorre(casasTorre);
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    printf("Movimentação da Rainha:\n");
    movRainha(casasRainha);
    printf("\n");


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentação do Cavalo:\n");
    movCavalo();
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
