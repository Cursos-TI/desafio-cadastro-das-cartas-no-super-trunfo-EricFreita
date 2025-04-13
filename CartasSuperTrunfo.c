#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // Declaração das variaveis.
    char estado[5], cod_carta[5], nome_cidade[50];
    int populacao, pontos_turisticos;
    float area_cidade, pib;

    //Mensagem de boas vindas
    printf("Bem vindo ao Jogo Super Trunfo! \n");
    
    //Usuario informa os dados da carta
    printf("Para começarmos... \n")
    printf("Mencione um estado do Brasil de sua preferência: \n");
    scanf("%s", estado);
    
    printf("Informe um código para esta carta: (ex: A01, A02...) \n");
    scanf("%s", cod_carta);
        
    printf("Escolha uma cidade do estado informado: \n");
    scanf("%s", nome_cidade);
        
    printf("Informe o numero de habitantes: \n");
    scanf("%d", &populacao);
        
    printf("Quantos pontos turisticos ha nesta cidade? \n");
    scanf("%d", &pontos_turisticos);
        
    printf("Qual a area em m³ desta cidade? \n");
    scanf("%f", &area_cidade);
        
    printf("Qual o PIB desta cidade? \n");
    scanf("%f", &pib);
        
    //Mostra ao usuario todas as opçoes escolhidas
    printf("A primeira carta é: \n");
    
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s \n", cod_carta);
    printf("Cidade: %s \n", nome_cidade);
    printf("Número de Habitantes: %d \n", populacao);
    printf("Pontos Turisticos: %d \n", pontos_turisticos);
    printf("Área por m³: %f\n", area_cidade);
    printf("PIB: %f \n", pib);

    //Solicita a carta seguinte
    printf("Escolha a segunda Carta: \n")
    printf("Mencione um estado do Brasil de sua preferência: \n");
    scanf("%s", estado);
    
    printf("Informe um código para esta carta: (ex: A01, A02...) \n");
    scanf("%s", cod_carta);
        
    printf("Escolha uma cidade do estado informado: \n");
    scanf("%s", nome_cidade);
        
    printf("Informe o numero de habitantes: \n");
    scanf("%d", &populacao);
        
    printf("Quantos pontos turisticos ha nesta cidade? \n");
    scanf("%d", &pontos_turisticos);
        
    printf("Qual a area em m³ desta cidade? \n");
    scanf("%f", &area_cidade);
        
    printf("Qual o PIB desta cidade? \n");
    scanf("%f", &pib);

    //Mostra ao usuario as opções escolhidas
    printf("A segunda carta é: \n");

    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s \n", cod_carta);
    printf("Cidade: %s \n", nome_cidade);
    printf("Número de Habitantes: %d \n", populacao);
    printf("Pontos Turisticos: %d \n", pontos_turisticos);
    printf("Área por m³: %f\n", area_cidade);
    printf("PIB: %f \n", pib);

    return 0;
}
