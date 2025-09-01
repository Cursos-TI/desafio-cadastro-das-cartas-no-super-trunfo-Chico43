// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Francisco

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Carta 01
    // Declaração das variáveis
    char codigo1[20];
    char estado1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturismo1;

    // Entrada de dados
    printf("===========CARTA 01===========\n");

    printf("Digite o código da carta 1: \n");
    scanf("%s", codigo1);

    printf("Digite o estado da carta 1: \n");
    scanf("%s", estado1);   

    printf("Digite a cidade da carta 1: \n");
    scanf("%s", cidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos da carta 1: \n");
    scanf("%d", &pontosturismo1);   

    // Carta 02
    // Declaração das variáveis 
    char codigo2[20];
    char estado2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturismo2;
    // Entrada de dados
    printf("===========CARTA 02===========\n");
    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o estado da carta 2: \n");
    scanf("%s", estado2);

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", cidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos da carta 2: \n");
    scanf("%d", &pontosturismo2);

    printf("\n");
    // Exibição dos dados
    printf("===========CARTAS===========\n");

    printf("===========CARTA 01===========\n");
    printf("Carta 1: %s - %s - %s\n", codigo1, estado1, cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturismo1);

    //Calcular Densidade populacional e pib per capita
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("\n");


    printf("===========CARTA 02===========\n");
    printf("Carta 2: %s - %s - %s\n", codigo2, estado2, cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturismo2);
    //Calcular Densidade populacional e pib per capita
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("\n");

    return 0;
} 