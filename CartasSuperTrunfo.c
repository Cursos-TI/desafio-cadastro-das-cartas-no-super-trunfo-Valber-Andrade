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
    float populacao;
    float area;
    float pib;
    int pontosturisticos;
    
    // Cadastro das Cartas:
    // Pedir ao usuario para informar os dados da cidade, utilizando o printf para fazer a pergunta, e o scanf para armazenar a resposta.

    printf("Qual o código da cidade?\n");
    scanf("%s" , &codigodacidade);

    printf("Qual o nome da cidade?\n");
    scanf("%s", &nome);

    printf("Quantos habitantes a cidade possui?\n");
    scanf("%f", &populacao);

    printf("Qual o tamanho da aréa dessa cidade?\n");
    scanf("%f", &area);

    printf("Qual o PIB dessa cidade?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos essa cidade possui?\n");
    scanf("%d", &pontosturisticos);
    
    // Exibição dos Dados das Cartas:
    // Exibando os valores inseridos para cada atributo da cidade, um por linha.
    // Reposicionando o printf com as informações de saida, que foram utilizando no commit com valores fixos.
    // Agora serão exibidos após o usuário adicionar os dados das cartas.

    printf("O codigo da Cidade é: %s\n", codigodacidade);
    printf("O nome da cidade é: %s\n", nome);
    printf("A cidade possui: %.3f milhões de habitantes.\n", populacao);
    printf("A aréa da cidade é de %.1f Km².\n", area);
    printf("O PIB da cidade é de: R$ %.2f \n", pib);
    printf("Essa cidade possui: %d pontos turisticos.\n", pontosturisticos);


    return 0;
}
