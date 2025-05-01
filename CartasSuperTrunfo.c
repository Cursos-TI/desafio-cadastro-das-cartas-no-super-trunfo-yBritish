#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
int main(){
    //Cadastro
    int soma, soma2, valor1, valor2, resultado, resultado2, carta1, carta2, opcao, opcao2,atributo, atributo2;
    char pais1[20]= "Brasil";
    char pais2[20]= "Argentina";
    int p1 = 200000000;
    int p2 = 45000000;
    int pt1 = 300;
    int pt2 = 300;
    float area1 = 8000;
    float  area2 = 8000;
    float pib1 = 3.000000000;
    float pib2 = 1.500000000;
    float d1, d2;
    

    //Cálculo da densidade demográfica
    d1 = p1 / area1;
    d2 = p2 / area2;

    //Menu
    printf("##Super Trunfo##\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Densidade Demografica\n");
    printf("2 - PIB\n");
    printf("3 - Populacao\n");
    printf("4 - Area\n");
    printf("5 - Pontos Turisticos\n");
    scanf("%d", &opcao);

    
    switch (opcao)
    { case 1:
        resultado = d1 > d2 ? (d2) : (d1);
        carta1 = d1;
        carta2 = d2;
        atributo = "Densidade Demografica";
        
        break;
        case 2:
        resultado = pib1 > pib2 ? (pib1) : (pib2);
        carta1 = pib1;
        carta2 = pib2;
        atributo = "PIB";
        break;
        case 3:
        resultado = p1 > p2 ? (p1) : (p2);
        carta1 = p1;
        carta2 = p2;
        atributo = "Populacao";
        break;
        case 4:
        resultado = area1 > area2 ? (area1) : (area2);
        carta1 = area1;
        carta2 = area2;
        atributo = "Area";
        break;
        case 5:
        resultado = pt1 > pt2 ? (pt1) : (pt2);
        carta1 = pt1;
        carta2 = pt2;
        atributo = "Pontos Turisticos";
        break;
    }
    soma = carta1;
    soma2 = carta2;

    printf("Escolha mais um atributo:\n");
    scanf("%d", &opcao2);
    if(opcao == opcao2){
        printf("Escolha um atributo diferente!\n");
    } else{
        switch(opcao2){
            case 1:

                resultado2 = d1 > d2 ? (d1) : (d2);
                atributo2 = "Densidade Demografica";
                carta1 = d1;
                carta2 = d2;
                break;
            case 2:
                resultado2 = pib1 > pib2 ? (pib1) : (pib2);
                atributo2 = "PIB";
                carta1 = pib1;
                carta2 = pib2;
                break;
            case 3:
                resultado2 = p1 > p2 ? (p1) : (p2);
                atributo2 = "Populacao";
                carta1 = p1;
                carta2 = p2;
                break;
            case 4:
                resultado2 = area1 > area2 ? (area1) : (area2);
                atributo2 = "Area";
                carta1 = area1;
                carta2 = area2;
                break;
            case 5:
                resultado2 = pt1 > pt2 ? (pt1) : (pt2);
                atributo2 = "Pontos Turisticos";
                carta1 = pt1;
                carta2 = pt2;
                break;

    }
    }
    valor1 = soma + carta1;
    valor2 = soma2 + carta2;
    printf("Paises: %s e %s\n", pais1, pais2);
    printf("Atributos: %s e %s\n", atributo, atributo2);
    printf("Valores da Carta 1: %d e %d\n", carta1,soma);
    printf("Valores da Carta 2: %d e %d\n", carta2,soma2);
    printf("A soma dos atributos da carta 1(%s) é: %d, e da carta 2(%s) :%d\n",pais1, valor1, pais2 ,valor2);
    if(valor1 > valor2){
        printf("Vencedor: %s\n", pais1);
    }else if(valor1 < valor2){
        printf("Vencedor: %s\n", pais2);
    }else{
        printf("Empate!\n");
    }


}
   