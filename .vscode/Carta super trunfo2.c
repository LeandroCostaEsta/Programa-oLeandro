#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {

  // === Declarando as variáveis para o jogo ===

  // Código do Estado Carta 1 e Carta 2, respectivamente.
  char estado_carta1, estado_carta2;

  // Código da Carta 1 e Carta 2, respectivamente.
  char codigo_da_carta1[10], codigo_da_carta2[10];

  // Nome da cidade da Carta 1 e Carta 2, respectivamente.
  char nome_da_cidade_carta1[20], nome_da_cidade_carta2[20];

  // Número de habitantes da cidade da Carta 1 e Carta 2, respectivamente.
  unsigned long int populacao_carta1, populacao_carta2;

  // Área da cidade em km² da cidade da Carta 1 e Carta 2, respectivamente.
  float area_em_km2_carta1, area_em_km2_carta2;

  // PIB da cidade da Carta 1 e Carta 2, respectivamente.
  float pib_carta1, pib_carta2;

  // Número de pontos turísticos que a cidade da Carta 1 e Carta 2 possuem, respectivamente.
  int numero_pontos_turisticos_carta1, numero_pontos_turisticos_carta2;

  // Densidade populacional da Carta 1 e Carta 2, respectivamente.
  float densidade_populacional_carta1, densidade_populacional_carta2;

  // PIB per capito da Carta 1 e Carta 2, respectivamente.
  float pib_per_capita_carta1, pib_per_capita_carta2;

  // Super Poder para a Carta 1 e Carta 2, respectivamente.
  float superPoder_carta1, superPoder_carta2;


  // === Declarando as variáveis para comparação de poder

  int resultadoPopulacao;
  int resultadoArea;
  int resultadoPIB;
  int resultadoPontosTuristicos;
  int resultadoDensidadePopulacional;
  int resultadoPIBPerCapita;
  int resultadoSuperPoder;


  printf("=== Desafio Super Trunfo - Países=== \n");

  // === Entrada de dados da Carta 1:
  printf("\n=== Cadastro da Carta 1 === \n");

    
  printf("Digite uma letra de 'A' a 'H' para representar o nome do Estado da Carta: ");
  scanf(" %c", &estado_carta1); // Inserindo valor a variável referente ao Estado da Carta 1

  printf("Digite o Código da carta, ele deve começar com a letra escolhida para o estado (ex: A01): ");
  scanf("%s", codigo_da_carta1); //Inserindo valor à variável referente ao Código da Carta 1

  printf("Digite o nome da Cidade: ");
  scanf("%s", nome_da_cidade_carta1); //Inserindo valor à variável referente ao Nome da cidade da Carta 1

  printf("Digite qual a populacao da cidade: ");
  scanf("%lu", &populacao_carta1); // Inserindo valor à variável referente a População da Carta 1

  printf("Digite a Área da cidade (em km²): ");
  scanf("%f", &area_em_km2_carta1); // Inserindo valor à variável referente a Área da Carta 1

  printf("Digite o PIB  (em bilhões de Reais): ");
  scanf("%f", &pib_carta1); // Inserindo valor à variável referente ao PIB da Carta 1
  pib_carta1 *= 1000000000.0; // Converte para possibilitar o cálculo para PIB per Capita

  printf("Digite o número de pontos turísticos que a Cidade possui: ");
  scanf("%d", &numero_pontos_turisticos_carta1); // Inserindo valor à variável referente ao Número de pontos turísticos da Carta 1

  
  // === Entrada de dados da Carta 2:
  printf("\n === Cadastro da Carta 2 === \n");

  printf("Digite uma letra de 'A' a 'H' para representar o nome do Estado da Carta: ");
  scanf(" %c", &estado_carta2); // Inserindo valor a variável referente ao Estado da Carta 2

  printf("Digite o Código da carta, ele deve começar com a letra escolhida para o estado (ex: B01): ");
  scanf("%s", codigo_da_carta2); //Inserindo valor à variável referente ao Código da Carta 2

  printf("Digite o nome da Cidade: ");
  scanf("%s", nome_da_cidade_carta2); //Inserindo valor à variável referente ao Nome da cidade da Carta 2

  printf("Digite qual a população da cidade: ");
  scanf("%lu", &populacao_carta2); // Inserindo valor à variável referente a População da Carta 2

  printf("Digite a Área da cidade (em km²): ");
  scanf("%f", &area_em_km2_carta2); // Inserindo valor à variável referente a Área da Carta 2

  printf("Digite o PIB  (em bilhões de Reais): ");
  scanf("%f", &pib_carta2); // Inserindo valor à variável referente ao PIB da Carta 2
  pib_carta2 *= 1000000000.0; // Converte para possibilitar o cálculo para PIB per Capita

  printf("Digite o número de pontos turísticos que a Cidade possui: ");
  scanf("%d", &numero_pontos_turisticos_carta2); // Inserindo valor à variável referente ao Número de pontos turísticos da Carta 2

  //  === Cálculos para Carta 1 ===

  // Cálculo da densidade populacional da Carta 1
  densidade_populacional_carta1 = (float) populacao_carta1 / area_em_km2_carta1;

  // Inversão do valor da densidade populacional da Carta 1, para comparar poder
  float densidadeInvertida_carta1 = 1 / densidade_populacional_carta1;

  // Cálculo do PIB per Capita da Carta 1
  pib_per_capita_carta1 =  pib_carta1 / (float) populacao_carta1;

  

  // Cálculo Super Poder Carta 1

  superPoder_carta1 = (float)populacao_carta1 + area_em_km2_carta1 + pib_carta1 + densidadeInvertida_carta1 + pib_per_capita_carta1 + (float)numero_pontos_turisticos_carta1; 
  

  
  //  === Cálculos para Carta 2 ===
  
  // Cálculo da densidade populacional da Carta 2
  densidade_populacional_carta2 = (float) populacao_carta2 / area_em_km2_carta2;

  // Inversão do valor da densidade populacional da Carta 2, para comparar poder
  float densidadeInvertida_carta2 = 1 / densidade_populacional_carta2;


  // Cálculo do PIB per Capita da Carta 2
  pib_per_capita_carta2 =  pib_carta2 / (float) populacao_carta2;

  // Cálculo Super Poder Carta 2
  superPoder_carta2 = (float)populacao_carta2 + area_em_km2_carta2 + pib_carta2 + densidadeInvertida_carta2 + pib_per_capita_carta2 + (float)numero_pontos_turisticos_carta2;

  // Revertendo PIB's para bilhões
  pib_carta1 /= 1000000000.0;
  pib_carta2 /= 1000000000.0;


  // Comparação dos valores de cada habilidade de poder
  resultadoPopulacao = populacao_carta1 > populacao_carta2;
  resultadoArea = area_em_km2_carta1 > area_em_km2_carta2;
  resultadoPIB = pib_carta1 > pib_carta2;
  resultadoPontosTuristicos = numero_pontos_turisticos_carta1 > numero_pontos_turisticos_carta2;
  resultadoDensidadePopulacional = densidadeInvertida_carta1 < densidadeInvertida_carta2;
  resultadoPIBPerCapita = pib_per_capita_carta1 > pib_per_capita_carta2;
  resultadoSuperPoder = superPoder_carta1 > superPoder_carta2;
  
  
  
  // === Impressão dos dados da carta 1 ===
  printf("\n === Carta 1 === \n");

  printf("Estado: %c \n", estado_carta1); //Estado
  printf("Código: %s \n", codigo_da_carta1); //Código
  printf("Nome da Cidade: %s \n", nome_da_cidade_carta1); //Nome
  printf("População: %lu habitantes \n", populacao_carta1); //População
  printf("Área: %.2f km² \n", area_em_km2_carta1); //Área
  printf("PIB: %.2f bilhões de reais \n", pib_carta1); // PIB - Conversão necessária para voltar ao formato originalmente inserido
  printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_carta1); //Número de Pontos turísticos
  printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional_carta1); // Densidade Populacional
  printf("PIB per Capita: %.2f reais \n", pib_per_capita_carta1); // PIB per Capita
  printf("Super Poder: %f  \n", superPoder_carta1); // Super Poder
  

   // === Impressão dos dados da carta 2 ===
  printf("\n === Carta 2 === \n");

  printf("Estado: %c \n", estado_carta2); //Estado
  printf("Código: %s \n", codigo_da_carta2); //Código
  printf("Nome da Cidade: %s \n", nome_da_cidade_carta2); //Nome
  printf("População: %lu habitantes \n", populacao_carta2); //População
  printf("Área: %.2f km² \n", area_em_km2_carta2); //Área
  printf("PIB: %.2f bilhões de reais \n", pib_carta2); // PIB - Conversão necessária para voltar ao formato originalmente inserido
  printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_carta2); //Número de Pontos turísticos
  printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional_carta2); // Densidade Populacional
  printf("PIB per Capita: %.2f reais \n", pib_per_capita_carta2); // PIB per Capita
  printf("Super Poder: %f  \n", superPoder_carta2); // Super Poder
  


