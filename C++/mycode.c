#include <stdio.h>
#include <string.h>

int main(void) {

    // Carta 1
    char estado01[2];
    char codigo01[4];
    char cidade01[50];
    int populacao01;
    float area01;
    float pib01;
    int pontosTuristicos01;

    // Carta 2
    char estado02[2];
    char codigo02[4];
    char cidade02[50];
    int populacao02;
    float area02;
    float pib02;
    int pontosTuristicos02;

    // Cadastro da Carta 1
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Estado: ");
    scanf("%1s", estado01);

    printf("Codigo: ");
    scanf("%3s", codigo01);

    getchar();

    printf("Nome da cidade: ");
    fgets(cidade01, sizeof(cidade01), stdin);
    cidade01[strcspn(cidade01, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &populacao01);

    printf("Area (km2): ");
    scanf("%f", &area01);

    printf("PIB: ");
    scanf("%f", &pib01);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos01);


    // Cadastro da Carta 2
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Estado: ");
    scanf("%1s", estado02);

    printf("Codigo: ");
    scanf("%3s", codigo02);

    getchar();

    printf("Nome da cidade: ");
    fgets(cidade02, sizeof(cidade02), stdin);
    cidade02[strcspn(cidade02, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &populacao02);

    printf("Area (km2): ");
    scanf("%f", &area02);

    printf("PIB: ");
    scanf("%f", &pib02);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos02);


    // Exibicao da Carta 1
    printf("\n========================================\n");
    printf("              CARTA 1\n");
    printf("========================================\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("Populacao: %d habitantes\n", populacao01);
    printf("Area: %.2f km2\n", area01);
    printf("PIB: %.2f bilhoes de reais\n", pib01);
    printf("Pontos turisticos: %d\n", pontosTuristicos01);


    // Exibicao da Carta 2
    printf("\n========================================\n");
    printf("              CARTA 2\n");
    printf("========================================\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Cidade: %s\n", cidade02);
    printf("Populacao: %d habitantes\n", populacao02);
    printf("Area: %.2f km2\n", area02);
    printf("PIB: %.2f bilhoes de reais\n", pib02);
    printf("Pontos turisticos: %d\n", pontosTuristicos02);

    return 0;
}
