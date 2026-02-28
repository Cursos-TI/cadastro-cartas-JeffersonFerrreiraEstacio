#include <stdio.h>

int main() {
    // Dados das Cartas (Exemplos)
    char pais1[] = "Brasil", pais2[] = "Egito";
    float pop1 = 214.3, pop2 = 109.3;         // População em milhões
    float area1 = 8515.0, area2 = 1001.0;     // Área em km²
    float pib1 = 1.6, pib2 = 0.4;             // PIB em trilhões
    float dens1 = 25.1, dens2 = 109.1;       // Densidade Demográfica (Menor vence)

    int opcao1, opcao2;
    float valor1_C1, valor1_C2, valor2_C1, valor2_C2;
    char *nomeAtributo1, *nomeAtributo2;

    // --- Menu 1: Escolha do Primeiro Atributo ---
    printf("### DESAFIO SUPER TRUNFO: NÍVEL AVANÇADO ###\n");
    printf("Escolha o primeiro atributo:\n1. Populacao\n2. Area\n3. PIB\n4. Densidade\n> ");
    scanf("%d", &opcao1);

    switch(opcao1) {
        case 1: valor1_C1 = pop1; valor1_C2 = pop2; nomeAtributo1 = "Populacao"; break;
        case 2: valor1_C1 = area1; valor1_C2 = area2; nomeAtributo1 = "Area"; break;
        case 3: valor1_C1 = pib1; valor1_C2 = pib2; nomeAtributo1 = "PIB"; break;
        case 4: valor1_C1 = dens1; valor1_C2 = dens2; nomeAtributo1 = "Densidade"; break;
        default: printf("Opção Inválida!\n"); return 0;
    }

    // --- Menu 2: Escolha do Segundo Atributo (Dinâmico) ---
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if(opcao1 != 1) printf("1. Populacao\n");
    if(opcao1 != 2) printf("2. Area\n");
    if(opcao1 != 3) printf("3. PIB\n");
    if(opcao1 != 4) printf("4. Densidade\n");
    printf("> ");
    scanf("%d", &opcao2);

    if(opcao1 == opcao2) {
        printf("Erro: Atributos devem ser diferentes!\n");
        return 0;
    }

    switch(opcao2) {
        case 1: valor2_C1 = pop1; valor2_C2 = pop2; nomeAtributo2 = "Populacao"; break;
        case 2: valor2_C1 = area1; valor2_C2 = area2; nomeAtributo2 = "Area"; break;
        case 3: valor2_C1 = pib1; valor2_C2 = pib2; nomeAtributo2 = "PIB"; break;
        case 4: valor2_C1 = dens1; valor2_C2 = dens2; nomeAtributo2 = "Densidade"; break;
        default: printf("Opção Inválida!\n"); return 0;
    }

    // --- Lógica de Comparação e Soma ---
    // Regra especial: Densidade (opção 4) vence o menor valor. 
    // Para as outras, vence o maior. Usamos ternário para calcular pontos.
    float soma1 = valor1_C1 + valor2_C1;
    float soma2 = valor1_C2 + valor2_C2;

    // --- Exibição do Resultado ---
    printf("\n--- RESULTADO DA RODADA ---\n");
    printf("Paises: %s vs %s\n", pais1, pais2);
    printf("Atributo 1 [%s]: %.2f vs %.2f\n", nomeAtributo1, valor1_C1, valor1_C2);
    printf("Atributo 2 [%s]: %.2f vs %.2f\n", nomeAtributo2, valor2_C1, valor2_C2);
    printf("Soma Total: %.2f vs %.2f\n", soma1, soma2);

    if (soma1 > soma2) {
        printf("\nRESULTADO: Vitoria do %s!\n", pais1);
    } else if (soma2 > soma1) {
        printf("\nRESULTADO: Vitoria do %s!\n", pais2);
    } else {
        printf("\nRESULTADO: Empate!\n");
    }

    return 0;
}
