#include <stdio.h>

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


// Definição da estrutura das cartas
struct Carta {
    char estado[50];
    char cidade[50];
    char codigo[7];
    int populacao;
    float area;
    float PIB;
    int turisticos;

};


/*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2. variavel3)

   %d: Imprime um inteiro no formato decimal.
   %i: Equivale a %d.
   %f: Imprime um número de ponto flutuante no formato padrão.
   %e: Imprime um número de ponto flutuante na notação científica.
   %c: Imprime um único caractere.
   %s: Imprime uma cadeia (string) de caracteres.
   
*/

int main(){

    struct Carta carta1, carta2;

    // Carta 1

    printf("Cadastre sua primeira carta! \n");

    printf("Digite seu Estado: \n");
    scanf("%s", carta1.estado);

    printf("Digite sua Cidade: \n");
    scanf("%s", carta1.cidade);

    printf("Crie seu código com o UF de seu estado + DDD de sua cidade: \n");
    scanf("%s", carta1.codigo);

    printf("Digite a população de sua cidade: \n");
    scanf("%d", &carta1.populacao);

    printf("Digite a quantidade de pontos turísticos de sua cidade: \n");
    scanf("%d", &carta1.turisticos);

    printf("Digite área de sua cidade: \n");
    scanf("%f", &carta1.area);

    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", &carta1.PIB);


    // Carta 2

    printf("Cadastre sua segunda carta! \n");

    printf("Digite seu Estado: \n");
    scanf("%s", carta2.estado);

    printf("Digite sua Cidade: \n");
    scanf("%s", carta2.cidade);

    printf("Crie seu código com o UF de seu estado + DDD de sua cidade: \n");
    scanf("%s", carta2.codigo);

    printf("Digite a população de sua cidade: \n");
    scanf("%d", &carta2.populacao);

    printf("Digite a quantidade de pontos turísticos de sua cidade: \n");
    scanf("%d", &carta2.turisticos);

    printf("Digite área de sua cidade: \n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", &carta2.PIB);


    // Exibindo as cartas

    printf("CARTA 01 \n");
    printf("Estado: %s \n", carta1.estado);
    printf("Cidade: %s \n", carta1.cidade);
    printf("Código: %s \n", carta1.codigo);
    printf("População: %d \n", carta1.populacao);
    printf("Pontos Turísticos: %d \n", carta1.turisticos);
    printf("Área: %f \n", carta1.area);
    printf("PIB: %f \n", carta1.PIB);

    printf("CARTA 02 \n");
    printf("Estado: %s \n", carta2.estado);
    printf("Cidade: %s \n", carta2.cidade);
    printf("Código: %s \n", carta2.codigo);
    printf("População: %d \n", carta2.populacao);
    printf("Pontos Turísticos: %d \n", carta2.turisticos);
    printf("Área: %f \n", carta2.area);
    printf("PIB: %f \n", carta2.PIB);


    return 0;



}