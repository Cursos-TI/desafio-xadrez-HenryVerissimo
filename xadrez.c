#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimetaBispo(int numero) {
    printf("Movimentando o Bispo:\n");
    if (numero > 0) {
        for (int movimento = 0; movimento <= 2; movimento ++) {
            if(movimento == 1) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        }
        movimetaBispo(numero - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5, torre = 5, rainha = 8, cavalo = 2;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do bispo:\n");
    while (bispo != 0) {
        printf("Cima Direita\n");
        bispo --;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da torre:\n");
    do {
        printf("Direita\n");
        torre --;
    } while (torre > 0);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimetnação da rainha:\n");
    for (rainha; rainha != 0; rainha --) {
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimentação do cavalo:\n");
    do {
        for (cavalo; cavalo != 0; cavalo --) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    } while(0);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
