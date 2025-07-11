#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char idCarta[10];
    char estado[3];
    char cidade[50];
    char pais[50];
    double populacao;
    double area;
    double pib;
    short pontosviagens; // usei o short para limitar o número de pontos de viagens

    printf("Bem-vindo ao sistema de cadastro de cartas!\n");

    printf("Digite o ID da Carta1 (máximo 9 caracteres): ");
    scanf("%s", idCarta);

    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%s", estado);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade);
    
    printf("Digite o país: ");
    scanf(" %[^\n]", pais); 
    
    printf("Digite a população: ");
    scanf("%lf", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%lf", &area);

    printf("Digite o PIB (em R$): ");
    scanf("%lf", &pib);

    printf("Digite os pontos de viagens (score): ");
    scanf("%hd", &pontosviagens);


    printf("\nCadastro realizado com sucesso!\n");

    char idCarta2[10];
    char estado2[3];
    char cidade2[50];
    char pais2[50];
    double populacao2;
    double area2;
    double pib2;
    short pontosviagens2;

    printf("\nAgora, vamos cadastrar a segunda carta.\n");

    printf("Digite o ID da Carta2 (máximo 9 caracteres): ");
    scanf("%s", idCarta2);

    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%s", estado2);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite o país: ");
    scanf(" %[^\n]", pais2); 
    
    printf("Digite a população: ");
    scanf("%lf", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB (em R$): ");
    scanf("%lf", &pib2);

    printf("Digite os pontos de viagens (score): ");
    scanf("%hd", &pontosviagens2);



    printf("\nCadastro realizado com sucesso!\n");

    printf("Dados da Carta1:\n");
    printf("ID da Carta: %s\n", idCarta);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("País: %s\n", pais);
    printf("População: %.2lf\n", populacao);
    printf("Área: %.2lf km²\n", area);
    printf("PIB: R$ %.2lf\n", pib);
    printf("Pontos de Viagens: %hd\n", pontosviagens);

    printf("\nDados da Carta2:\n");

    printf("Dados da Carta2:\n");
    printf("ID da Carta: %s\n", idCarta2);
    printf("ID da Carta: %s\n", idCarta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("País: %s\n", pais2);
    printf("População: %.2lf\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: R$ %.2lf\n", pib2);
    printf("Pontos de Viagens: %hd\n", pontosviagens2);


    printf("Obrigado por cadastrar sua carta!\n");
    printf("Pressione Enter para sair...");
    scanf("%*c");

    return 0;
}