#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Declaração das variáveis da Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1; 
    int pontosTuristicos1;
    float area1, pib1;
    float densidadePopulacional1, pibPerCapita1;
    
  // Declaração das variáveis da Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    float densidadePopulacional2, pibPerCapita2; 
  
// Área para entrada de dados

  // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    
    printf("Digite o Estado (A-H): ");
        scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (ex: A01): ");
        scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
        scanf(" %[^\n]", nomeCidade1);
    printf("Digite a Populacao: ");
        scanf("%lu", &populacao1);
    printf("Digite a Area (em km²): ");
        scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
        scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
        scanf("%d", &pontosTuristicos1);

  // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    
    printf("Digite o Estado (A-H): ");
        scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (ex: B01): ");
        scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
        scanf(" %[^\n]", nomeCidade2);
    printf("Digite a Populacao: ");
        scanf("%lu", &populacao2);
    printf("Digite a Area (em km²): ");
        scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
        scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
        scanf("%d", &pontosTuristicos2);  
  
  // Cálculos
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

  // Escolha de atributos
    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;

    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("\nPrimeiro Atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

  // Segundo menu (sem repetir a primeira escolha)
    printf("\nSegundo Atributo:\n");

    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Número de Pontos Turísticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demográfica\n");
    if (opcao1 != 6) printf("6 - PIB per Capita\n");

    printf("Escolha o segundo atributo: ");
    scanf("%d", &opcao2);

  // Impedir que o jogador escolha o mesmo atributo duas vezes
    if (opcao1 == opcao2) {
        printf("\nErro: os dois atributos não podem ser iguais!\n");
        return 0;
    }

    printf("\n=== RESULTADO DAS COMPARAÇÕES ===\n");

  // Determinar os valores do primeiro atributo escolhido
    switch (opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidadePopulacional1; valor1_carta2 = densidadePopulacional2; break;
        case 6: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; break;
        default: printf("Opção inválida!\n"); return 0;
    }
  
    // Determinar os valores do segundo atributo escolhido
    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidadePopulacional1; valor2_carta2 = densidadePopulacional2; break;
        case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // --- COMPARAÇÃO ---
// A densidade demográfica onde menor valor vence.

    float total1 = valor1_carta1 + valor2_carta1;
    float total2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos escolhidos:\n");
    printf("%s: %.2f\n", nomeCidade1, total1);
    printf("%s: %.2f\n", nomeCidade2, total2);

    // Operador ternário usado para decidir o vencedor
    printf("\n=== RESULTADO FINAL ===\n");
    (total1 > total2) ? printf("Vencedor: %s!\n", nomeCidade1) :
    (total2 > total1) ? printf("Vencedor: %s!\n", nomeCidade2) :
    printf("Empate!\n");


    return 0;
}

