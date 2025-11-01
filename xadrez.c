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
    
    
    // =========================================================
    // SIMULAÇÃO 1: MOVIMENTO DO BISPO (Usando FOR)
    // Requisito: 5 casas na diagonal superior direita (Cima + Direita).
    // =========================================================
    
    printf("==================================================\n");
    printf("SIMULACAO 1: MOVIMENTO DO BISPO (FOR)\n");
    printf("Distancia: %d casas na diagonal superior direita.\n", DISTANCIA_CURTA);
    printf("==================================================\n");
    
    // O loop 'for' é a escolha ideal quando o número de iterações é fixo (5).
    // 1. Inicializa o contador de casas (i = 1).
    // 2. Condição de paragem (continua até i ser <= 5).
    // 3. Incremento (move uma casa a cada repetição).
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
    
    // O loop 'while' executa enquanto a condição for verdadeira.
    // Continua enquanto houver casas para percorrer (casas_restantes > 0).
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
    
    // O loop 'do-while' garante que o código no 'do' é executado pelo menos uma vez.
    do {
        // 1. Incrementa o índice para exibir a casa atual (1, 2, 3...).
        indice_movimento_rainha++;
        
        // 2. Imprime a direção do movimento.
        printf("Casa %d: Esquerda\n", indice_movimento_rainha);
        
        // 3. Decrementa o contador, aproximando-o de zero.
        contador_rainha--;
        
    } while (contador_rainha > 0); // Condição: repete enquanto o contador for positivo.
    
    return 0; // Indica que o programa terminou com sucesso.
}