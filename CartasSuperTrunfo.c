#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome_cidade[30],estado[30],codigo_carta[4];
    int populacao, pontos_turisticos;
    float pib, area;


    // Cadastro das Cartas:    
    printf("Insira o nome da cidade.\n");
    scanf("%s", &nome_cidade);
    
    printf("Insira o código da carta.\n");
    scanf("%s", &codigo_carta);
    
    printf("Insira o nome do estado. \n");
    scanf("%s", &estado);

    printf("Insira a população da cidade.\n");
    scanf("%d", &populacao);

    printf("Insira a área da cidade em km.\n");
    scanf("%f", &area);

    printf("Insira a quantidade de pontos turistícos da cidade.\n");
    scanf("%d", &pontos_turisticos);

    printf("Insira o PIB da cidade.\n");
    scanf("%f", &pib);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("========INFORMAÇÕES DA CARTA========\n");
    printf("Cidade: %s \nEstado: %s \nCódigo da carta: %s\n", nome_cidade, estado, codigo_carta);
    printf("População: %d \nÁrea(km): %f \nPIB: %f\n", populacao, area, pib);
    printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos);
    printf("====================================\n");
    return 0;
}
