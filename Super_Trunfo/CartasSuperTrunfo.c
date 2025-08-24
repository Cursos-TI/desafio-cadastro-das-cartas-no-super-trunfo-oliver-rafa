#include <stdio.h>

int main(){

    // Dados Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;


    // Dados Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2; 
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Informações da carta 1
    printf(" Carta 1 \n");
    printf("Digite a sigla do estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf( "%s", &cidade1); 

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em KM²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB em R$: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Informações da carta 2
    printf(" Carta 2 \n");  
    printf("Digite a sigla do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf( "%s", &cidade2); 

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em KM²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB em R$: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Saida dos dados das cartas
    
    // Carta 1

    printf(" Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo do estado: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);  
    printf("Número de Pontos turisticos: %d\n", pontosTuristicos1);

    // Carta 2
    printf(" Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo do estado: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos turisticos: %d\n", pontosTuristicos2);

return 0;




}