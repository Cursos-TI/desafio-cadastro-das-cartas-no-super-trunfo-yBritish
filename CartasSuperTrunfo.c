#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Desafio Super Trunfo
// Tema 2
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
int main(){
    //Cadastro
    int soma, soma2, valor1, valor2, carta1, carta2, opcao, opcao2,resultado, resultado2;
    char pais1[20]= "Brasil";
    char pais2[20]= "Argentina";
    char atributo[50], atributo2[50];
    int p1 = 80000000;
    int p2 = 45000000;
    int pt1 = 300;
    int pt2 = 300;
    float area1 = 8000.0;
    float  area2 = 8000.0;
     //Simplificando os valores para facilitar a leitura
    float pib1 = 300;
    float pib2 = 350;
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
        resultado = d1 < d2 ? (d1) : (d2);
        strcpy(atributo, "Densidade Demografica");
        printf("%s\n", atributo);
        printf("O vencedor é: %d\n", resultado);
        carta1 = d1;
        carta2 = d2;
        
        
        break;
        case 2:
        resultado = pib1 > pib2 ? (pib1) : (pib2);
        strcpy(atributo, "PIB");
        printf("%s\n", atributo);
        printf("O vencedor é: %f \n", (double)resultado);
        carta1 = pib1;
        carta2 = pib2;

        break;
        case 3:
        resultado = p1 > p2 ? (p1) : (p2);
        strcpy(atributo, "Populacao");
        printf("%s\n", atributo);
        printf("O vencedor é: %d \n", resultado);
        carta1 = p1;
        carta2 = p2;
        
        break;
        case 4:
        resultado = area1 > area2 ? (area1) : (area2);
        strcpy(atributo, "Area");
        printf("%s\n", atributo);
        printf("O vencedor é: %d\n", resultado);
        carta1 = area1;
        carta2 = area2;
        
        
        case 5:
        resultado = pt1 > pt2 ? (pt1) : (pt2);
        strcpy(atributo, "Pontos Turisticos");
        printf("%s\n", atributo);
        printf("O vencedor é: %d\n", resultado);
        carta1 = pt1;
        carta2 = pt2;
        
        break;
    }
    // Armazenando o valor na variável soma para o cálculo do vencedor
    // e evitando que o valor da carta seja alterado na segunda escolha
    soma = carta1;
    soma2 = carta2;

    printf("Escolha mais um atributo:\n");
    scanf("%d", &opcao2);
    if(opcao == opcao2){
        printf("Escolha um atributo diferente!\n");
    } else{
        switch(opcao2){
            case 1:

                resultado2 = d1 < d2 ? (d1) : (d2);
                strcpy(atributo2, "Densidade Demografica");
                printf("%s\n", atributo2);
                printf("O vencedor é: %d\n", resultado2);
                carta1 = d1;
                carta2 = d2;
                break;
            case 2:
                resultado2 = pib1 > pib2 ? (pib1) : (pib2);
                strcpy(atributo2, "PIB");
                printf("%s\n", atributo2);
                printf("O vencedor é: %f \n", (double)resultado2);
                carta1 = pib1;
                carta2 = pib2;
                break;
            case 3:
                resultado2 = p1 > p2 ? (p1) : (p2);
                strcpy(atributo2, "Populacao");
                printf("%s\n", atributo2);
                printf("O vencedor é: %d\n", resultado2);
                carta1 = p1;
                carta2 = p2;
                break;
                
            case 4:
                resultado2 = area1 > area2 ? (area1) : (area2);
                strcpy(atributo2, "Area");
                printf("%s\n", atributo2);
                printf("O vencedor é: %d\n", resultado2);
                carta1 = area1;
                carta2 = area2;
                break;
            case 5:
                resultado2 = pt1 > pt2 ? (pt1) : (pt2);
                strcpy(atributo2, "Pontos Turisticos");
                printf("%s\n", atributo2);
                printf("O vencedor é: %d\n", resultado2);
                carta1 = pt1;
                carta2 = pt2;
                break;

    }
    }
    // Exibir os resultados
    valor1 = soma + carta1;
    valor2 = soma2 + carta2;
    printf("Paises: %s e %s\n", pais1, pais2);
    printf("Atributos: %s e %s\n", atributo, atributo2);
    printf("Valores da Carta 1(%s): %d e %d\n",pais1 ,soma,carta1);
    printf("Valores da Carta 2(%s): %d e %d\n",pais2 ,soma2,carta2);
    printf("A soma dos atributos da carta 1(%s) é: %d, e da carta 2(%s) :%d\n",pais1, valor1, pais2 ,valor2);
    
    // Verifica o vencedor
    if(valor1 > valor2){
        printf("Vencedor: %s\n", pais1);
    }else if(valor1 < valor2){
        printf("Vencedor: %s\n", pais2);
    }else{
        printf("Empate!\n");
    }


}
   