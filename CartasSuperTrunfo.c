//teste FRANCISCO
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
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

    // Entrada de dados inicial

    printf("=====================SUPER TRUNFO GAME=======================\n");
    printf("=============================================================\n");

    printf("=====NOVO JOGO=====\n");
    printf("DIGITE AS INFORMAÇÕES DAS CARTAS:\n");

    printf("===========================================\n");
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
    printf("\n");   

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
    printf("===========DADOS DAS CARTAS===========\n");
    printf("======================================\n");
    printf("\n");

    
    printf("===========CARTA 01===========\n");
    printf("================================\n");
    printf("\n");

    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f em km²\n", area1);
    printf("PIB:Em BI R$%.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturismo1);

    //Calcular Densidade populacional e pib per capita
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("\n");
    printf("================================\n");
    printf("\n");

    
    printf("===========CARTA 02===========\n");
    printf("================================\n");
    printf("\n");

    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Em KM²\n", area2);
    printf("PIB:Em BI R$%.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturismo2);

    //Calcular Densidade populacional e pib per capita
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("\n");
    printf("================================\n");
    
    //Comparação dos atributos OPERADORES RELACIONAIS
    printf("===========COMPARAÇÃO ENTRE AS CARTAS===========\n");
    printf("\n");
    printf("===================================================\n");
    printf("População:\n");
    if (populacao1 > populacao2) {
        printf("A carta 1 tem maior população que a carta 2.\n");
    } else if (populacao1 < populacao2) {
        printf("A carta 2 tem maior população que a carta 1.\n");
    } else {
        printf("As duas cartas têm a mesma população.\n");
    }
    printf("\n");
    printf("Área:\n");
    if (area1 > area2) {
        printf("A carta 1 tem maior área que a carta 2.\n");
    } else if (area1 < area2) {
        printf("A carta 2 tem maior área que a carta 1.\n");
    } else {
        printf("As duas cartas têm a mesma área.\n");
    }
    printf("\n");
    printf("PIB:\n");
    if (pib1 > pib2) {
        printf("A carta 1 tem maior PIB que a carta 2.\n");
    } else if (pib1 < pib2) {
        printf("A carta 2 tem maior PIB que a carta 1.\n");
    } else {
        printf("As duas cartas têm o mesmo PIB.\n");
    }
    printf("\n");
    printf("Pontos Turísticos:\n");
    if (pontosturismo1 > pontosturismo2) {
        printf("A carta 1 tem mais pontos turísticos que a carta 2.\n");
    } else if (pontosturismo1 < pontosturismo2) {
        printf("A carta 2 tem mais pontos turísticos que a carta 1.\n");
    } else {
        printf("As duas cartas têm o mesmo número de pontos turísticos.\n");
    }
    printf("\n");

    // Comparação Densidade populacional e pib per capita
    printf("Densidade Populacional:\n");
    if (densidade1 < densidade2) {
        printf("A carta 1 tem menor densidade populacional que a carta 2.\n");
    } else if (densidade1 > densidade2) {
        printf("A carta 2 tem maior densidade populacional que a carta 1.\n");
    } else {
        printf("As duas cartas têm a mesma densidade populacional.\n");
    }
    printf("\n");
    printf("PIB per Capita:\n");
    if (pib_per_capita1 < pib_per_capita2) {
        printf("A carta 1 tem menor PIB per capita que a carta 2.\n");
    } else if (pib_per_capita1 > pib_per_capita2) {
        printf("A carta 2 tem maior PIB per capita que a carta 1.\n");
    } else {
        printf("As duas cartas têm o mesmo PIB per capita.\n");
    }
    printf("\n");
    // Fim da

    // Comparação dos atributos com base na escolha do usuário
    char escolha1, escolha;
    printf("=======Menu de comparações pelo usuario=======\n");
    printf("Carta 1 - Escolha o atributo para comparar:\n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("B - PIB\n");
    printf("T - Pontos Turísticos\n");
    printf("D - Densidade Populacional\n");
    printf("C - PIB per Capita\n");
    printf("Digite sua escolha: ");
    scanf(" %c", &escolha1);
    printf("\n");

    printf("Carta 2 - Escolha o atributo para comparar:\n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("B - PIB\n");
    printf("T - Pontos Turísticos\n");
    printf("D - Densidade Populacional\n");
    printf("C - PIB per Capita\n");
    printf("Digite sua escolha: ");
    scanf(" %c", &escolha);
    printf("\n");
    if (escolha1 != escolha) {
        printf("As escolhas dos atributos não coincidem. Por favor, escolha o mesmo atributo para ambas as cartas.\n");
        return 1; // Encerrar o programa com erro
    }
    printf("Comparando o atributo escolhido nas duas cartas:\n"); 
    printf("\n");


    // Realizar a comparação com base na escolha do usuário
    switch (escolha) { 
        case 'P':
        case 'p':
            if (populacao1 > populacao2) {
                printf("A carta 1 tem maior população (%d) que a carta 2 (%d).\n", populacao1, populacao2);
            } else if (populacao1 < populacao2) {
                printf("A carta 2 tem maior população (%d) que a carta 1 (%d).\n", populacao2, populacao1);
            } else {
                printf("As duas cartas têm a mesma população (%d).\n", populacao1);
            }
            break;
        case 'A':
        case 'a':
            if (area1 > area2) {
                printf("A carta 1 tem maior área (%.2f km²) que a carta 2 (%.2f km²).\n", area1, area2);
            } else if (area1 < area2) {
                printf("A carta 2 tem maior área (%.2f km²) que a carta 1 (%.2f km²).\n", area2, area1);
            } else {
                printf("As duas cartas têm a mesma área (%.2f km²).\n", area1);
            }
            break;
        case 'B':
        case 'b':
            if (pib1 > pib2) {
                printf("A carta 1 tem maior PIB (%.2f BI R$) que a carta 2 (%.2f BI R$).\n", pib1, pib2);
            } else if (pib1 < pib2) {
                printf("A carta 2 tem maior PIB (%.2f BI R$) que a carta 1 (%.2f BI R$).\n", pib2, pib1);
            } else {
                printf("As duas cartas têm o mesmo PIB (%.2f BI R$).\n", pib1);
            }
            break;
        case 'T':
        case 't':
            if (pontosturismo1 > pontosturismo2) {
                printf("A carta 1 tem mais pontos turísticos (%d) que a carta 2 (%d).\n", pontosturismo1, pontosturismo2);
            } else if (pontosturismo1 < pontosturismo2) {
                printf("A carta 2 tem mais pontos turísticos (%d) que a carta 1 (%d).\n", pontosturismo2, pontosturismo1);
            } else {
                printf("As duas cartas têm o mesmo número de pontos turísticos (%d).\n", pontosturismo1);
            }
            break;
        case 'D':
        case 'd':
            if (densidade1 > densidade2) {
                printf("A carta 1 tem maior densidade populacional (%.2f) que a carta 2 (%.2f).\n", densidade1, densidade2);
            } else if (densidade1 < densidade2) {
                printf("A carta 2 tem maior densidade populacional (%.2f) que a carta 1 (%.2f).\n", densidade2, densidade1);
            } else {
                printf("As duas cartas têm a mesma densidade populacional (%.2f).\n", densidade1);
            }
            break;
        case 'C':
        case 'c':
            if (pib_per_capita1 > pib_per_capita2) {
                printf("A carta 1 tem maior PIB per capita (%.2f) que a carta 2 (%.2f).\n", pib_per_capita1, pib_per_capita2);
            } else if (pib_per_capita1 < pib_per_capita2) {
                printf("A carta 2 tem maior PIB per capita (%.2f) que a carta 1 (%.2f).\n", pib_per_capita2, pib_per_capita1);
            } else {
                printf("As duas cartas têm o mesmo PIB per capita (%.2f).\n", pib_per_capita1);
            }
            break;
        default:
            printf("Escolha inválida!\n");
            break;
    }
    return 0;
}