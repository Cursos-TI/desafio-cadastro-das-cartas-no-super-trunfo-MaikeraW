#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Maikera

int main() {

        //declarando as variaveis da carta 01
        char codigo1[20];
        char estado1[20];
        char cidade1[20];
        int populacao1;
        int area1;
        float pib1;
        int pontosturisticos1;

        //declarando as variaveis da carta 02
        char codigo2[20];
        char estado2[20];
        char cidade2[20];
        int populacao2;
        int area2;
        float pib2;
        int pontosturisticos2;

    // User inserindo as informações da carta 01
    printf("Cadastrar Nova Carta\n\n");
    printf("Código da carta:\n");
    scanf("%s", &codigo1);
    printf("Estado Brasileiro:\n");
    scanf("%s", &estado1);
    printf("Nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Área total:\n");
    scanf(" %d", &area1);
    printf("PIB:\n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos1);

    // User inserindo as informações da carta 02
    printf("\n\n\nCadastrar Nova Carta\n\n");
    printf("Código da carta:\n");
    scanf("%s", &codigo2);
    printf("Estado Brasileiro:\n");
    scanf("%s", &estado2);
    printf("Nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Área total:\n");
    scanf(" %d", &area2);
    printf("PIB:\n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos2);

    //Mostrando as informações das cartas
    printf("\n\n\nCarta 01\n\n");
    printf("Código da Carta: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d Hab.\n", populacao1);
    printf("Área total: %d Km²\n", area1);
    printf("PIB: %.2f Mi\n", pib1);
    printf("Pontos Turísticos: %d", pontosturisticos1);

    printf("\n\n\nCarta 02\n\n");
    printf("Código da Carta: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d Hab.\n", populacao2);
    printf("Área total: %d Km²\n", area2);
    printf("PIB: %.2f Mi\n", pib2);
    printf("Pontos Turísticos: %d\n\n\n", pontosturisticos2);

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
