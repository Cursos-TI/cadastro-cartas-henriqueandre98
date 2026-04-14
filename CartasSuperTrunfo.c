#include <stdio.h>

int main(){

    // Desafio Super Trunfo em C : Nivel novato
    // Tema : Cadastro de cartas referentes à cidades


    // Variaveis existentes

    char Cidade_carta01[3],Cidade_carta02[3],Codigo_carta01[5], Codigo_carta02[5], Nome_cidade01[50], Nome_cidade02[50]; 
    int Populacao_carta01, populacao_carta02, Pontos_turisticos01, Pontos_turisticos02;
    float Area_km2_carta01, Area_km2_carta02, PIB_carta01, PIB_carta02, densidade_p01, densidade_p02, pib_p_capita01, pib_p_capita02;
    

    // Definindo dados das cartas //
    // Carta 1 :
    
    printf("Carta 01 \n");
 
    printf("Digite apenas a letra inicial que represente um dos oito estados: \n");
    scanf(" %s ", Cidade_carta01);        

    printf("Digite o codigo da carta (Ex: Letra inicial seguida de numero de 01 a 04): \n");
    scanf(" %s ", Codigo_carta01);

    printf("Digite o nome da cidade desejada: \n");
    scanf(" %[^\n] ", Nome_cidade01);

    printf("Digite a populacao total da cidade: \n");
    scanf(" %d ", &Populacao_carta01);

    printf("Digite a area em km2 da cidade: \n");
    scanf(" %f ", &Area_km2_carta01);

    printf("Digite o PIB total da cidade: \n");
    scanf(" %f ", &PIB_carta01);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d ", &Pontos_turisticos01);

    // Carta 2:

    printf("Carta 02 \n");
      
    printf("Digite apenas a letra inicial que represente um dos oito estados: \n");
    scanf(" %s ", Cidade_carta02);        

    printf("Digite o codigo da carta (Ex: Letra inicial seguida de numero de 01 a 04): \n");
    scanf(" %s ", Codigo_carta02);

    printf("Digite o nome da cidade desejada: \n");
    scanf(" %[^\n]", Nome_cidade02);

    printf("Digite a populacao total da cidade: \n");
    scanf(" %d ", &populacao_carta02);

    printf("Digite a area em km2 da cidade: \n");
    scanf(" %f ", &Area_km2_carta02);

    printf("Digite o PIB total da cidade: \n");
    scanf(" %f ", &PIB_carta02);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d ", &Pontos_turisticos02);
    
    // Calculando a densidade populacional e Pib per capita:

    // Carta 1:

    densidade_p01 = (float)Populacao_carta01 / Area_km2_carta01;

    pib_p_capita01 = PIB_carta01 / (float)Populacao_carta01;

    // Carta 2:

    densidade_p02 = (float)populacao_carta02 / Area_km2_carta02;

    pib_p_capita02 = PIB_carta02 / (float)populacao_carta02;    
    

    // Saida de dados digitados:
        
    // Carta 1:

    printf("Carta 01 \n");
    printf("Cidade: %s\n", Cidade_carta01);
    printf("Código da cidade: %s\n", Codigo_carta01);
    printf("Nome da cidade: %s\n", Nome_cidade01);
    printf("População total da cidade: %d\n", Populacao_carta01);
    printf("Área em km2 da cidade: %.2f\n", Area_km2_carta01);
    printf("PIB Bruto da cidade: %.2f\n", PIB_carta01);
    printf("Quantidade de pontos turisticos da cidade: %d\n", Pontos_turisticos01);
    printf("Densidade populacional da cidade: %.2f hab/km2\n", densidade_p01);
    printf("PIB per Capita da cidade: %.2f reais/hab\n", pib_p_capita01);

    // Carta 2:

    printf("Carta 02 \n");
    printf("Cidade: %s\n", Cidade_carta02);
    printf("Código da cidade: %s\n", Codigo_carta02);
    printf("Nome da cidade: %s\n", Nome_cidade02);
    printf("População total da cidade: %d\n", populacao_carta02);
    printf("Área em km2 da cidade: %.2f\n", Area_km2_carta02);
    printf("PIB Bruto da cidade: %.2f\n", PIB_carta02);
    printf("Quantidade de pontos turisticos da cidade: %d\n", Pontos_turisticos02); 
    printf("Densidade populacional da cidade: %.2f hab/km2\n", densidade_p02);
    printf("PIB per Capita da cidade: %.2f reais/hab\n", pib_p_capita02);

       
    

        
        
        
        return 0;
}
            
