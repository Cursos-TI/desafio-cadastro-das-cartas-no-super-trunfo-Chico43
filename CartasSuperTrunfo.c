#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Carta 01
    // Declaração das variáveis
    
    char cidade[50];
    char estado[50];
    char codcartao[20];
    int populacao;
    float area;
    float pib;
    int pontosturismo;

    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade);  

    printf("Digite o estado: ");
    scanf("%49s", estado);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o codigo do cartao: ");
    scanf("%19s", codcartao);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturismo);

    printf("\nCidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Codigo do cartao: %s\n", codcartao);
    printf("Pontos turisticos: %d\n", pontosturismo);
    printf("\n");
    
    


    // Carta 02
    // declaração das variáveis

    char cidade02[50];
    char estado02[50];
    char codcartao02[20];
    int populacao02;
    float area02;
    float pib02;
    int pontosturismo02;

    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade02);  

    printf("Digite o estado: ");
    scanf("%49s", estado02);

    printf("Digite a populacao: ");
    scanf("%d", &populacao02);

    printf("Digite a area: ");
    scanf("%f", &area02);

    printf("Digite o PIB: ");
    scanf("%f", &pib02);

    printf("Digite o codigo do cartao: ");
    scanf("%19s", codcartao02);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturismo02);

    printf("\nCidade: %s\n", cidade02);
    printf("Estado: %s\n", estado02);
    printf("Populacao: %d\n", populacao02);
    printf("Area: %.2f\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Codigo do cartao: %s\n", codcartao02);
    printf("Pontos turisticos: %d\n", pontosturismo02);
    return 0;
    
}
