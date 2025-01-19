#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Teste Valber

int main() {

    //Chamando o nome do desafio
    printf("Desafio Super Trunfo - Países\n");
    //Adicionando as variaveis
    char estado1, estado2;
    char codigodacidade1[5], codigodacidade2[5];
    char nome1[20], nome2[20];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    //Adicionando a variavel de densidade populacional e PIB per capita
    float DensidadePopulacional1, DensidadePopulacional2;
    float PibPerCapita1, PibPerCapita2;
    
    // Cadastro das Cartas:
    // Pedir ao usuario para informar os dados da cidade, utilizando o printf para fazer a pergunta, e o scanf para armazenar a resposta.
    
    //Adicionei um printf para o usuario se orientar a informar os dados da cidade de forma respectiva
    printf("Adicione os dados das cidades em ordem, primeira cidade depois a segunda cidade\n");
    printf("Qual o codigo do primeiro estado e do segundo estado?\n");
    scanf("%c %c", &estado1, &estado2);

    printf("Qual o código da primeira cidade e da segunda cidade?\n");
    scanf("%s %s", codigodacidade1, codigodacidade2);

    printf("Qual o nome da primeira cidade e da segunda cidade?\n");
    //Alterado o formato scanf para fgets, para concluir o desafio com nome composto e adicionando getchar
    getchar();
    fgets(nome1,20,stdin);
    fgets(nome2,20,stdin);

    printf("Quantos habitantes cada cidade possui?\n");
    scanf("%f %f", &populacao1, &populacao2);

    printf("Qual o tamanho da aréa das duas cidades?\n");
    scanf("%f %f", &area1, &area2);

    printf("Qual o PIB das duas cidades?\n");
    scanf("%f %f", &pib1, &pib2);

    printf("Quantos pontos turisticos cada cidade possui?\n");
    scanf("%d %d", &pontosturisticos1, &pontosturisticos2);

    //Dividindo a população pela area da cidade para ter a densidade populacional de cada uma das cidades
    DensidadePopulacional1 = populacao1 / area1;
    DensidadePopulacional2 = populacao2 / area2;
    //Dividindo o PIB pela população para obter o PIB per capita de cada uma das cidades
    PibPerCapita1 = pib1 / populacao1;
    PibPerCapita2 = pib2 / populacao2;
    
    // Exibição dos Dados das Cartas:
    // Exibando os valores inseridos para cada atributo da cidade, um por linha.
    // Reposicionando o printf com as informações de saida, que foram utilizando no commit com valores fixos.
    // Agora serão exibidos os dados da cidade após o usuário adicionar os dados das cartas.

    // Vizualização de dados da primeira cidade
    printf("**************Os dados da Primeira cidade são:******************\n");
    printf("Letra do Estado: %c \n", estado1);
    printf("O codigo da cidade é: %s \n", codigodacidade1);
    printf("O nome da cidade é: %s", nome1);
    printf("A cidade possui: %.2f milhões de habitantes.\n", populacao1);
    printf("A aréa da cidade é de %.1f Km².\n", area1);
    printf("O PIB da cidade é de: R$%.2f \n", pib1);
    printf("Essa cidade possui: %d pontos turisticos.\n", pontosturisticos1);
    //Colocando o printf para que o terminal calcule a densidade populacional e também calcule o PIB per capita
    printf("A densidade populacional é de: %.2f milhões de habitantes \n", DensidadePopulacional1);
    printf("O PIB per capita dessa cidade é de: %.2f mil \n", PibPerCapita1);

    // Vizualização de dados da primeira cidade
    printf("**************Os dados da Segunda cidade são:******************\n");
    printf("Letra do Estado: %c \n", estado2);
    printf("O codigo da cidade é: %s \n", codigodacidade2);
    printf("O nome da cidade é: %s", nome2);
    printf("A cidade possui: %.2f milhões de habitantes.\n", populacao2);
    printf("A aréa da cidade é de %.1f Km².\n", area2);
    printf("O PIB da cidade é de: R$%.2f \n", pib2);
    printf("Essa cidade possui: %d pontos turisticos.\n", pontosturisticos2);
    //Colocando o printf para que o terminal calcule a densidade populacional e também calcule o PIB per capita
    printf("A densidade populacional é de: %.2f milhões de habitantes \n", DensidadePopulacional2);
    printf("O PIB per capita dessa cidade é de: %.2f mil \n", PibPerCapita2);



    return 0;
}