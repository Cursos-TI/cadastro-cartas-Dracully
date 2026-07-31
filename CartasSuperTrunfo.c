#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis da Carta 1
  char estado[2], cod[4], cidade[15];
  float area, prod_int;
  int turismo, populacao;
  
  // Variáveis da Carta 2
  char estado2[2], cod2[4], cidade2[15];
  float area2, prod_int2;
  int turismo2, populacao2;
  
  // Área para entrada de dados
  // *Entrada de dados para a Carta 1*
  printf("Vamos cadastrar a Carta 1\n");
  printf ("Digite aqui a letra referente ao estado:\n");
  scanf ("%s", &estado);

  printf ("Digite aqui o código da cidade:\n" );
  scanf ("%s", &cod);

  printf ("Digite aqui o nome da cidade:\n");
  scanf ("%s", &cidade);

  printf ("Digite aqui a população da cidade:\n");
  scanf ("%d", &populacao);

  printf ("Digite aqui a área da cidade:\n");
  scanf ("%f", &area);

  printf ("Digite aqui o PIB da cidade:\n");
  scanf ("%f", &prod_int);

  printf ("Digite aqui o número de pontos turísticos:\n");
  scanf ("%d", &turismo);

  // *Entrada de dados para a Carta 2*
  
  printf("Vamos cadastrar a Carta 2\n");
  printf ("Digite aqui a letra referente ao estado:\n");
  scanf ("%s", &estado2);

  printf ("Digite aqui o código da cidade:\n" );
  scanf ("%s", &cod2);

  printf ("Digite aqui o nome da cidade:\n");
  scanf ("%s", &cidade2);

  printf ("Digite aqui a população da cidade:\n");
  scanf ("%d", &populacao2);

  printf ("Digite aqui a área da cidade:\n");
  scanf ("%f", &area2);

  printf ("Digite aqui o PIB da cidade:\n");
  scanf ("%f", &prod_int2);

  printf ("Digite aqui o número de pontos turísticos:\n");
  scanf ("%d", &turismo2);

  // Área para exibição dos dados da cidade
  
  
  printf ("Esta é sua Carta 1 \n");
  printf (
  "- Estado: %s \n"
  "- Código: %s \n"
  "- Nome da Cidade: %s \n"
  "- População: %d \n"
  "- Área: %f km² \n"
  "- PIB: %d bilhões de reais \n"
  "- Número de Pontos Turísticos: %d \n \n",
  estado, 
  cod, 
  cidade,
  populacao, 
  area, 
  prod_int, 
  turismo
  );

  printf ("Esta é sua Carta 2 \n");
  printf (
  "- Estado: %s \n"
  "- Código: %s \n"
  "- Nome da Cidade: %s \n"
  "- População: %d \n"
  "- Área: %f km² \n"
  "- PIB: %d bilhões de reais \n"
  "- Número de Pontos Turísticos: %d \n",
  estado2, 
  cod2, 
  cidade2,
  populacao2, 
  area2, 
  prod_int2, 
  turismo2
  );
return 0;
} 

