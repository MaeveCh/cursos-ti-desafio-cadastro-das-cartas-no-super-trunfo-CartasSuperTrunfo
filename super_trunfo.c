#include <stdio.h>

int main(){
     // Carta 1
     int populacao, turismo;
     float pib, area;
     char inicial;
     char carta, nome[20];
     

    printf("Digite o código da carta: \n");
     // A letra do Estado seguida de um número de 01 À 04, ex: A01
     scanf("%s", &carta);

     printf("Digite o nome da Cidade: \n");
     // Use um nome próprio, ex: Niterói
     scanf("%s\n", &nome);

     printf("Digite a inicial: \n");
     // Somente uma Letra/Anagrama, que seja de A a H, para nomear o Estado, ex: Estado RJ - A
     scanf("%c\n", &inicial);

     printf("Digite a quantidade de habitantes: \n");
     // Quantas pessoas moram neste território, ex: 481.749
     scanf("%d\n", &populacao);

     printf("Digite o número de pontos turísticos na Cidade: \n");
    // Pontos turísticos representado por 'turismo' é um local frequentemente vistado por turistas, ex: 10
     scanf("%d", &turismo);

     printf("Digite o valor Produto Interno Bruto da Cidade: \n");
     //Produto Interno Bruto é o PIB, ele indica a riqueza da Cidade num período definido, ex: 66.349.000.000
     scanf("%f\n", &pib);

     printf("Digite a área em quilômetros quadrados 'km^2': \n");
     // A área em km^2 é a dimensão do território, ou seja, o tamanho dele, ex: 133.757
     scanf("%f\n", &area);


     // Finalização do código Carta 1
      
     printf("O nome da cidade é: %s - O código da carta é: %s\n", nome, carta);

     printf("O anagrama é: %c\n", inicial);

     printf("O número de habitantes é: %d - O número de pontos turísticos é: %d", populacao, turismo);

     printf("O PIB da cidade é: %f - A área da cidade é: %f", pib, area);


    return 0;

}
