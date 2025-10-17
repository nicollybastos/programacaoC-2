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
    printf("\n==== RESULTADOS CALCULADOS ====\n");
    printf("\nCarta 1 - %s (%s):\n", cidade1, estado1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    printf("\nCarta 2 - %s (%s):\n", cidade2, estado2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    // --- Escolha do atributo para comparação ---
    int opcao;
    printf("\n==== MENU DE COMPARAÇÃO ====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Escolha o atributo para comparar (1 a 6): ");
    scanf("%d", &opcao);

    printf("\n==== RESULTADO DA COMPARAÇÃO ====\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s (%s): %d habitantes\n", cidade1, estado1, populacao1);
            printf("%s (%s): %d habitantes\n", cidade2, estado2, populacao2);
            if (populacao1 > populacao2)
                printf("\nResultado: %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("\nResultado: %s venceu!\n", cidade2);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("%s (%s): %.2f km²\n", cidade2, estado2, area2);
            if (area1 > area2)
                printf("\nResultado: %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("\nResultado: %s venceu!\n", cidade2);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s (%s): %.2f bilhões\n", cidade1, estado1, pib1);
            printf("%s (%s): %.2f bilhões\n", cidade2, estado2, pib2);
            if (pib1 > pib2)
                printf("\nResultado: %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("\nResultado: %s venceu!\n", cidade2);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s (%s): %d\n", cidade1, estado1, turismo1);
            printf("%s (%s): %d\n", cidade2, estado2, turismo2);
            if (turismo1 > turismo2)
                printf("\nResultado: %s venceu!\n", cidade1);
            else if (turismo2 > turismo1)
                printf("\nResultado: %s venceu!\n", cidade2);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("%s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
            if (densidade1 < densidade2) // menor densidade é melhor
                printf("\nResultado: %s venceu!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("\nResultado: %s venceu!\n", cidade2);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per capita\n");
            printf("%s (%s): %.2f\n", cidade1, estado1, pibpercapita1);
            printf("%s (%s): %.2f\n", cidade2, estado2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2)
                printf("\nResultado: %s venceu!\n", cidade1);
            else if (pibpercapita2 > pibpercapita1)
                printf("\nResultado: %s venceu!\n", cidade2);
            else
                printf("\nResultado: Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
