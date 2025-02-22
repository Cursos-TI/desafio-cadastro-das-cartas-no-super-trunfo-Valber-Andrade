#include <stdio.h>

int main() {
    //Adicionando as variaveis
    char estado1, estado2;
    char codigodacidade1[5], codigodacidade2[5];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PibPerCapita1, PibPerCapita2;
    float SuperPoder1, SuperPoder2;
    int resultado;

    // Cadastro das Cartas:
    //Adicionando o printf para o perguntar os dados da carta ao usuário
    //Adicionando o scanf para armazenar a resposta do usuário

    printf("Adicione os dados das cidades\n");
    printf("Qual o codigo do primeiro estado?\n");
    scanf(" %c", &estado1);
    printf("Qual o codigo do segundo estado?\n");
    scanf(" %c", &estado2);

    printf("Qual o código da primeira cidade?\n");
    scanf("%s", codigodacidade1);
    printf("Qual o código da segunda cidade?\n");
    scanf("%s", codigodacidade2);

    printf("Digite a nome da primeira cidade?\n");
    scanf("%s", nome1);
    printf("Digite a nome da segunda cidade?\n");
    scanf("%s", nome2);

    printf("Quantos habitantes a cidade %s possui?\n", nome1);
    scanf("%lu", &populacao1);
    printf("Quantos habitantes a cidade %s possui?\n", nome2);
    scanf("%lu", &populacao2);

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

    //Densidade Populacional é igual a população dividido pela area da cidade
    DensidadePopulacional1 = populacao1 / area1;
    DensidadePopulacional2 = populacao2 / area2;
    
    //Pib Per Capita é igual ao pib dividido pela população da cidade
    PibPerCapita1 = pib1 / populacao1;
    PibPerCapita2 = pib2 / populacao2;

    //Calculando o super poder das duas cidades
    SuperPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + DensidadePopulacional1 + PibPerCapita1;
    SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + DensidadePopulacional2 + PibPerCapita2;

    // Vizualização de dados da primeira cidade
    printf("\n**************Os dados da Primeira cidade são:******************\n");
    printf("Cidade 1:\n");
    printf("Letra do Estado: %c \n", estado1);
    printf("O codigo da cidade é: %s \n", codigodacidade1);
    printf("O nome da cidade é: %s\n", nome1);
    printf("A cidade possui: %lu milhões de habitantes.\n", populacao1);
    printf("A aréa da cidade é de %.1f Km².\n", area1);
    printf("O PIB da cidade é de: R$%.2f bilhões\n", pib1);
    printf("Essa cidade possui: %d pontos turisticos.\n", pontosturisticos1);
    //Colocando o printf para que o terminal mostre o calculo da densidade populacional e também o calculo do PIB per capita
    printf("A densidade populacional é de: %.2f milhões de habitantes \n", DensidadePopulacional1);
    printf("O PIB per capita dessa cidade é de: R$%.2f milhões \n", PibPerCapita1);
    //Exibindo o valor do Super Poder
    printf("O Super Poder da primeira cidade é de: %.2f \n", SuperPoder1);

    // Vizualização de dados da segunda cidade
    printf("\n**************Os dados da Segunda cidade são:******************\n");
    printf("Cidade 2:\n");
    printf("Letra do Estado: %c \n", estado2);
    printf("O codigo da cidade é: %s \n", codigodacidade2);
    printf("O nome da cidade é: %s\n", nome2);
    printf("A cidade possui: %lu milhões de habitantes.\n", populacao2);
    printf("A aréa da cidade é de %.1f Km².\n", area2);
    printf("O PIB da cidade é de: R$%.2f bilhões\n", pib2);
    printf("Essa cidade possui: %d pontos turisticos.\n", pontosturisticos2);
    //Colocando o printf para que o terminal mostre o calculo da densidade populacional e também o calculo do PIB per capita
    printf("A densidade populacional é de: %.2f milhões de habitantes \n", DensidadePopulacional2);
    printf("O PIB per capita dessa cidade é de: R$%.2f milhões \n", PibPerCapita2);
    //Exibindo o valor do Super Poder
    printf("O Super Poder da segunda cidade é de: %.2f \n", SuperPoder2);

    //Vou comparar os valores dos dados das cidades


    printf("\n*********Comparando os atributos de cada cidade*********\n");
    printf("O terminal respondera com 1 para verdadeiro e 0 para falso\n\n");

    printf("Densidade populacional: %d\n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("A população: %d\n", populacao1 > populacao2);
    printf("A area: %d\n", area1 > area2);
    printf("O PIB: %d\n", pib1 > pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("o PIB per capita: %d\n", PibPerCapita1 > PibPerCapita2);
    printf("O SuperPoder: %d\n", SuperPoder1 > SuperPoder2);
    

    return 0;
}