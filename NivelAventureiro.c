#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1[3], codigo1[4], cidade1[50];
    int populacao1, turismo1;
    float area1, pib1;

    // Declaração das variáveis da Carta 2
    char estado2[3], codigo2[4], cidade2[50];
    int populacao2, turismo2;
    float area2, pib2;

    // --- Cadastro da Carta 1 ---
    printf("\nCadastro da Carta 1:\n");
    printf("Digite o estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo1);

    // Cálculos - Carta 1
    float densidade1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;

    // --- Cadastro da Carta 2 ---
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo2);

    // Cálculos - Carta 2
    float densidade2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    // --- Exibição dos resultados calculados ---
    printf("\n==== Resultados Calculados ====\n");
    printf("\nCarta 1 - %s (%s):\n", cidade1, estado1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    printf("\nCarta 2 - %s (%s):\n", cidade2, estado2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    // --- Comparação de atributo (exemplo: População) ---
    printf("\n==== Comparação de cartas (Atributo: População) ====\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
