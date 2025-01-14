#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //Chamando o nome do desafio
    printf("Desafio Super Trunfo - Países\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Adicionando as variaveis
    //Teste com valores fixos
    char codigodacidade[5] = "A03";
    char nome[20] = "Belo Horizonte";
    float populacao = 2.316;
    float area = 331.4;
    float pib = 41818.32;
    int pontosturisticos = 20;

    printf("O codigo da Cidade é: %s \n", codigodacidade);
    printf("O nome da cidade é: %s \n", nome);
    printf("A cidade possui: %.3f milhões de habitantes.\n", populacao);
    printf("A aréa da cidade é de %.1f Km².\n", area);
    printf("O PIB da cidade é de: R$ %.2f \n", pib);
    printf("Essa cidade possui: %d pontos turisticos.\n", pontosturisticos);
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
