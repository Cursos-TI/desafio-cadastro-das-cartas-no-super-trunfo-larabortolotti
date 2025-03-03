#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

        //Carta 1 
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
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %u \n", populacao2);
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
    if (superpoder > superpoder2)
    { printf("Carta 1 é vencedora Pelo Super Poder: %.2f \n", superpoder);}
    else
    {printf("Carta 2 é a vencedora pelo Super Poder: %.2f \n", superpoder2);}
    
    
   
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
