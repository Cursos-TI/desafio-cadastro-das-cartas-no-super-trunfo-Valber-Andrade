#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    //Adicionando as variaveis
    char estado1, estado2;
    char codigodacidade1[5], codigodacidade2[5];
    char nome1[20], nome2[20];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PibPerCapita1, PibPerCapita2;
    float SuperPoder1, SuperPoder2;
    int resultado1, resultado2;
    
    // Cadastro das Cartas:
    //Adicionei um printf para o usuario se orientar a informar os dados da cidade
    printf("Adicione os dados das cidades\n");
    printf("Qual o codigo do primeiro estado?\n");
    scanf(" %c", &estado1);
    printf("Qual o codigo do segundo estado?\n");
    scanf(" %c", &estado2);

    printf("Qual o código da primeira cidade?\n");
    scanf("%s", codigodacidade1);
    printf("Qual o código da segunda cidade?\n");
    scanf("%s", codigodacidade2);

    printf("Digite a sigla da primeira cidade?\n");
    scanf("%s", nome1);
    printf("Digite a sigla da segunda cidade?\n");
    scanf("%s", nome2);

    printf("Quantos habitantes a cidade %s possui?\n", nome1);
    scanf("%u", &populacao1);
    printf("Quantos habitantes a cidade %s possui?\n", nome2);
    scanf("%u", &populacao2);

    printf("Qual o tamanho da aréa da cidade de %s?\n", nome1);
    scanf("%f", &area1);
    printf("Qual o tamanho da aréa da cidade de %s?\n", nome2);
    scanf("%f", &area2);

    printf("Qual o PIB da cidade %s?\n", nome1);
    scanf("%f", &pib1);
    printf("Qual o PIB da cidade %s?\n", nome2);
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos a cidade %s possui?\n", nome1);
    scanf("%d", &pontosturisticos1);
    printf("Quantos pontos turisticos a cidade %s possui?\n", nome2);
    scanf("%d", &pontosturisticos2);

    //Dividindo a população pela area da cidade para ter a densidade populacional de cada uma das cidades
    DensidadePopulacional1 = populacao1 / area1;
    DensidadePopulacional2 = populacao2 / area2;
    
    //Dividindo o PIB pela população para obter o PIB per capita de cada uma das cidades
    PibPerCapita1 = pib1 / populacao1;
    PibPerCapita2 = pib2 / populacao2;

    //Calculando o super poder das duas cidades
    SuperPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + DensidadePopulacional1 + PibPerCapita1;
    SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + DensidadePopulacional2 + PibPerCapita2;

    // Exibição dos Dados das Cartas:
    // Exibando os valores inseridos para cada atributo da cidade, um por linha.
    // Reposicionando o printf com as informações de saida, que foram utilizando no commit com valores fixos.
    // Agora serão exibidos os dados da cidade após o usuário adicionar os dados das cartas.

    // Vizualização de dados da primeira cidade
    printf("**************Os dados da Primeira cidade são:******************\n");
    printf("Letra do Estado: %c \n", estado1);
    printf("O codigo da cidade é: %s \n", codigodacidade1);
    printf("O nome da cidade é: %s", nome1);
    printf("A cidade possui: %u milhões de habitantes.\n", populacao1);
    printf("A aréa da cidade é de %.1f Km².\n", area1);
    printf("O PIB da cidade é de: R$%.2f \n", pib1);
    printf("Essa cidade possui: %d pontos turisticos.\n", pontosturisticos1);
    //Colocando o printf para que o terminal calcule a densidade populacional e também calcule o PIB per capita
    printf("A densidade populacional é de: %.2f milhões de habitantes \n", DensidadePopulacional1);
    printf("O PIB per capita dessa cidade é de: %.2f mil \n", PibPerCapita1);
    //Colocando o valor do Super Poder
    printf("O Super Poder da primeira cidade é de: %.2f \n", SuperPoder1);

    // Vizualização de dados da primeira cidade
    printf("**************Os dados da Segunda cidade são:******************\n");
    printf("Letra do Estado: %c \n", estado2);
    printf("O codigo da cidade é: %s \n", codigodacidade2);
    printf("O nome da cidade é: %s", nome2);
    printf("A cidade possui: %.u milhões de habitantes.\n", populacao2);
    printf("A aréa da cidade é de %.1f Km².\n", area2);
    printf("O PIB da cidade é de: R$%.2f \n", pib2);
    printf("Essa cidade possui: %d pontos turisticos.\n", pontosturisticos2);
    //Colocando o printf para que o terminal calcule a densidade populacional e também calcule o PIB per capita
    printf("A densidade populacional é de: %.2f milhões de habitantes \n", DensidadePopulacional2);
    printf("O PIB per capita dessa cidade é de: %.2f mil \n", PibPerCapita2);
    //Colocando o valor do Super Poder
    printf("O Super Poder da segunda cidade é de: %.2f \n", SuperPoder2);

    //Vou comparar os valores dos dados das cidades


    printf("*********Comparando os atributos de cada cidade*********\n");
    printf("O terminal respondera com 1 para verdadeiro e 0 para falso\n");
    printf("Densidade populacional da primeira cidade  > Densidade populacional da primeira cidade: %d\n", DensidadePopulacional1 > DensidadePopulacional2);
    printf("A população da primeira cidade < A população da segunda cidade: %d\n", populacao1 < populacao2);
    printf("A area da primeira cidade < A area da segunda cidade: %d\n", area1 < area2);
    printf("O PIB da primeira cidade > O PIB da segunda cidade: %d\n", pib1 > pib2);
    printf("A primeira cidade tem menos pontos turisticos do que a primeira: %d\n", pontosturisticos1 < pontosturisticos2);
    printf("o PIB per capita da primeira cidade > o PIB per capita da segunda cidade: %d\n", PibPerCapita1 > PibPerCapita2);
    printf("O SuperPoder da primeira cidade > O SuperPoder da segunda cidade? %d\n", SuperPoder1 > SuperPoder2);


    return 0;
}