#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nDigite o estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    float densidade1 = (float) populacao1 / area1;
    float pibPerCapita1 = pib1 / (float) populacao1;

    float densidade2 = (float) populacao2 / area2;
    float pibPerCapita2 = pib2 / (float) populacao2;

    // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade)
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional:  %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // ----------- Comparações -----------
printf("\nComparação de Cartas:\n");

int vPop  = (populacao1 > populacao2);
int vArea = (area1 > area2);
int vPIB  = (pib1 > pib2);
int vPts  = (pontosTuristicos1 > pontosTuristicos2);
int vDen  = (densidade1 < densidade2); // menor vence
int vPC   = (pibPerCapita1 > pibPerCapita2);
int vSP   = (superPoder1 > superPoder2);

printf("População: %lu vs %lu → Carta %d venceu (%d)\n",
       populacao1, populacao2, vPop ? 1 : 2, vPop);
printf("Área: %.2f vs %.2f → Carta %d venceu (%d)\n",
       area1, area2, vArea ? 1 : 2, vArea);
printf("PIB: %.2f vs %.2f → Carta %d venceu (%d)\n",
       pib1, pib2, vPIB ? 1 : 2, vPIB);
printf("Pontos Turísticos: %d vs %d → Carta %d venceu (%d)\n",
       pontosTuristicos1, pontosTuristicos2, vPts ? 1 : 2, vPts);
printf("Densidade Populacional: %.2f vs %.2f → Carta %d venceu (%d)\n",
       densidade1, densidade2, vDen ? 1 : 2, vDen);
printf("PIB per Capita: %.2f vs %.2f → Carta %d venceu (%d)\n",
       pibPerCapita1, pibPerCapita2, vPC ? 1 : 2, vPC);
printf("Super Poder: %.2f vs %.2f → Carta %d venceu (%d)\n",
       superPoder1, superPoder2, vSP ? 1 : 2, vSP);


    return 0;
}

    
