#include <stdio.h>

// Função principal: o ponto de entrada da execução do programa.
int main() {
    
    // =========================================================
    // Requisito: Entrada de Dados (Uso de Constantes)
    // =========================================================
    // Define a distância do movimento para o Bispo e a Torre (5 casas).
    const int DISTANCIA_CURTA = 5; 
    // Define a distância do movimento para a Rainha (8 casas).
    const int DISTANCIA_LONGA = 8;
    // Define o número total de movimentos 'L' que o Cavalo fará.
    const int MOVIMENTOS_L_TOTAIS = 3; 
    
    
    // =========================================================
    // SIMULAÇÃO 1: MOVIMENTO DO BISPO (Usando FOR)
    // Requisito: 5 casas na diagonal superior direita (Cima + Direita).
    // =========================================================
    
    printf("==================================================\n");
    printf("SIMULACAO 1: MOVIMENTO DO BISPO (FOR)\n");
    printf("Distancia: %d casas na diagonal superior direita.\n", DISTANCIA_CURTA);
    printf("==================================================\n");
    
    // O loop 'for' é a escolha ideal quando o número de iterações é fixo (5).
    for (int casa_atual = 1; casa_atual <= DISTANCIA_CURTA; casa_atual++) {
        // Para simular a diagonal, combinamos as duas direções básicas.
        printf("Casa %d: Cima e Direita\n", casa_atual); 
    }
    
    printf("\n"); // Separador para clareza
    
    
    // =========================================================
    // SIMULAÇÃO 2: MOVIMENTO DA TORRE (Usando WHILE)
    // Requisito: 5 casas para a direita (Linha Reta Horizontal).
    // =========================================================
    
    // Variável de controle para o loop 'while'.
    int casas_restantes_torre = DISTANCIA_CURTA; 
    int casas_percorridas_torre = 0; // Conta as casas que já movemos.
    
    printf("==================================================\n");
    printf("SIMULACAO 2: MOVIMENTO DA TORRE (WHILE)\n");
    printf("Distancia: %d casas para a direita.\n", DISTANCIA_CURTA);
    printf("==================================================\n");
    
    // O loop 'while' executa enquanto a condição for verdadeira.
    while (casas_restantes_torre > 0) {
        // Incrementa o contador de casas percorridas.
        casas_percorridas_torre++; 
        
        printf("Casa %d: Direita\n", casas_percorridas_torre);
        
        // Atualiza a condição: decrementa as casas restantes para evitar um loop infinito.
        casas_restantes_torre--;
    }
    
    printf("\n"); // Separador para clareza
    
    
    // =========================================================
    // SIMULAÇÃO 3: MOVIMENTO DA RAINHA (Usando DO-WHILE)
    // Requisito: 8 casas para a esquerda (Linha Reta Horizontal).
    // =========================================================
    
    // Variável de controle que inicia com a distância total (8).
    int contador_rainha = DISTANCIA_LONGA; 
    // Variável para rastrear o número da casa atual (inicia em 0).
    int indice_movimento_rainha = 0; 
    
    printf("==================================================\n");
    printf("SIMULACAO 3: MOVIMENTO DA RAINHA (DO-WHILE)\n");
    printf("Distancia: %d casas para a esquerda.\n", DISTANCIA_LONGA);
    printf("==================================================\n");
    
    // O loop 'do-while' garante que o código no 'do' é executado pelo menos uma vez.
    do {
        // 1. Incrementa o índice para exibir a casa atual (1, 2, 3...).
        indice_movimento_rainha++;
        
        // 2. Imprime a direção do movimento.
        printf("Casa %d: Esquerda\n", indice_movimento_rainha);
        
        // 3. Decrementa o contador, aproximando-o de zero.
        contador_rainha--;
        
    } while (contador_rainha > 0); // Condição: repete enquanto o contador for positivo.
    
    
    // =========================================================
    // SIMULAÇÃO 4: MOVIMENTO DO CAVALO (Nível Aventureiro)
    // Requisito: Movimento em "L" (2 para baixo, 1 para a esquerda),
    // usando WHILE e FOR aninhados.
    // =========================================================
    
    int movimentos_l_feitos = 0; // Contador para o loop WHILE (movimentos totais).
    
    printf("\n"); // Separador para clareza
    printf("==================================================\n");
    printf("SIMULACAO 4: MOVIMENTO DO CAVALO (WHILE e FOR)\n");
    printf("Padrao: %d movimentos 'L' (2 p/ Baixo, 1 p/ Esquerda)\n", MOVIMENTOS_L_TOTAIS);
    printf("==================================================\n");
    
    // Loop WHILE (Estrutura Externa): Controla o número total de movimentos "L" (3 vezes).
    while (movimentos_l_feitos < MOVIMENTOS_L_TOTAIS) {
        
        // Bloco para iniciar a contagem do movimento 'L' atual.
        printf("-- INICIO do Movimento L #%d --\n", movimentos_l_feitos + 1);
        
        // Loop FOR (Estrutura Interna): Simula as 2 casas para baixo (contagem fixa).
        for (int passo = 1; passo <= 2; passo++) {
            printf("  Passo %d: Baixo\n", passo); // Movimento vertical (fixo: 2 passos)
        }
        
        // Imprime o movimento horizontal, completando o 'L'.
        printf("  Passo 3: Esquerda\n"); 
        
        // Atualiza a condição do loop WHILE: incrementa o número de movimentos 'L' feitos.
        movimentos_l_feitos++; 
        printf("-- FIM do Movimento L #%d --\n\n", movimentos_l_feitos);
    }
    
    return 0; // Indica que o programa terminou com sucesso.
}