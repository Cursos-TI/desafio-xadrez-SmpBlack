#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    // Constantes para movimentação
    
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;

    // Movimento da TORRE: 5 casas à direita

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= CASAS_TORRE; i++) {
        printf("Direita\n");  // Imprime a direção do movimento
    }

    // Movimento do BISPO: 5 casas na diagonal superior direita
   
    printf("\nMovimento do Bispo:\n");
    int j = 1; // contador
    while (j <= CASAS_BISPO) {
        printf("Cima Direita\n");  // Combinação das direções básicas
        j++;
    }

    // Movimento da RAINHA: 8 casas para a esquerda
   
    printf("\nMovimento da Rainha:\n");
    int k = 1; // contador
    do {
        printf("Esquerda\n");  // Imprime a direção do movimento
        k++;
    } while (k <= CASAS_RAINHA);

    return 0; 
}

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
