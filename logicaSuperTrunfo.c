#include <stdio.h>


int main(){
   char pais1[20];
   char pais2[20];
   char cidade1[20];
   char cidade2[20];
   char estado1[20];
   char estado2[20];
   unsigned long int populacao1, populacao2;
   int pontosTuristicos1, pontosTuristicos2, atributo1, atributo2;
   double area1, area2, pib1, pib2, somaC1, somaC2;
   double densidadePopulacional1, densidadePopulacional2;
   double valorA1_C1, valorA1_C2, valorA2_C1, valorA2_C2;
    
    
   //Cadastro das Cartas:
   //função scanf para armazenar os dandos
    
   printf("*** Bem vindo(a) ao jogo super trufo! ***\n");
   printf("vamos cadastrar sua carta: \n");


   printf("Digite um País: ");
   scanf(" %s", pais1);

   printf("Digite um Estado: ");
   scanf(" %s", estado1);

   printf("Digite o nome da cidade: ");
   scanf("%s", cidade1);

   printf("Digite o numero de habitantes: ");
   scanf("%lu", &populacao1);

   printf("Digite a area(KM²): ");
   scanf("%lf",&area1);

   printf("Digite o PIB: ");
   scanf("%lf", &pib1);

   printf("Digite o numero de pontos turisticos: ");
   scanf("%d", &pontosTuristicos1);

   printf("\n** Cadraste outra carta: **\n");

   printf("Digite um País: ");
   scanf("%s", pais2);

   printf("Digite um Estado: ");
   scanf("%s", estado2);

   printf("Digite o nome da cidade: ");
   scanf("%s", cidade2);

   printf("Digite o numero de habitantes: ");
   scanf("%lu", &populacao2);

   printf("Digite a area(KM²): ");
   scanf("%lf",&area2);

   printf("Digite o PIB: ");
   scanf("%lf", &pib2);

   printf("Digite o numero de pontos turisticos: ");
   scanf("%d", &pontosTuristicos2);

   densidadePopulacional1 = (double) populacao1 / area1;
   densidadePopulacional2 = (double) populacao2 / area2;
 


   //menu interativo 1
   printf("\nEscolha um Atributo de comparação\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Pontos Turísticos\n");
   printf("5. DensidadePopulacional\n");
   scanf("%d", &atributo1);


   printf("\nEscolha o SEGUNDO atributo (diferente do primeiro)\n");
   switch(atributo1){
      case 1:
         printf("2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n");
         break;
      case 2:
         printf("1. População\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n");
         break;
      case 3:
         printf("1. População\n2. Área\n4. Pontos Turísticos\n5. Densidade Populacional\n");
         break;
      case 4:
         printf("1. População\n2. Área\n3. PIB\n5. Densidade Populacional\n");
         break;
      case 5:
         printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n");
         break;
}

   scanf("%d", &atributo2);

   if(atributo1 == atributo2){
      printf("\nVocê NÃO pode escolher o mesmo atributo duas vezes!\n");
      return 0;
}


   //logica do menu
   //ATRIBUTO 1
   switch(atributo1) {
      case 1: 
         valorA1_C1 = populacao1;
         valorA1_C2 = populacao2;

   break;
      case 2:
         valorA1_C1 = area1; 
         valorA1_C2 = area2; 

   break;
      case 3:
         valorA1_C1 = pib1;
         valorA1_C2 = pib2;
         
   break;
      case 4:
         valorA1_C1 = pontosTuristicos1;
         valorA1_C2 = pontosTuristicos2;

   break;
      case 5:
         valorA1_C1 = densidadePopulacional1;
         valorA1_C2 = densidadePopulacional2;

   break;
   }

   //ATRIBUTO 2
   switch(atributo2) {
      case 1:
         valorA2_C1 = populacao1;
         valorA2_C2 = populacao2;

   break;
      case 2:
         valorA2_C1 = area1;
         valorA2_C2 = area2;

   break;
      case 3:
         valorA2_C1 = pib1;
         valorA2_C2 = pib2;

   break;
      case 4:
         valorA2_C1 = pontosTuristicos1;
         valorA2_C2 = pontosTuristicos2;

   break;
      case 5:
         valorA2_C1 = densidadePopulacional1;
         valorA2_C2 = densidadePopulacional2;

   break;
   }

   if (atributo1 == 5) {
      valorA1_C1 = 1 / valorA1_C1;
      valorA1_C2 = 1 / valorA1_C2;
   }

   if (atributo2 == 5) {
      valorA2_C1 = 1 / valorA2_C1;
      valorA2_C2 = 1 / valorA2_C2;
   }

   //soma dos valores
   somaC1 = valorA1_C1 + valorA2_C1;
   somaC2 = valorA1_C2 + valorA2_C2;
   

   printf("\n****RESULTADO****\n");

   printf("Carta 1: %s\n", pais1);
   printf("Carta 2: %s\n", pais2);
   
   //exibição e comparação individual
   printf("\nAtributo 1: %d | Carta1: %.2lf | Carta2: %.2lf |", atributo1, valorA1_C1, valorA1_C2);

   if (valorA1_C1 > valorA1_C2) {
      printf("Carta 1 venceu!!\n");
   } else if (valorA1_C2 > valorA1_C1){
      printf("Carta 2 venceu!!\n");
   } else {
      printf("Empate!!\n");
   }
   
   printf("\nAtributo 2: %d | Carta1: %.2lf | Carta2: %.2lf |", atributo2, valorA2_C1, valorA2_C2);

   if (valorA2_C1 > valorA2_C2) {
      printf("Carta 1 venceu!!\n");
   } else if (valorA2_C2 > valorA2_C1) {
      printf("Carta 2 venceu!!\n");
   } else {
      printf("Empate!!\n");
   }

   printf("\nSoma Carta 1 = %.2lf\n", somaC1);
   printf("\nSoma Carta 2 = %.2lf\n", somaC2);

   //QUEM VENCE
   if (somaC1 > somaC2) {
        printf("\n***CARTA 1 VENCEU!***\n");
   } else if (somaC2 > somaC1) {
        printf("\n***CARTA 2 VENCEU!***\n");
   } else {
        printf("\n=== EMPATE! ===\n");
   }

   return 0;

 
}
