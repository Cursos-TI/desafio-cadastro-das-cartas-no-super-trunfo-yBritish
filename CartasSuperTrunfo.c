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

    // Exibição dos Dados das Cartas:
    // Carta 1
    printf("Carta 1:%s/n", carta1);
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2lf\n", area1);
    printf("PIB: %.2lf\n", pibmenor1); 
    printf("Pontos: %d\n", pontos1);
    //Carta 2
    printf("%s\n", carta2);
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2lf\n", area2);
    printf("PIB: %.2lf\n", pibmenor2);
    printf("Pontos: %d\n", pontos2);


    return 0;
}
