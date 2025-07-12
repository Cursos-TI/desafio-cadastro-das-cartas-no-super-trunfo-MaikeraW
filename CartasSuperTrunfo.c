#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
        char codigo1[20];
        char estado1[20];
        char cidade1[20];
        int populacao1;
        int area1;
        int pib1;
        int pontosturisticos1;

    printf("Cadastrar Nova Carta\n\n");
    printf("Código da carta:\n");
    scanf("%s", &codigo1);
    printf("Estado Brasileiro:\n");
    scanf("%s", &estado1);
    printf("Nome da cidade:\n");
    scanf(" &s", &cidade1);
    


    printf("Carta 01\n\n");
    printf("Código da Carta: %s", codigo1);
    printf("Estado: %s", estado1);
    printf("Cidade: %s", cidade1);




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
