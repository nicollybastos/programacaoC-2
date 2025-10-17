#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char estado1[3], codigo1[4], cidade1[50];
    int populacao1, turismo1;
    float area1, pib1;

    // Dados da Carta 2
    char estado2[3], codigo2[4], cidade2[50];
    int populacao2, turismo2;
    float area2, pib2;

    // ======= Cadastro das cartas =======
    printf("\n===== CADASTRO DA CARTA 1 =====\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("\n===== CADASTRO DA CARTA 2 =====\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo2);

    // ======= Cálculos extras =======
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibpercapita1 = pib1 / populacao1;
    float pibpercapita2 = pib2 / populacao2;

    // ======= Escolha dos atributos =======
    int atributo1, atributo2;
    printf("\n===== MENU DE ATRIBUTOS =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo (1 a 6): ");
    scanf("%d", &atributo1);

    // Menu dinâmico (remove a opção escolhida)
    printf("\n===== MENU DE ATRIBUTOS (2ª escolha) =====\n");
    for (int i = 1; i <= 6; i++) {
        if (i == atributo1) continue; // pula o já escolhido
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Populacional\n"); break;
            case 6: printf("6 - PIB per capita\n"); break;
        }
    }

    // Escolha do segundo atributo
    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1)
            printf("⚠️ Atributo repetido! Escolha outro.\n");
    } while (atributo2 == atributo1);

    // ======= Determinação dos valores =======
    float valor1A1, valor1A2, valor2A1, valor2A2;
    char nomeAtributo1[30], nomeAtributo2[30];

    // Primeiro atributo
    switch (atributo1) {
        case 1: valor1A1 = populacao1; valor1A2 = populacao2; strcpy(nomeAtributo1, "População"); break;
        case 2: valor1A1 = area1; valor1A2 = area2; strcpy(nomeAtributo1, "Área"); break;
        case 3: valor1A1 = pib1; valor1A2 = pib2; strcpy(nomeAtributo1, "PIB"); break;
        case 4: valor1A1 = turismo1; valor1A2 = turismo2; strcpy(nomeAtributo1, "Pontos Turísticos"); break;
        case 5: valor1A1 = densidade1; valor1A2 = densidade2; strcpy(nomeAtributo1, "Densidade Populacional"); break;
        case 6: valor1A1 = pibpercapita1; valor1A2 = pibpercapita2; strcpy(nomeAtributo1, "PIB per capita"); break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // Segundo atributo
    switch (atributo2) {
        case 1: valor2A1 = populacao1; valor2A2 = populacao2; strcpy(nomeAtributo2, "População"); break;
        case 2: valor2A1 = area1; valor2A2 = area2; strcpy(nomeAtributo2, "Área"); break;
        case 3: valor2A1 = pib1; valor2A2 = pib2; strcpy(nomeAtributo2, "PIB"); break;
        case 4: valor2A1 = turismo1; valor2A2 = turismo2; strcpy(nomeAtributo2, "Pontos Turísticos"); break;
        case 5: valor2A1 = densidade1; valor2A2 = densidade2; strcpy(nomeAtributo2, "Densidade Populacional"); break;
        case 6: valor2A1 = pibpercapita1; valor2A2 = pibpercapita2; strcpy(nomeAtributo2, "PIB per capita"); break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // ======= Comparações individuais =======
    float pontos1 = 0, pontos2 = 0;

    // Comparação do primeiro atributo
    if (atributo1 == 5) { // Densidade → menor vence
        if (valor1A1 < valor1A2) pontos1++;
        else if (valor1A2 < valor1A1) pontos2++;
    } else {
        if (valor1A1 > valor1A2) pontos1++;
        else if (valor1A2 > valor1A1) pontos2++;
    }

    // Comparação do segundo atributo
    if (atributo2 == 5) { // Densidade → menor vence
        if (valor2A1 < valor2A2) pontos1++;
        else if (valor2A2 < valor2A1) pontos2++;
    } else {
        if (valor2A1 > valor2A2) pontos1++;
        else if (valor2A2 > valor2A1) pontos2++;
    }

    // Soma final dos valores dos dois atributos
    float soma1 = valor1A1 + valor2A1;
    float soma2 = valor1A2 + valor2A2;

    // ======= Exibição clara e organizada =======
    printf("\n==============================================\n");
    printf("           RESULTADO DA COMPARAÇÃO\n");
    printf("==============================================\n");
    printf("Carta 1: %s (%s)\n", cidade1, estado1);
    printf("Carta 2: %s (%s)\n\n", cidade2, estado2);

    printf("Atributos comparados:\n");
    printf("1️⃣  %s\n", nomeAtributo1);
    printf("2️⃣  %s\n\n", nomeAtributo2);

    printf("%-25s | %-15s | %-15s\n", "Atributo", "Carta 1", "Carta 2");
    printf("----------------------------------------------------------\n");
    printf("%-25s | %-15.2f | %-15.2f\n", nomeAtributo1, valor1A1, valor1A2);
    printf("%-25s | %-15.2f | %-15.2f\n", nomeAtributo2, valor2A1, valor2A2);
    printf("----------------------------------------------------------\n");
    printf("Soma dos atributos      | %-15.2f | %-15.2f\n", soma1, soma2);
    printf("----------------------------------------------------------\n");

    if (soma1 > soma2)
        printf("\nResultado: %s venceu!\n", cidade1);
    else if (soma2 > soma1)
        printf("\nResultado: %s venceu!\n", cidade2);
    else
        printf("\nResultado: Empate!\n");

    printf("==============================================\n");

    return 0;
}
