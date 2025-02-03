#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    char codigo[50];
    char nome[50];
    int populacao;
    int area;
    int pib;
    int pt;

    printf("Qual o estado ? ");
    scanf("%c", &estado);
    printf("Qual o código da cidade ? ");
    scanf("%s", &codigo);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao);
    printf("Qual a área da cidade? ");
    scanf("%i", &area);
    printf("Qual o PIB da cidade ? ");
    scanf("%i", &pib);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf("%i", &pt);
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %c\n População: %i habitantes\n Área da cidade: %i metros quadrados\n PIB da cidade: %i R$\n Quantidade de pontos turísticos: %i\n",estado, codigo, nome, populacao, area, pib, pt);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}