// === Impressão de Comparação dos poderes das cartas
printf("\n=== Comparação das Cartas ===\n");


// População
printf("\n=== População ===\n");
printf("Carta 1 - %s: %lu \n", nome_da_cidade_carta1, populacao_carta1);
printf("Carta 2 - %s: %lu \n", nome_da_cidade_carta2, populacao_carta2);

// resultado da comparação
printf("  * Resultado: *\n");
if (resultadoPopulacao)
{
  printf("Carta 1 ( %s ) venceu! \n", nome_da_cidade_carta1); 
} else {
  printf("Carta 2 ( %s ) venceu! \n", nome_da_cidade_carta2); 
}
// ====================

// Área
printf("\n=== Área ===\n");
printf("Carta 1 - %s: %.2f \n", nome_da_cidade_carta1, area_em_km2_carta1);
printf("Carta 2 - %s: %.2f \n", nome_da_cidade_carta2, area_em_km2_carta2);

// resultado da comparação
printf("  * Resultado: *\n");
if (resultadoArea)
{
  printf("Carta 1 ( %s ) venceu! \n", nome_da_cidade_carta1); 
} else {
  printf("Carta 2 ( %s ) venceu! \n", nome_da_cidade_carta2); 
}
// ====================

// PIB
printf("\n=== PIB ===\n");
printf("Carta 1 - %s: %.2f \n", nome_da_cidade_carta1, pib_carta1);
printf("Carta 2 - %s: %.2f \n", nome_da_cidade_carta2, pib_carta2);

