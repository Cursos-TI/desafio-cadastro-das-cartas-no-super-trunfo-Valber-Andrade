#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Teste Valber

int main() {

    //Chamando o nome do desafio
    printf("Desafio Super Trunfo - Países\n");
    //Adicionando as variaveis
    char codigodacidade[5];
    char nome[20];
    char estado;
    float populacao;
    float area;
    float pib;
    int pontosturisticos;
    //Adicionando a variavel de densidade populacional e PIB per capita
    float DensidadePopulacional;
    float PibPerCapita;
    
    // Cadastro das Cartas:
    // Pedir ao usuario para informar os dados da cidade, utilizando o printf para fazer a pergunta, e o scanf para armazenar a resposta.

    printf("Qual a letra do estado?\n");
    scanf("%c", &estado);

    printf("Qual o código da cidade?\n");
    scanf("%s", codigodacidade);

    printf("qual o nome da cidade?\n");
    //Alterado o formato scanf para fgets, para concluir o desafio com nome composto e adicionando getcharBelo
    getchar();
    fgets(nome,20,stdin);

    printf("Quantos habitantes a cidade possui?\n");
    scanf("%f", &populacao);

    printf("Qual o tamanho da aréa dessa cidade?\n");
    scanf("%f", &area);

    printf("Qual o PIB dessa cidade?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos essa cidade possui?\n");
    scanf("%d", &pontosturisticos);

    //Dividindo a população pela area da cidade para ter a densidade populacional
    DensidadePopulacional = populacao / area;
    //Dividindo o PIB pela população para obter o PIB per capita
    PibPerCapita = pib / populacao;
    
    // Exibição dos Dados das Cartas:
    // Exibando os valores inseridos para cada atributo da cidade, um por linha.
    // Reposicionando o printf com as informações de saida, que foram utilizando no commit com valores fixos.
    // Agora serão exibidos após o usuário adicionar os dados das cartas.

    printf("Letra do Estado: %c \n", estado);
    printf("O codigo da cidade é: %s \n", codigodacidade);
    printf("O nome da cidade é: %s", nome);
    printf("A cidade possui: %.2f milhões de habitantes.\n", populacao);
    printf("A aréa da cidade é de %.1f Km².\n", area);
    printf("O PIB da cidade é de: R$%.2f \n", pib);
    printf("Essa cidade possui: %d pontos turisticos.\n", pontosturisticos);
    //Colocando o printf para que o terminal calcule a densidade populacional e também calcule o PIB per capita
    printf("A densidade populacional é de: %.2f milhões de habitantes \n", DensidadePopulacional);
    printf("O PIB per capita dessa cidade é de: %.2f \n", PibPerCapita);


    return 0;
}