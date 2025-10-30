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
    float densidadePopulacional1, pibPerCapita1, superPoder1;
    
  // Declaração das variáveis da Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    float densidadePopulacional2, pibPerCapita2, superPoder2; 
  
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
  
  //Calculos

    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

// Área para exibição dos dados da cidade

  // Exibir dos dados da Carta 1
    printf("\n-----------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadePopulacional1);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

  // Exibir dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadePopulacional2);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("-----------------------------\n");

  // Comparações das Cartas
  // Menu interativo para escolher o atributo de comparação
  
  int opcao;

    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    
switch (opcao) {
    case 1: // População
      printf("Atributo: População\n");
      printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
      printf("%s: %lu habitantes\n", nomeCidade2, populacao2);

      if (populacao1 > populacao2)
        printf("Vencedor: %s!\n", nomeCidade1);
      else if (populacao2 > populacao1)
        printf("Vencedor: %s!\n", nomeCidade2);
      else
        printf("Empate!\n");
      break;

    case 2: // Área
      printf("Atributo: Área\n");
      printf("%s: %.2f km²\n", nomeCidade1, area1);
      printf("%s: %.2f km²\n", nomeCidade2, area2);

      if (area1 > area2)
        printf("Vencedor: %s!\n", nomeCidade1);
      else if (area2 > area1)
        printf("Vencedor: %s!\n", nomeCidade2);
      else
        printf("Empate!\n");
      break;

    case 3: // PIB
      printf("Atributo: PIB\n");
      printf("%s: %.2f bilhões de reais\n", nomeCidade1, pib1);
      printf("%s: %.2f bilhões de reais\n", nomeCidade2, pib2);

      if (pib1 > pib2)
        printf("Vencedor: %s!\n", nomeCidade1);
      else if (pib2 > pib1)
        printf("Vencedor: %s!\n", nomeCidade2);
      else
        printf("Empate!\n");
      break;

    case 4: // Pontos Turísticos
      printf("Atributo: Número de Pontos Turísticos\n");
      printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
      printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);

      if (pontosTuristicos1 > pontosTuristicos2)
        printf("Vencedor: %s!\n", nomeCidade1);
      else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Vencedor: %s!\n", nomeCidade2);
      else
        printf("Empate!\n");
      break;

    case 5: // Densidade demográfica (invertido)
      printf("Atributo: Densidade Demográfica\n");
      printf("%s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
      printf("%s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);

      if (densidadePopulacional1 < densidadePopulacional2)
        printf("Vencedor: %s! (menor densidade vence)\n", nomeCidade1);
      else if (densidadePopulacional2 < densidadePopulacional1)
        printf("Vencedor: %s! (menor densidade vence)\n", nomeCidade2);
      else
        printf("Empate!\n");
      break;

    case 6: // PIB per Capita
      printf("Atributo: PIB per Capita\n");
      printf("%s: %.2f reais\n", nomeCidade1, pibPerCapita1);
      printf("%s: %.2f reais\n", nomeCidade2, pibPerCapita2);

      if (pibPerCapita1 > pibPerCapita2)
        printf("Vencedor: %s!\n", nomeCidade1);
      else if (pibPerCapita2 > pibPerCapita1)
        printf("Vencedor: %s!\n", nomeCidade2);
      else
        printf("Empate!\n");
      break;

    default:
        printf("Opção inválida! Por favor, escolha um número de 1 a 6.\n");
      break;
    }

    printf("\n=== Fim da comparação ===\n");     



return 0;
} 
