#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//TESTE FRANCISCO

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
    printf("===========CARTAS===========\n");
    printf("\n");

    
    printf("===========CARTA 01===========\n");
    
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f em km²\n", area1);
    printf("PIB: %.2f em BI R$\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturismo1);

    //Calcular Densidade populacional e pib per capita
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("\n");


    printf("===========CARTA 02===========\n");
    
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Em KM²\n", area2);
    printf("PIB: %.2f Em BI R$\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturismo2);

    //Calcular Densidade populacional e pib per capita
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("\n");

    // Comparação entre as cartas USANDO OPERADORES RELACIONAIS ">, <, >=, <=, ==, !=, IF, ELSE IF, ELSE"
    printf("===========COMPARAÇÃO ENTRE AS CARTAS===========\n");
    printf("\n");
    printf("Comparação entre as cartas:\n");
    printf("\n");
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
    if (densidade1 > densidade2) {
        printf("A carta 1 tem maior densidade populacional que a carta 2.\n");
    } else if (densidade1 < densidade2) {
        printf("A carta 2 tem maior densidade populacional que a carta 1.\n");
    } else {
        printf("As duas cartas têm a mesma densidade populacional.\n");
    }
    printf("\n");
    printf("PIB per Capita:\n");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("A carta 1 tem maior PIB per capita que a carta 2.\n");
    } else if (pib_per_capita1 < pib_per_capita2) {
        printf("A carta 2 tem maior PIB per capita que a carta 1.\n");
    } else {
        printf("As duas cartas têm o mesmo PIB per capita.\n");
    }
    printf("\n");
    // Fim da comparação entre as cartas
    
    
    // Menu de opções usando switch case
    int opcao;
    printf("\n");
    printf("===========MENU DE OPÇÕES===========\n");
    printf("Escolha uma opção:\n");
    printf("1. Exibir detalhes da carta 1\n");
    printf("2. Exibir detalhes da carta 2\n");
    printf("3. Comparar população\n");
    printf("4. Comparar área\n");
    printf("5. Comparar PIB\n");
    printf("6. Comparar pontos turísticos\n");
    printf("7. Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao) {
        case 1:
            printf("===========CARTA 01===========\n");
            printf("Código: %s\n", codigo1);
            printf("Estado: %s\n", estado1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f em km²\n", area1);
            printf("PIB: %.2f em BI R$\n", pib1);
            printf("Pontos Turísticos: %d\n", pontosturismo1);
            printf("Densidade Populacional: %.2f\n", densidade1);
            printf("PIB per Capita: %.2f\n", pib_per_capita1);
            break;
        case 2:
            printf("===========CARTA 02===========\n");
            printf("Código: %s\n", codigo2);
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f em km²\n", area2);
            printf("PIB: %.2f em BI R$\n", pib2);
            printf("Pontos Turísticos: %d\n", pontosturismo2);
            printf("Densidade Populacional: %.2f\n", densidade2);
            printf("PIB per Capita: %.2f\n", pib_per_capita2);
            break;
        case 3:
            if (populacao1 > populacao2) {
                printf("A carta 1 tem maior população que a carta 2.\n");
            } else if (populacao1 < populacao2) {
                printf("A carta 2 tem maior população que a carta 1.\n");
            } else {
                printf("As duas cartas têm a mesma população.\n");
            }
            break;
        case 4:
            if (area1 > area2) {
                printf("A carta 1 tem maior área que a carta 2.\n");
            } else if (area1 < area2) {
                printf("A carta 2 tem maior área que a carta 1.\n");
            } else {
                printf("As duas cartas têm a mesma área.\n");
            } 
            break;
        case 5:
            if (pib1 > pib2) {
                printf("A carta 1 tem maior PIB que a carta 2.\n");
            } else if (pib1 < pib2) {
                printf("A carta 2 tem maior PIB que a carta 1.\n");
            } else {
                printf("As duas cartas têm o mesmo PIB.\n");
            }
            break;
        case 6:
            if (pontosturismo1 > pontosturismo2) {
                printf("A carta 1 tem mais pontos turísticos que a carta 2.\n");
            } else if (pontosturismo1 < pontosturismo2) {
                printf("A carta 2 tem mais pontos turísticos que a carta 1.\n");
            } else {
                printf("As duas cartas têm o mesmo número de pontos turísticos.\n");
            }
            break;
        case 7:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }
    return 0;
}