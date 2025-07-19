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
    short pontosviagens;
    double densidade1 = populacao / area;
    double pibpercapita = pib / populacao;
    double poder = 1 / populacao + area + pib + pontosviagens + densidade1 + pibpercapita;

    printf("Bem-vindo ao sistema de cadastro de cartas!\n");

    printf("Digite o ID da Carta1 (máximo 9 caracteres): ");
    scanf("%s", idCarta);

    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%s", estado);

    printf("Digite a cidade: ");
    scanf(" %s", cidade);
    
    printf("Digite o país: ");
    scanf(" %s", pais); 
    
    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%d", &area);

    printf("Digite o PIB (em R$): ");
    scanf("%d", &pib);

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
    double densidade2 = populacao2 / area2;
    double pibpercapita2 = pib2 / populacao2;
    double poder2 = 1 / populacao2 + area2 + pib2 + pontosviagens2 + densidade2 + pibpercapita2;

    printf("\nAgora, vamos cadastrar a segunda carta.\n");

    printf("Digite o ID da Carta2 (máximo 9 caracteres): ");
    scanf("%s", idCarta2);

    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%s", estado2);

    printf("Digite a cidade: ");
    scanf(" %s", cidade2);
    
    printf("Digite o país: ");
    scanf(" %s", pais2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%d", &area2);

    printf("Digite o PIB (em R$): ");
    scanf("%d", &pib2);

    printf("Digite os pontos de viagens (score): ");
    scanf("%hd", &pontosviagens2);



    printf("\nCadastro realizado com sucesso!\n");

    printf("Dados da Carta1:\n");
    printf("ID da Carta: %s\n", idCarta);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("País: %s\n", pais);
    printf("População: %d\n", populacao);
    printf("Área: %df km²\n", area);
    printf("PIB: R$ %d\n", pib);
    printf("Pontos de Viagens: %hd\n", pontosviagens);
    printf("Densidade: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibpercapita);
    printf("Poder da Carta: %.2f\n", poder);

    printf("\nDados da Carta2:\n");

    printf("Dados da Carta2:\n");
    printf("ID da Carta: %s\n", idCarta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("País: %s\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %d km²\n", area2);
    printf("PIB: R$ %d\n", pib2);
    printf("Pontos de Viagens: %hd\n", pontosviagens2);
    printf("Densidade: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibpercapita2);
    printf("Poder da Carta: %.2f\n", poder2);


    printf("\nComparando os atributos das cartas...\n");
    printf("ID da Carta: %s vs %s\n", idCarta, idCarta2);
    printf("Estado: %s vs %s\n", estado, estado2);
    printf("Cidade: %s vs %s\n", cidade, cidade2);
    printf("País: %s vs %s\n", pais, pais2);
    printf("População: %d vs %d\n", populacao, populacao2);
    printf("Área: %d km² vs %d km²\n", area, area2);
    printf("PIB: R$ %d vs R$ %d\n", pib, pib2);
    printf("Pontos de Viagens: %hd vs %hd\n", pontosviagens, pontosviagens2);
    printf("Densidade: %.2f habitantes/km² vs %.2f habitantes/km²\n", densidade1, densidade2);
    printf("PIB per capita: R$ %.2f vs R$ %.2f\n", pibpercapita, pibpercapita2);
    printf("Poder da Carta: %.2f vs %.2f\n", poder, poder2);

    printf("\nResultado da comparação:\n");
    printf("Carta1: %.2f\n", poder);
    printf("Carta2: %.2f\n", poder2);
    printf("O ganhador é: %s\n", poder > poder2 ? "Carta1" : "Carta2");
    printf("Obrigado por cadastrar sua carta!\n");
    printf("Pressione Enter para sair...");
    int c;
    scanf("%i", &c);

    return 0;
}