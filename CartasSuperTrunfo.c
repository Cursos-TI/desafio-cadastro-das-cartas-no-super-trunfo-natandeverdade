#include <stdio.h>
#include <string.h> //Biblioteca declarada para que a função 'strcspn' seja lida.

int main () {

    char estado1, estado2, codigo1 [4], codigo2 [4], cidade1 [30], cidade2 [30];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, PIB1, PIB2;

    printf("\nBem vindo ao Super Trunfo!\nVocê terá duas cartas. Abaixo insira os dados de acordo com as perguntas para a primeira carta:\n");
    printf("\nInforme uma letra entre 'A' e 'H' (Representando um dos oito estados):\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta. A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf(" %s", &codigo1);
    getchar(); //Limpa o buffer de entrada para consumir a quebra de linha '\n'.

    printf("Qual é o nome da cidade? \n");
    fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; //Remove a quebra de linha '\n' que o 'fgets' pode incluir na string.

    printf("Qual é o número de habitantes da cidade? \n");
    scanf(" %d", &populacao1);

    printf("Qual a área da cidade em quilômetros quadrados? \n");
    scanf(" %f", &area1);

    printf("Qual o PIB da cidade? \n");
    scanf(" %f", &PIB1);
    getchar();

    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d", &turismo1);

    printf("\nAgora, preencha os dados da segunda carta.\n");
    printf("Informe uma letra entre 'A' e 'H' (Representando um dos oito estados):\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta. A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf(" %s", &codigo2);
    getchar(); //Limpa o buffer de entrada para consumir a quebra de linha '\n'.

    printf("Qual é o nome da cidade? \n");
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; //Remove a quebra de linha '\n' que o 'fgets' pode incluir na string.

    printf("Qual é o número de habitantes da cidade? \n");
    scanf(" %d", &populacao2);

    printf("Qual a área da cidade em quilômetros quadrados? \n");
    scanf(" %f", &area2);

    printf("Qual o PIB da cidade? \n");
    scanf(" %f", &PIB2);
    getchar();

    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d", &turismo2);

    printf("\nEstes são os dados preenchidos para as duas cartas:\n");

    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de pontos turísticos: %d \n", turismo1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de pontos turísticos: %d \n", turismo2);

    return 0;
}
