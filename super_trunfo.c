//Ledanteque Pinheiro Filho
#include <stdio.h>

// Desafio do Super Trunfo
int main()
{
    char carta1[20], carta2[20];
    char estado1[20], estado2[20];
    char codigo1[3], codigo2[3];
    char NomeCidade1[20], NomeCidade2[20];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float Pib1, Pib2;
    int PontoTuristico1, PontoTuristico2;

    // Carta 1
    printf("Digite o nome do Estado 1: \n");
    scanf("%s", &estado1);

    printf("Digite o nome da Cidade 1: \n");
    scanf("%s", &NomeCidade1);

    printf("Digite o codigo da Cidade 1: \n");
    scanf("%s", &codigo1);

    printf("Digite a Populacao da Cidade 1: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Area da Cidade 1: \n");
    scanf("%f", &Area1);

    printf("Digite o Pib da Cidade 1: \n");
    scanf("%f", &Pib1);

    printf("Digite o numero de Pontos Turisticos da Cidade: \n");
    scanf("%d", &PontoTuristico1);

    // Carta 2
    printf("Digite o nome do Estado 2: \n");
    scanf("%s", &estado2);

    printf("Digite o nome da Cidade 2: \n");
    scanf("%s", &NomeCidade2);

    printf("Digite o codigo da Cidade 2: \n");
    scanf("%s", &codigo2);

    printf("Digite a Populacao da Cidade 2: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Area da Cidade 2: \n");
    scanf("%f", &Area2);

    printf("Digite o Pib da Cidade 2: \n");
    scanf("%f", &Pib2);

    printf("Digite o numero de Pontos Turisticos da Cidade 2: \n");
    scanf("%d", &PontoTuristico2);

    // Resultado carta 1 e carta 2
    printf("Carta 1: %s - %s\n - Codigo: %s\n - Populacao: %d\n - Area: %f\n - Pib: %f\n - Pontos Turisticos: %d\n", estado1, NomeCidade1, codigo1, Populacao1, Area1, Pib1, PontoTuristico1);

    printf("Carta 2: %s - %s\n - Codigo: %s\n - Populacao: %d\n - Area: %f\n - Pib: %f\n - Pontos Turisticos: %d\n", estado2, NomeCidade2, codigo2, Populacao2, Area2, Pib2, PontoTuristico2);

    return 0;
}