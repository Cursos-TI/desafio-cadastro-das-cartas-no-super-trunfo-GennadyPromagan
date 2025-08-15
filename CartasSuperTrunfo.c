#include <stdio.h>

int main() {
    

    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    unsigned int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float percapita;
    float densidade;
    float inversodensicade;
    float SuperPoder;


    printf("\n*** Carta 1 ***\n");

    printf("Digite o estado [UF]\n");
    scanf("%s", &estado1);

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



    percapita = pib1 / (float)populacao1;
    densidade = populacao1 / (float)area1;
    inversodensicade = 1.0 / densidade;

    SuperPoder = (populacao1 + area1 + pib1 + pontosTuristicos1 + 
    percapita + inversodensicade);

//exibir dados

    printf("\n=== Dados da Carta 1 ===\n");
    

    printf("Estado: %s\n", estado1);
    printf("Codigo: %3s\n", codigo1);
    printf("Nome da cidade: %49s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em km²: %.3f\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("O pib per capita e: %f\n", percapita);
    printf("A densidade populacional e de: %.2f\n", densidade);
    printf("Valor do Super poder e : %.0f\n", SuperPoder);


//dados da carta 2
   
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float percapita2;
    float densidade2;
    float inversodensidade2;
    float superpoder2;


    printf("\n*** Carta 2 ***\n");

    printf("Digite o estado [UF]\n");
    scanf("%s", &estado2);

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

    percapita2 = pib2 / (float)populacao2;
    densidade2 = populacao2 / area2;
    inversodensidade2 = 1.0 / densidade2;

    superpoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + 
    percapita2 + inversodensidade2);

//exibir dados 2

    printf("=== Dados da Carta 2 ===\n");
    
 
    printf("Estado: %s\n", estado2);
    printf("Codigo: %3s\n", codigo2);
    printf("Nome da cidade: %49s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em km²: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("O pib per capita e: %f\n", percapita2);
    printf("A densidade populacional e de: %.2f\n", densidade2);
    printf("O valor do Super Poder e: %.0f\n", superpoder2);


// comparacao das cartas


   int ResultadoPop;
   int ResultadoArea;
   int ResultadoPib;
   int ResultadoPT;
   int ResultadoDen;
   int ResultadoPercap;
   int ResultadoSuperpoder;

   printf("\n**** BATALHA DE CARTAS ****\n");

   ResultadoPop = (populacao1 > populacao2);
   ResultadoArea = (area1 > area2);
   ResultadoPib = (pib1 > pib2);
   ResultadoPT = (pontosTuristicos1 > pontosTuristicos2);
   ResultadoDen = (inversodensicade < inversodensidade2);
   ResultadoPercap = (percapita > percapita2);
   ResultadoSuperpoder = (SuperPoder > superpoder2);


   printf("^^^^^^ NUMERO 1 = Verdadeiro ^^^^^\n");
   printf("***NUMERO 0 = FALSO ***\n");

   printf("A carta 1 tem mais Populacao? :%d \n", ResultadoPop);
   printf("A carta 1 tem mais area? : %d\n", ResultadoArea);
   printf("A carta 1 tem mais PIB? : %d\n", ResultadoPib);
   printf("A carta 1 tem mais Pontos Turisticos? : %d\n", ResultadoPT);
   printf("A carta 1 tem menor densicade populacional? : %d\n", ResultadoDen);
   printf("A carta 1 tem mais Pib per capita? : %d\n", ResultadoPercap);
   printf("A carta 1 tem mais Super Poder? : %d\n", ResultadoSuperpoder);
   
   return 0 ;



}