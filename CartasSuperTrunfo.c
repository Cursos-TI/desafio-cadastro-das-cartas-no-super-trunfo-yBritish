#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    //Variaveis
    char carta1[50] = "MG";
    char carta2[50] = "SP";
    char estado = 'A';
    char estado2 = 'B';
    char codigo1[50] = "A01";
    char codigo2[50] = "B02";
    char cidade[50] = "BeloHorizonte";
    char cidade2[50] = "SaoPaulo";
    int populacao1, populacao2;
    float area1, area2;
    int pontos1, pontos2;
    float pibmenor1 = 350.50;
    float pibmenor2 = 699.28;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float pib1, pib2;

    //Atribuição de valores para as variaveis
    //Atribuicao de valores
    populacao1 = 6748000;
    populacao2 = 12325000;
    area1 = 330.0;
    area2 = 1521.11;
    pontos1 = 100;
    pontos2 = 200;
    pib1 = 350500000000;
    pib2 = 699280000000;

    //Calculo da Densidade e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    //Calculo do Superpoder
    float superpoder1 = populacao1 + pibmenor1 + pontos1 + pibPerCapita1 -densidade1 + area1;
    float superpoder2 = populacao2 + pibmenor2 + pontos2 + pibPerCapita2 -densidade2 + area2;


    // Exibição dos Dados das Cartas:
    // Carta 1
    printf("Carta 1: %s\n", carta1);
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2lf\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pibmenor1); 
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade: %.2lf\n", densidade1);
    printf("PIB per capita: %.2lf reais\n", pibPerCapita1);
    printf("\n");
    //Carta 2
    printf("Carta 2: %s\n", carta2);
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2lf\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pibmenor2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade: %.2lf\n", densidade2);
    printf("PIB per capita: %.2lf reais\n", pibPerCapita2);

    //Comparando os atributos
    printf("Comparando os atributos\n");
    
    printf("Populacao: Carta 2 Vence (%d)\n", populacao2 > populacao1);
    
    printf("Area: Carta 2 Vence (%d)\n", area2 > area1);

    printf("PIB:  Carta 2 Vence (%d)\n", pibmenor2 > pibmenor1);

    printf("Pontos: Carta 2 Vence (%d)\n", pontos2 > pontos1);

    printf("Densidade Populacional: Carta 2 Vence (%d)\n", densidade2 < densidade1);

    printf("PIB per capita: Carta 2 Vence (%d)\n", pibPerCapita2 > pibPerCapita1);

    printf("Superpoder: Carta 2 Vence (%d)\n", superpoder2 > superpoder1);

    return 0;
}
