#include <stdio.h>
int main(){
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

//32 variaveis de cada pois são 32 cidades, mas so 8 variáveis estado pois não e necessário mais.
//nomes com espaço não estão funcionando, para que funcione recomendo o uso de "-", por exemplo: São-Paulo, Rio-de-Janeiro
//Só utilizei printf e scanf, se era pra ter feito de outra maneira eu não percebi.
    char estado, estado2, estado3, estado4,estado5,estado6,estado7,estado8;
    char codigo[50],codigo2[50],codigo3[50],codigo4[50],codigo5[50],codigo6[50],codigo7[50],codigo8[50],codigo9[50],codigo10[50],codigo11[50],codigo12[50],codigo13[50],codigo14[50],codigo15[50],codigo16[50],codigo17[50],codigo18[50],codigo19[50],codigo20[50],codigo21[50],codigo22[50],codigo23[50],codigo24[50],codigo25[50],codigo26[50],codigo27[50],codigo28[50],codigo29[50],codigo30[50],codigo31[50],codigo32[50];
    char nome[50],nome2[50],nome3[50],nome4[50],nome5[50],nome6[50],nome7[50],nome8[50],nome9[50],nome10[50],nome11[50],nome12[50],nome13[50],nome14[50],nome15[50],nome16[50],nome17[50],nome18[50],nome19[50],nome20[50],nome21[50],nome22[50],nome23[50],nome24[50],nome25[50],nome26[50],nome27[50],nome28[50],nome29[50],nome30[50],nome31[50],nome32[50];
    int populacao,populacao2,populacao3,populacao4,populacao5,populacao6,populacao7,populacao8,populacao9,populacao10,populacao11,populacao12,populacao13,populacao14,populacao15,populacao16,populacao17,populacao18,populacao19,populacao20,populacao21,populacao22,populacao23,populacao24,populacao25,populacao26,populacao27,populacao28,populacao29,populacao30,populacao31,populacao32;
    int area,area2,area3,area4,area5,area6,area7,area8,area9,area10,area11,area12,area13,area14,area15,area16,area17,area18,area19,area20,area21,area22,area23,area24,area25,area26,area27,area28,area29,area30,area31,area32;
    float pib,pib2,pib3,pib4,pib5,pib6,pib7,pib8,pib9,pib10,pib11,pib12,pib13,pib14,pib15,pib16,pib17,pib18,pib19,pib20,pib21,pib22,pib23,pib24,pib25,pib26,pib27,pib28,pib29,pib30,pib31,pib32;
    int pt,pt2,pt3,pt4,pt5,pt6,pt7,pt8,pt9,pt10,pt11,pt12,pt13,pt14,pt15,pt16,pt17,pt18,pt19,pt20,pt21,pt22,pt23,pt24,pt25,pt26,pt27,pt28,pt29,pt30,pt31,pt32;
    printf("Cadastro\n");
    printf("Qual o estado ? ");
    scanf("%c", &estado);
    printf("Qual o código da cidade ? ");
    scanf("%s", &codigo);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo2);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome2);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao2);
    printf("Qual a área da cidade? ");
    scanf("%i", &area2);
    printf("Qual o PIB da cidade ? ");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf("%i", &pt2);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo3);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome3);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao3);
    printf("Qual a área da cidade? ");
    scanf("%i", &area3);
    printf("Qual o PIB da cidade ? ");
    scanf("%f", &pib3);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf("%i", &pt3);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo4);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome4);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao4);
    printf("Qual a área da cidade? ");
    scanf("%i", &area4);
    printf("Qual o PIB da cidade ? ");
    scanf("%f", &pib4);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf("%i", &pt4);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado2);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo5);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome5);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao5);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area5);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib5);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt5);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado2);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo6);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome6);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao6);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area6);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib6);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt6);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado2);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo7);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome7);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao7);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area7);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib7);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt7);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado2);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo8);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome8);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao8);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area8);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib8);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt8);

    printf("\nNovo Cadastro\n");    
    printf("Qual o estado ? ");
    scanf(" %c", &estado3);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo9);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome9);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao9);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area9);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib9);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt9);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado3);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo10);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome10);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao10);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area10);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib10);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt10);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado3);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo11);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome11);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao11);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area11);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib11);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt11);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado3);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo12);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome12);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao12);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area12);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib12);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt12);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado4);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo13);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome13);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao13);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area13);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib13);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt13);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado4);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo14);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome14);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao14);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area14);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib14);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt14);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado4);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo15);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome15);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao15);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area15);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib15);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt15);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado4);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo16);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome16);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao16);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area16);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib16);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt16);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado5);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo17);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome17);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao17);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area17);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib17);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt17);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado5);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo18);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome18);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao18);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area18);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib18);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt18);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado5);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo19);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome19);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao19);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area19);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib19);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt19);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado5);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo20);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome20);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao20);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area20);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib20);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt20);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado6);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo21);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome21);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao21);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area21);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib21);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt21);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado6);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo22);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome22);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao22);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area22);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib22);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt22);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado6);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo23);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome23);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao23);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area23);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib23);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt23);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado6);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo24);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome24);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao24);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area24);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib24);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt24);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado7);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo25);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome25);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao25);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area25);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib25);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt25);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado7);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo26);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome26);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao26);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area26);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib26);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt26);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado7);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo27);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome27);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao27);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area27);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib27);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt27);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado7);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo28);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome28);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao28);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area28);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib28);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt28);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado8);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo29);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome29);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao29);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area29);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib29);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt29);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado8);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo30);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome30);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao30);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area30);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib30);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt30);

    printf("\nNovo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado8);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo31);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome31);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao31);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area31);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib31);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt31);

    printf("\nÚltimo Cadastro\n");
    printf("Qual o estado ? ");
    scanf(" %c", &estado8);
    printf("Qual o código da cidade ? ");
    scanf(" %s", &codigo32);
    printf("Qual o nome da cidade ? ");
    scanf("%s", &nome32);
    printf("Qual a população da cidade ? ");
    scanf(" %i", &populacao32);
    printf("Qual a área da cidade? ");
    scanf(" %i", &area32);
    printf("Qual o PIB da cidade ? ");
    scanf(" %f", &pib32);
    printf("Quantos pontos turísticos tem na cidade ? ");
    scanf(" %i", &pt32);

    printf("\nCidade número 1\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado, codigo, nome, populacao, area, pib, pt);
    
    printf("\nCidade número 2\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado, codigo2, nome2, populacao2, area2, pib2, pt2);
    
    printf("\nCidade número 3\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado, codigo3, nome3, populacao3, area3, pib3, pt3);
    
    printf("\nCidade número 4\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado, codigo4, nome4, populacao4, area4, pib4, pt4);
    
    printf("\nCidade número 5\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado2, codigo5, nome5, populacao5, area5, pib5, pt5);
    
    printf("\nCidade número 6\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado2, codigo6, nome6, populacao6, area6, pib6, pt6);
    
    printf("\nCidade número 7\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado2, codigo7, nome7, populacao7, area7, pib7, pt7);
    
    printf("\nCidade número 8\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado2, codigo8, nome8, populacao8, area8, pib8, pt8);
    
    printf("\nCidade número 9\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado3, codigo9, nome9, populacao9, area9, pib9, pt9);
    
    printf("\nCidade número 10\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado3, codigo10, nome10, populacao10, area10, pib10, pt10);
    
    printf("\nCidade número 11\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado3, codigo11, nome11, populacao11, area11, pib11, pt11);
    
    printf("\nCidade número 12\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado3, codigo12, nome12, populacao12, area12, pib12, pt12);
    
    printf("\nCidade número 13\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado4, codigo13, nome13, populacao13, area13, pib13, pt13);
    
    printf("\nCidade número 14\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado4, codigo14, nome14, populacao14, area14, pib14, pt14);
    
    printf("\nCidade número 15\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado4, codigo15, nome15, populacao15, area15, pib15, pt15);
    
    printf("\nCidade número 16\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado4, codigo16, nome16, populacao16, area16, pib16, pt16);
    
    printf("\nCidade número 17\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado5, codigo17, nome17, populacao17, area17, pib17, pt17);
    
    printf("\nCidade número 18\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado5, codigo18, nome18, populacao18, area18, pib18, pt18);
    
    printf("\nCidade número 19\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado5, codigo19, nome19, populacao19, area19, pib19, pt19);
    
    printf("\nCidade número 20\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado5, codigo20, nome20, populacao20, area20, pib20, pt20);
    
    printf("\nCidade número 21\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado6, codigo21, nome21, populacao21, area21, pib21, pt21);
    
    printf("\nCidade número 22\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado6, codigo22, nome22, populacao22, area22, pib22, pt22);
    
    printf("\nCidade número 23\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado6, codigo23, nome23, populacao23, area23, pib23, pt23);
    
    printf("\nCidade número 24\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado6, codigo24, nome24, populacao24, area24, pib24, pt24);
    
    printf("\nCidade número 25\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado7, codigo25, nome25, populacao25, area25, pib25, pt25);
    
    printf("\nCidade número 26\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado7, codigo26, nome26, populacao26, area26, pib26, pt26);
    
    printf("\nCidade número 27\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado7, codigo27, nome27, populacao27, area27, pib27, pt27);
    
    printf("\nCidade número 28\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado7, codigo28, nome28, populacao28, area28, pib28, pt28);
    
    printf("\nCidade número 29\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado8, codigo29, nome29, populacao29, area29, pib29, pt29);
    
    printf("\nCidade número 30\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado8, codigo30, nome30, populacao30, area30, pib30, pt30);
    
    printf("\nCidade número 31\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado8, codigo31, nome31, populacao31, area31, pib31, pt31);
    
    printf("\nCidade número 32\n");
    printf(" Estado: %c\n Código da cidade: %s\n Nome da cidade: %s\n População: %i habitantes\n Área da cidade: %i kilometros quadrados\n PIB da cidade: %f Bilhões de R$\n Quantidade de pontos turísticos: %i\n",estado8, codigo32, nome32, populacao32, area32, pib32, pt32);
    
    
return 0;


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 }