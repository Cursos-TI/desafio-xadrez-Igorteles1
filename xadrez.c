#include <stdio.h>

// Função principal onde o programa começa a sua execução.
int main() {
    
    // =========================================================
    // SIMULAÇÃO 1: MOVIMENTO DA TORRE (Uso do FOR)
    // Movimento: 5 casas para a direita (Linha Reta Horizontal).
    // =========================================================
    
    // Constante que define a distância total do movimento.
    const int CASAS_TORRE = 5; 
    
    printf("=========================================\n");
    printf("MOVIMENTO DA TORRE (Usando FOR)\n");
    printf("Direcao: %d casas para a Direita\n", CASAS_TORRE);
    printf("=========================================\n");
    
    // O loop 'for' é ideal quando o número de repetições é conhecido antecipadamente.
    // i = 1: Começa na casa 1
    // i <= CASAS_TORRE: Continua até atingir 5 casas.
    // i++: Aumenta a contagem de casas a cada volta.
    for (int i = 1; i <= CASAS_TORRE; i++) {
        // A cada repetição, a Torre move-se uma casa para a direita.
        printf("Casa %d: Direita\n", i); 
    }
    
    printf("\n"); // Adiciona uma linha de separação
    
    
    // =========================================================
    // SIMULAÇÃO 2: MOVIMENTO DO BISPO (Uso do WHILE)
    // Movimento: 5 casas na Diagonal (Cima e Direita).
    // =========================================================
    
    // Variável que guarda o número de casas a mover.
    int casas_bispo = 5; 
    // Variável para contar quantas casas já movemos.
    int contador_bispo = 0; 
    
    printf("=========================================\n");
    printf("MOVIMENTO DO BISPO (Usando WHILE)\n");
    printf("Direcao: %d casas na Diagonal (Cima e Direita)\n", casas_bispo);
    printf("=========================================\n");
    
    // O loop 'while' continua a executar enquanto a condição for VERDADEIRA.
    // Aqui, ele continua enquanto o contador não atingir o limite de casas.
    while (contador_bispo < casas_bispo) {
        // Aumenta o contador (move o Bispo para a próxima casa).
        contador_bispo++; 
        
        // O Bispo move-se na diagonal, o que é a combinação de duas direções.
        printf("Casa %d: Cima, Direita\n", contador_bispo);
        
        // Nota: O WHILE é ideal quando a condição de paragem pode não ser baseada
        // num número fixo de iterações, mas sim num estado (embora aqui o usemos
        // para contagem, é bom para mostrar a sua flexibilidade).
    }
    
    printf("\n"); // Adiciona uma linha de separação
    
    
    // =========================================================
    // SIMULAÇÃO 3: MOVIMENTO DA RAINHA (Uso do DO-WHILE)
    // Movimento: 8 casas para a Esquerda (Linha Reta).
    // =========================================================
    
    // Variável que define o número total de movimentos.
    const int CASAS_RAINHA = 8; 
    // Variável que será decrementada em cada repetição (inicia em 8).
    int contador_rainha = CASAS_RAINHA; 
    
    printf("=========================================\n");
    printf("MOVIMENTO DA RAINHA (Usando DO-WHILE)\n");
    printf("Direcao: %d casas para a Esquerda\n", CASAS_RAINHA);
    printf("=========================================\n");
    
    // O loop 'do-while' garante que o código dentro do 'do' é executado
    // PELO MENOS UMA VEZ, antes da condição do 'while' ser testada.
    do {
        // 1. Imprime a direção e o número da casa (8, 7, 6...).
        printf("Casa %d: Esquerda\n", (CASAS_RAINHA - contador_rainha) + 1);
        
        // 2. Decrementa o contador, aproximando-o de 0.
        contador_rainha--;
        
    } while (contador_rainha > 0); // O loop continua enquanto ainda houver casas a percorrer.
    
    // Retorna 0 para indicar que o programa terminou com sucesso.
    return 0;
}
