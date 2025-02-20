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
    int  populacao;
    float area;
    float pib;
    int pontos;

        //pontos = pontos turisticos

    printf("Desafio super Trunfo Paises\n");
    
    printf("Carta 1\n");

    printf("Estado: \n");
    scanf("%s", estado);

    printf("Codigo: \n");
    scanf("%s", codigo);

    printf("Cidade: \n");
    scanf("%s", cidade);

    printf("Populacao: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &pontos);

    //Impressao da Carta1

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2fkm2\n", area);
    printf("PIB: %2.f\n", pib);
    printf("Número de Pontos Turisticos: %d\n", pontos);

     

        //Carta 2
    char estado2 [8];
    char codigo2 [4];
    char cidade2 [20];
    int  populacao2;
    float area2;
    float pib2;
    int pontos2;

    //pontos2= numeros de pontos turisticos 

    printf("Carta 2\n");

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Codigo: \n");
    scanf("%s", codigo2);

    printf("Cidade: \n");
    scanf("%s", cidade2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &pontos2);

    //Impressao da Carta2

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2fkm2\n", area2);
    printf("PIB: %2.f\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontos2);

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
