#include <stdio.h>

int main() {
    
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float pibperCapita;
    float densidade;

    printf("\n*** Carta 1 ***\n");

    printf("Digite o estado [UF]\n");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta:\n");
    scanf("%3s", &codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", &nomeCidade1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Digite a Area(em km²)\n");
    scanf("%f", &area1);

    printf("Digite o pib:\n");
    scanf("%f", &pib1);

    printf("Digite numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos1);

    pib1 = pib1 / populacao1;
    densidade = populacao1 / area1;

//exibir dados

    printf("=== Dados da Carta 1 ===\n");
    

    printf("Estado: %c\n", estado1);
    printf("Codigo: %3s\n", codigo1);
    printf("Nome da cidade: %49s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em km²: %.3f\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("O pib per capita e: %f\n", pibperCapita);
    printf("A densidade populacional e de: %.2f", densidade);

//dados da carta 2

    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float pibperCapita2;
    float densidade2;

    printf("\n*** Carta 2 ***\n");

    printf("Digite o estado [UF]\n");
    scanf("%c", &estado2);

    printf("Digite o codigo da carta:\n");
    scanf("%3s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", &nomeCidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a Area(em km²)\n");
    scanf("%f", &area2);

    printf("Digite o pib:\n");
    scanf("%f", &pib2);

    printf("Digite numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos2);

    pibperCapita2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;

//exibir dados 2

    printf("=== Dados da Carta 2 ===\n");
    

    printf("Estado: %c\n", estado2);
    printf("Codigo: %3s\n", codigo2);
    printf("Nome da cidade: %49s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em km²: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("O pib per capita e: %f\n", pibperCapita2);
    printf("A densidade populacional e de: %.2f", densidade2);

    return 0;


}