#include <stdio.h>

int main(){

  /*
   O desafio consiste na possibilidade do cadastro de ao menos 
   duas cartas, por exemplo:

   Carta 1
   Estado (char): Bahia
   Código (char[]): A01
   Nome da Cidade (char[]): Salvador
   População (int): 12345678
   Área (float): 1234.56 km²
   PIB (float): 8765.54 bilhões de reais
   Número de Pontos Turísticos (int): 90

  */

    char estado, cidade, codigo[50];
    int populacao, turisticos;
    float area, PIB;


    printf("Digite seu Estado: \n");
    scanf("%s", &estado);

    printf("Digite sua Cidade: \n");
    scanf("%s", &cidade);

    printf("Crie seu código com o UF de seu estado + DDD de sua cidade: \n");
    scanf("%s", &codigo);

    printf("Digite a população de sua cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos de sua cidade: \n");
    scanf("%d", &turisticos);

    printf("Digite área de sua cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", &PIB);

    printf("CARTA 01 \n");
    printf("Estado: %s \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("Código: %s \n", codigo);
    printf("População: %d \n", populacao);
    printf("Pontos Turísticos: %d \n", turisticos);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", PIB);


    return 0;

    
 /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2. variavel3)

   %d: Imprime um inteiro no formato decimal.
   %i: Equivale a %d.
   %f: Imprime um número de ponto flutuante no formato padrão.
   %e: Imprime um número de ponto flutuante na notação científica.
   %c: Imprime um único caractere.
   %s: Imprime uma cadeia (string) de caracteres.

   */



