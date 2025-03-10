#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

        //Carta 1 
    char pais [10];
    char estado [8];
    char codigo [4];
    char cidade [20];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadepop;
    float pibpercapita;
    float superpoder;


    printf("Desafio super Trunfo Paises\n");

    printf("Carta 1\n");

    printf("Digite o pais: \n");
    scanf("%s", pais);

    printf("Estado: \n");
    scanf("%s", estado);

    printf("Codigo: \n");
    scanf("%s", codigo);

    printf("Cidade: \n");
    scanf("%s", cidade);

    printf("Populacao: \n");
    scanf("%lu", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos);

    //Impressao da Carta1

    printf("Carta1 \n");
    printf("Pais: %s \n", pais);
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %lu \n", populacao);
    printf("Area: %.2f km2 \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Numero de Pontos Turisticos: %d \n ", pontosturisticos);
    densidadepop = (float) populacao / area;
    printf("Densidade populacional: %.1f \n", densidadepop); 
    pibpercapita = (float) pib / populacao; 
    printf("O PIB per Capito: %.1f \n", pibpercapita);
    superpoder = (float)populacao + pib + pontosturisticos + pibpercapita + ( 1/densidadepop);
    printf("Super Poder: %.2f\n", superpoder);

        //Carta 2 
    char pais2 [10];
    char estado2 [8];
    char codigo2 [4];
    char cidade2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepop2;
    float pibpercapita2;
    float superpoder2;


    printf("Carta 2\n");

    printf("Pais: \n");
    scanf("%s", pais2);

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Codigo: \n");
    scanf("%s", codigo2);

    printf("Cidade: \n");
    scanf("%s", cidade2);

    printf("Populacao: \n");
    scanf("%lu", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos2);

    //Impressao da Carta2

    printf("Carta2 \n");
    printf("Pais: %s \n", pais2);
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %lu \n", populacao2);
    printf("Area: %.2f km2 \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de Pontos Turisticos: %d \n ", pontosturisticos2);
    densidadepop2 = (float) populacao2 / area2;
    printf("Densidade populacional: %.1f \n", densidadepop2); 
    pibpercapita2 = (float) pib2 / populacao2; 
    printf("O PIB per Capito: %.1f \n", pibpercapita2);
    superpoder2 = (float)populacao2 + pib2 + pontosturisticos2 + pibpercapita2 + ( 1/densidadepop2);
    printf("Super Poder: %.2f\n", superpoder2);

    
        printf("Comparação de Cartas: \n");

    printf("Populacao: Carta 1 venceu (%u) \n", populacao > populacao2);
    printf("Area: Carta 1 venceu (%d) \n", area > area2);
    printf("PIB: Carta 1 venceu (%d) \n", pib > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d) \n", pontosturisticos > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d) \n", densidadepop < densidadepop2);
    printf("PIB Percapita: Carta 1 venceu (%d) \n", pibpercapita > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d) \n", superpoder > superpoder2);

        //Comparativo das cartas
    int opcao;
    int resultadoPop, resultadoPop2;
    int resultadoArea, resultadoArea2;
    int resultadoPIB, resultadoPIB2;
    int resultadoPontosTuristicos, resultadoPontosTuristicos2;
    int resultadoDensidadeDemografica, resultadoDensidadeDemogratica2;


    printf("Escolha um atributo comparativo \n");
    printf("1.Populacao \n");
    printf("2.Area \n");
    printf("3.PIB \n");
    printf("4.Pontos Turisticos \n");
    printf("5.Densidade Demografica \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

        resultadoPop = populacao > populacao2 ? 1 : 0;
        resultadoPop2 = populacao < populacao2? 1 : 0; 
        
        if (resultadoPop)
        {printf("O pais %s venceu no quesito populacao com o valor de %lu \n", pais, populacao);
        } else if (resultadoPop2)       
        {printf("O pais %s venceu no quesito populacao com o valor de %lu \n", pais2, populacao2);}
        else
        {printf("Empate no atributo Populacao\n");}
        break;

    case 2:
        
        resultadoArea = area > area2 ? 1 : 0;
        resultadoArea2 = area < area2? 1 : 0;

        if (resultadoArea)
        {printf("O pais %s ganhou no atributo Area com o valor de %.2f km2\n", pais, area);
        } else if (resultadoArea2)
        {printf("O pais %s ganhou no atributo Area com o valor de %.2f km2\n", pais2, area2);            
        } else
        {printf("Empate no Atributo Area \n");
        }
        break;

    case 3:
        
        resultadoPIB = pib > pib2 ? 1 : 0;
        resultadoPIB2 = pib < pib2 ? 1 : 0;

        if (resultadoPIB)
        {printf("O pais %s ganhou no atributo PIB com o valor de %.2f \n", pais, pib);
        } else if (resultadoPIB2)
        {printf("O pais %s ganhou no atributo PIB com o valor de %.2f \n", pais2, pib2);
        } else
        {printf("Empate no atributo area \n");
        }
        break;

    case 4: 
        resultadoPontosTuristicos = pontosturisticos > pontosturisticos2 ? 1 : 0;
        resultadoPontosTuristicos2 = pontosturisticos < pontosturisticos2 ? 1 : 0;

        if (resultadoPontosTuristicos)
        {printf("O pais %s ganhou no atributo Pontos Turisticos com o valor de %d \n", pais, pontosturisticos);
        } else if (resultadoPontosTuristicos2)
        {printf("O pais %s ganhou no atributo Pontos Turisticos com o valor de %d", pais2, pontosturisticos2);
        } else
        {printf("Empate no atributo Pontos Turisticos \n");
        }
        break;

    case 5:

        resultadoDensidadeDemografica = densidadepop < densidadepop2 ? 1 : 0;
        resultadoDensidadeDemogratica2 = densidadepop > densidadepop2? 1 : 0;

        if (resultadoDensidadeDemografica)
        {printf("O pais %s ganhou no atributo Densidade demografica com o valor de %.2f \n", pais, densidadepop);
        } else if (resultadoDensidadeDemogratica2)
        {printf("O pais %s ganhou no atributo Densidade Demografica com o valor de %2.f \n", pais2, densidadepop2);
        } else
        {printf("Empate no atributo Densidade Demobrafica \n");
        }
        break;
        
    default: printf("Opcao invalida \n");
    break;

    }

    return 0;
} 
