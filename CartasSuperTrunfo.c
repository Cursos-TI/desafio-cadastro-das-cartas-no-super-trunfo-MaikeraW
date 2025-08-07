#include <stdio.h>

int main() {

        //opcoes do menu
        int menua, menub;

        //declarando as variaveis da carta 01
        char codigo1[4];
        char estado1[4];
        char cidade1[50];
        int populacao1;
        float area1;
        float pib1;
        int pontosturisticos1;

        //declarando as variaveis da carta 02
        char codigo2[4];
        char estado2[4];
        char cidade2[50];
        int populacao2;
        float area2;
        float pib2;
        int pontosturisticos2;

            //"Tela Inicial"
    printf("**Jogo Super Trunfo Virtual**\n\n");
    printf("Antes de tudo, vamos cadastras as cartas do nosso jogo!\n\n");

    // User inserindo as informações da carta 01
    printf("Cadastrar Nova Carta\n\n");
    printf("Código da carta:\n");
    scanf("%s", codigo1);
    printf("Estado Brasileiro:\n");
    scanf("%s", estado1);
    printf("Nomeda cidade:\n");
    scanf("%s", &cidade1);
    printf("População (nº Bruto):\n");
    scanf("%d", &populacao1);
    printf("Área total (mil Km²):\n");
    scanf("%f", &area1);
    printf("PIB (Em Bilhões):\n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos1);

    // User inserindo as informações da carta 02
    printf("\n\nCadastrar Nova Carta\n\n");
    printf("Código da carta:\n");
    scanf("%s", codigo2);
    printf("Estado Brasileiro:\n");
    scanf("%s", estado2);
    printf("Nome da cidade:\n");
    scanf("%s", cidade2);
    printf("População (nº Bruto):\n");
    scanf("%d", &populacao2);
    printf("Área total (mil Km²):\n");
    scanf("%f", &area2);
    printf("PIB (Em Bilhões):\n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos2);

    //Calculando Densidade Pop. e Pib Per Capita

        float denpop1 = (float) populacao1 / area1;
        float denpop2 = (float) populacao2 / area2;
        float pibper1 = (float) pib1 * 1000000000 / populacao1;
        float pibper2 = (float) pib2 * 1000000000 / populacao2;

printf("\nO que deseja fazer?\n");
printf("1. Iniciar Partida\n");
printf("2. Ver as Cartas\n");
printf("3. Ver regras\n");
scanf("%d", &menua);    

switch (menua)
{
case 1:
    printf("\nQual atributo gostaria de comparar?\n");
    printf("1. População Total\n");
    printf("2. Área Total\n");
    printf("3. Pib\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib Per Capita\n");
    scanf("%d", &menub);

        switch (menub)
        {
        case 1:
            printf("%s: %d Hab.\n", cidade1, populacao1);
            printf("%s: %d Hab.\n", cidade2, populacao2);
            if (populacao1 == populacao2)
            { printf("Empate entre as cartas!\n");
            } else if (populacao1 > populacao2)
            {
                printf("\nCarta 1 venceu!\n");
            }else printf("\nCarta 2 venceu\n!");
        break;
        case 2:
            printf("%s: %.2f Km²\n", cidade1, area1);
            printf("%s: %.2f Km²\n", cidade2, area2);
            if (area1 == area2)
            { printf("Empate entre as cartas!\n");
            } else if (area1 > area2)
            {
                printf("\nCarta 1 venceu!\n");
            }else printf("\nCarta 2 venceu\n!")  ;
        break;  
        case 3:
            printf("%s: %.2f Bilhões\n", cidade1, pib1);
            printf("%s: %.2f Bilhões\n", cidade2, pib2);
            if (pib1 == pib2)
            { printf("Empate entre as cartas!\n");
            } else if (pib1 > pib2)
            {
                printf("\nCarta 1 venceu!\n");
            }else printf("\nCarta 2 venceu\n!");
        break;
        case 4:
            printf("%s: %d Pontos Turísticos\n", cidade1, pontosturisticos1);
            printf("%s: %d Pontos Turísticos\n", cidade2, pontosturisticos2);
            if (pontosturisticos1 == pontosturisticos2)
            { printf("Empate entre as cartas!\n");
            } else if (pontosturisticos1 > pontosturisticos2)
            {
                printf("\nCarta 1 venceu!\n");
            }else printf("\nCarta 2 venceu\n!");
        break;
        case 5:
            printf("%s: %.2f Hab./Km²\n", cidade1, denpop1);
            printf("%s: %.2f Hab./Km²\n", cidade2, denpop2);
            if (denpop1 == denpop2)
            { printf("Empate entre as cartas\n!");
            } else if (denpop1 < denpop2)
            {
                printf("\nCarta 1 venceu!\n");
            }else printf("\nCarta 2 venceu\n!") ;
        break; 
        case 6:
            printf("%s: R$ %.2f \n", cidade1, pibper1);
            printf("%s: R$ %.2f \n", cidade2, pibper2);
            if (pibper1 == pibper2)
            { printf("Empate entre as cartas!\n");
            } else if (pibper1 > pibper2)
            {
                printf("\nCarta 1 venceu!\n");
            }else printf("\nCarta 2 venceu\n!")  ;
        break;
        default:
            printf("ALGO DEU ERRADO!\n");
        break;
        }
    break;
case 2:
    //Mostrando as informações das cartas
    printf("\n\n\nCarta 01\n\n");
    printf("Código da Carta: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d Hab.\n", populacao1);
    printf("Área total: %.2f Km²\n", area1);
    printf("PIB: %.2f Bi\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f Hab./Km²\n", denpop1);
    printf("Pib Per Capita: R$ %.2f", pibper1);

    printf("\n\n\nCarta 02\n\n");
    printf("Código da Carta: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d Hab.\n", populacao2);
    printf("Área total: %.2f Km²\n", area2);
    printf("PIB: %.2f Bi\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f Hab./Km²\n", denpop2);
    printf("Pib Per Capita: R$ %.2f\n\n", pibper2);
    break;
case 3:
    printf("***O jogo***\n\n");
    printf("O jogo Super Trunfo consiste em comparar um dos atributos entre duas cartas e verificar qual tem o melhor valor.\n");
    printf("A carta com o melhor valor, vence a rodada.");
    printf("O jogador que ganha a rodada, ganha também a carta do oponente. Assim as rodadas acontecem sequencialmente até que um só jogador possua todas as cartas.");
    break;
default:
        printf("Algo deu errado!\n");
        break;
}    
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
