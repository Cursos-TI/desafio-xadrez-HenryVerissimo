#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimetaBispo(int numero) {
    if (numero > 0) {
        for (int movimento = 0; movimento < 2; movimento ++) {
            if(movimento == 1) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        }
        movimetaBispo(numero - 1);
    }
}

void movimentaTorre(int numero) {
    if (numero > 0) {
        printf("Direita\n");
        movimentaTorre(numero - 1);
    }
}

void movimentaRainha(int numero) {
    if (numero > 0) {
        printf("Esquerda\n");
        movimentaRainha(numero - 1);
    }
}

void movimentaCavalo() {
    for (int movimento1 = 0; movimento1 < 1; movimento1 ++) {
        for (int movimento2 = 0; movimento2 < 2; movimento2 ++) {
            printf("Cima\n");
            continue;
        }
        printf("Direita\n");
        break;
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5, torre = 5, rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentando o Bispo:\n");
    movimetaBispo(bispo);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentando Torre:\n");
    movimentaTorre(torre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentando Rainha:\n");
    movimentaRainha(rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimentando Cavalo:\n");
    movimentaCavalo();

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
