#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Batalha de Cartas no Super Trunfo.
// Objetivo: exibir novas propriedadse e comparar cartas
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis da Carta 1
  char estado[2], cod[4], cidade[15];
  float area, prod_int, densidade, prod_int_capta, superpoder;
  int turismo;
  unsigned long int populacao;
  
  
  // Variáveis da Carta 2
  char estado2[2], cod2[4], cidade2[15];
  float area2, prod_int2, densidade2, prod_int_capta2, superpoder2;
  int turismo2;
  unsigned long int populacao2;
  
  
  
  // Área para entrada de dados
  // *Entrada de dados para a Carta 1*
  printf("Vamos cadastrar a Carta 1\n");
  printf("Digite aqui a letra referente ao estado:\n");
  scanf("%s", &estado);

  printf("Digite aqui o código da cidade:\n" );
  scanf("%s", &cod);

  printf("Digite aqui o nome da cidade:\n");
  scanf("%s", &cidade);

  printf("Digite aqui a população da cidade:\n");
  scanf("%lu", &populacao);

  printf("Digite aqui a área da cidade:\n");
  scanf("%f", &area);

  printf("Digite aqui o PIB da cidade:\n");
  scanf("%f", &prod_int);

  printf("Digite aqui o número de pontos turísticos:\n");
  scanf("%d", &turismo);

  // *Entrada de dados para a Carta 2*
  
  printf("Vamos cadastrar a Carta 2\n");
  printf("Digite aqui a letra referente ao estado:\n");
  scanf("%s", &estado2);

  printf("Digite aqui o código da cidade:\n" );
  scanf("%s", &cod2);

  printf("Digite aqui o nome da cidade:\n");
  scanf("%s", &cidade2);

  printf("Digite aqui a população da cidade:\n");
  scanf("%lu", &populacao2);

  printf("Digite aqui a área da cidade:\n");
  scanf("%f", &area2);

  printf("Digite aqui o PIB da cidade:\n");
  scanf("%f", &prod_int2);

  printf("Digite aqui o número de pontos turísticos:\n");
  scanf("%d", &turismo2);

  // Cálculos Carta 1
  densidade = (float) populacao / area;
  prod_int_capta = (float) prod_int / populacao;
  superpoder = (float)  populacao + area + prod_int + turismo + (1/densidade) + prod_int_capta; 

  // Cálculos Carta 2
  densidade2 = (float) populacao2 / area2;
  prod_int_capta2 = (float) prod_int2 / populacao2;
  superpoder2 = (float)  populacao2 + area2 + prod_int2 + turismo2 + (1/densidade2) + prod_int_capta2; 
  
 
  // Área para exibição dos dados da cidade
  
  
  printf("Esta é sua Carta 1 \n");
  printf(
  "- Estado: %s \n"
  "- Código: %s \n"
  "- Nome da Cidade: %s \n"
  "- População: %lu \n"
  "- Área: %f km² \n"
  "- PIB: %f bilhões de reais \n"
  "- Número de Pontos Turísticos: %d \n"
  "- Densidade Populacional: %f \n"
  "- PIB per capita: %f \n"
  "- SUPERPODER: %f \n \n",
  estado, 
  cod, 
  cidade,
  populacao,
  area, 
  prod_int, 
  turismo,
  densidade, 
  prod_int_capta,
  superpoder
  
  );

  printf("Esta é sua Carta 2 \n");
  printf(
  "- Estado: %s \n"
  "- Código: %s \n"
  "- Nome da Cidade: %s \n"
  "- População: %lu \n"
  "- Área: %f km² \n"
  "- PIB: %f bilhões de reais \n"
  "- Número de Pontos Turísticos: %d \n"
  "- Densidade Populacional: %f \n"
  "- PIB per capita: %f \n"
  "- SUPERPODER: %f \n \n",
  estado2, 
  cod2, 
  cidade2,
  populacao2, 
  area2, 
  prod_int2, 
  turismo2,
  densidade2, 
  prod_int_capta2, 
  superpoder2
  
);
// comparações
    printf("Resultado da Comparação Carta 1 com Carta 2 \n");
    printf("Resposta 1 a carta 1 vence para 0 a carta 1 perde \n \n");
    printf("População carta 1 venceu : %d\n", populacao < populacao2);
    printf("Área carta 1 venceu : %d\n", area < area2);
    printf("PIB carta 1 venceu: %d\n", prod_int < prod_int2);
    printf("Número de pontos turísticos carta 1 venceu: %d\n", turismo < turismo2);
    printf("Densidade Populacional carta 1 venceu: %d\n", densidade < densidade2);
    printf("PIB per capta carta 1 venceu: %d\n", prod_int_capta <  prod_int_capta2);
    printf("SUPERPODER carta 1 venceu: %d\n", superpoder <  superpoder2);

    printf("Parabéns ao vencedor !!");


return 0;
} 



