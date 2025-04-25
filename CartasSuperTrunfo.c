#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    //Variaveis
    int opcao,p1 ,p2, pt1, pt2; 
    float area1, area2,pib1, pib2, d1, d2; 
    char pais1[20]= "Brasil";
    char pais2[20]= "Argentina";

    //Atribuição de valores para as variaveis
    //Atribuicao de valores
    //Numeros ficticios
    p1 = 200000000;
    p2 = 47000000;
    area1 = 8000000;
    area2 = 9000000;
    pt1 = 300;
    pt2 = 300;
    pib1 = 3.000000000;
    pib2 = 1.500000000;

    //Cálculo da densidade demográfica
    d1 = p1 / area1;
    d2 = p2 / area2;

     //Menu Interativo
    printf("### Super Trunfo ###\n");
    printf("Qual atributo deseja comparar?\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. Pontos Turisticos\n");
    printf("4. Densidade Demográfica\n");
    printf("5. PIB\n");
    scanf("%d", &opcao);
    
    
    
    switch (opcao)
    {
    case 1:
    printf("### Comparando... ###");
    printf("%s / %s\n", pais1, pais2);
    printf("Atributo: População\n");
    printf("Brasil: %d \n", p1);
    printf("Argentina: %d\n", p2);
    if(p1 == p2){
        printf("Empate!\n");
     } else if(p1 > p2){
        printf("Carta 1: Venceu!\n");
     } else{
        printf("Carta 2: Venceu!\n");
     }
    break;

    case 2:
    printf("%s / %s\n", pais1, pais2);
    printf("Atributo: Area\n");
    printf("Brasil: %.2f \n", area1);
    printf("Argentina: %.2f\n", area2);
     if(area1 == area2){
        printf("Empate!\n");
     } else if(area1 > area2){
        printf("Carta 1: Venceu!\n");
     } else{
        printf("Carta 2: Venceu!\n");
     }
    break;

    case 3:
    printf("%s / %s\n", pais1, pais2);
    printf("Atributo: Pontos Turisticos\n");
    printf("Brasil: %d Trilhões de Dolares \n", pt1);
    printf("Argentina: %d Trilhões de Dolares \n", pt2);
     if(pt1 == pt2){
        printf("Empate!\n");
     } else if(pt1 > pt2){
        printf("Carta 1: Venceu!\n");
     } else{
        printf("Carta 2: Venceu!\n");
     }
    break;

    case 4:
    printf("%s / %s\n", pais1, pais2);
    printf("Atributo: Densidade Demografica\n");
    printf("Brasil: %.2f \n", d1);
    printf("Argentina: %.2f\n", d2);
     if(d1 == d2){
        printf("Empate!\n");
     } else if(d1 > d2){
        printf("Carta 1: Venceu!\n");
     } else{
        printf("Carta 2: Venceu!\n");
     }
    break;

    case 5:
    printf("%s / %s\n", pais1, pais2);
    printf("Atributo: PIB\n");
    printf("Brasil: %.2f \n", pib1);
    printf("Argentina: %.2f\n", pib2);
     if(pib1 == pib2){
        printf("Empate!\n");
     } else if(pib1 > pib2){
        printf("Carta 1: Venceu!\n");
     } else{
        printf("Carta 2: Venceu!\n");
     }
    break;

    default:
    printf("Opcao Invalida");
    break;
    }

    return 0;
}