// resultado da comparação
printf("  * Resultado: *\n");
if (resultadoPIB)
{
  printf("Carta 1 ( %s ) venceu! \n", nome_da_cidade_carta1); 
} else {
  printf("Carta 2 ( %s ) venceu! \n", nome_da_cidade_carta2); 
}
// =====================

// Pontos Turísticos
printf("\n=== Pontos Turísticos ===\n");
printf("Carta 1 - %s: %d \n", nome_da_cidade_carta1, numero_pontos_turisticos_carta1);
printf("Carta 2 - %s: %d \n", nome_da_cidade_carta2, numero_pontos_turisticos_carta2);

// resultado da comparação
printf("  * Resultado: *\n");
if (resultadoPontosTuristicos)
{
  printf("Carta 1 ( %s ) venceu! \n", nome_da_cidade_carta1); 
} else {
  printf("Carta 2 ( %s ) venceu! \n", nome_da_cidade_carta2); 
}
//  =====================

// Densidade Populacional
printf("\n=== Densidade Populacional ===\n");
printf("Carta 1 - %s: %.2f \n", nome_da_cidade_carta1, densidade_populacional_carta1);
printf("Carta 2 - %s: %.2f \n", nome_da_cidade_carta2, densidade_populacional_carta2);

// resultado de densidade populacional
printf("  * Resultado: *\n");
if (resultadoDensidadePopulacional)
{
  printf("Carta 1 ( %s ) venceu! \n", nome_da_cidade_carta1); 
} else {
  printf("Carta 2 ( %s ) venceu! \n", nome_da_cidade_carta2); 
}
//  =====================

// PIB per Capita
printf("\n=== PIB per Capita ===\n");
printf("Carta 1 - %s: %.2f \n", nome_da_cidade_carta1, pib_per_capita_carta1);
printf("Carta 2 - %s: %.2f \n", nome_da_cidade_carta2, pib_per_capita_carta2);

// resultado de PIB per Capita
printf("  * Resultado: *\n");
if (resultadoPIBPerCapita)
{
  printf("Carta 1 ( %s ) venceu! \n", nome_da_cidade_carta1); 
} else {
  printf("Carta 2 ( %s ) venceu! \n", nome_da_cidade_carta2); 
}
//  =====================

// Super Poder
printf("\n=== Super Poder ===\n");
printf("Carta 1 - %s: %f \n", nome_da_cidade_carta1, superPoder_carta1);
printf("Carta 2 - %s: %f \n", nome_da_cidade_carta2, superPoder_carta2);

// resultado de super poder
printf("  * Resultado: *\n");
if (resultadoSuperPoder)
{
  printf("Carta 1 ( %s ) venceu! \n", nome_da_cidade_carta1); 
} else {
  printf("Carta 2 ( %s ) venceu! \n", nome_da_cidade_carta2); 
}

return 0;
}








