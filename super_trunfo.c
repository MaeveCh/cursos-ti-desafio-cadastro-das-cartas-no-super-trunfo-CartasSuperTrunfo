#include <stdio.h>

int main(){
     // Carta 1
     int populacao, pontost;
     float pib, area;
     char estado;
     char carta[10];
     char nome[20] ;


    printf("Digite o código da carta: \n");
     // A letra do Estado seguida de um número de 01 À 04, ex: A01
     scanf("%s", &carta);

     printf("Digite o nome da Cidade: \n");
     // Use um nome próprio, ex: Niterói
     scanf("%s", &nome);

     printf("Digite uma letra de 'A' a 'H': \n");
     // Somente uma Letra/Anagrama para nomear o Estado, ex: Estado RJ - A
     scanf("%c", &estado);

     printf("Digite o número de habitantes: \n");
     // Quantas pessoas moram neste território, ex: 481.749
    scanf("%d", &populacao);

     printf("Digite o número de pontos turísticos: \n");
    // Pontos turísticos representado por 'pontost' é um local frequentemente vistado por turistas, ex: 10
    scanf("%d", &pontost);

     printf("Digite o Produto Interno Bruto da Cidade: \n");
     //Produto Interno Bruto é o PIB, ele indica a riqueza da Cidade num período definido, ex: 66.349.000.000
     scanf("%f", &pib);

     printf("Digite a área em quilômetros quadrados 'km^2': \n");
     // A área em km^2 é a dimensão do território, ou seja, o tamanho dele, ex: 133.757
     scanf("%f", &area);







}
