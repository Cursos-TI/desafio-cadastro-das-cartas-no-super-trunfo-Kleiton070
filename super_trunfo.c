#include <stdio.h>

int main() {
    // Variáveis da carta 1
    int populacao1, pontost1;
    float area1, pib1;

    // Variáveis da carta 2
    int populacao2, pontost2;
    float area2, pib2;

    // Cadastro da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontost1);

    // Cadastro da carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontost2);

    // Exibir os dados
    printf("\n===== Dados das Cartas =====\n");

    printf("\nCarta 1:\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontost1);

    printf("\nCarta 2:\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontost2);

    return 0;
}
