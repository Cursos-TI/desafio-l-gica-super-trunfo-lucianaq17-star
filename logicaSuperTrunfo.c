#include <stdio.h>

int main() {
  
char estado1 [50], codigo1 [50],cidade1 [50], estado2[50], codigo2[50], cidade2 [50];
int pontos1, pontos2;
unsigned long int populacao1, populacao2;
float pib1, area1, densidade1, percapita1, poder1, pib2, area2, densidade2, percapita2, poder2;
unsigned long int populacaoresult;
float arearesult, pibresult, densidaderesult, percapitaresult, poderresult;
int pontosresult;

//Entrada dados carta 1
printf("Digite Dados da Carta 1 \n");

printf("Estado: ");
scanf("%s", estado1);

printf("Cidade: ");
scanf("%s",cidade1);

printf("Código: ");
scanf("%s",codigo1);

printf("População: ");
scanf("%lu", &populacao1);

printf("Área: ");
scanf("%f",&area1);

printf("Pib: ");
scanf("%f",&pib1);

printf("Pontos Turísticos: ");
scanf("%d", &pontos1);


//Entrada dados carta 2
printf("\nDigite Dados da Carta 2 \n");

printf("Estado: ");
scanf("%s", estado2);

printf("Cidade: ");
scanf("%s",cidade2);

printf("Código: ");
scanf("%s",codigo2);

printf("População: ");
scanf("%lu", &populacao2);

printf("Área: ");
scanf("%f",&area2);

printf("Pib: ");
scanf("%f",&pib2);

printf("Pontos Turísticos: ");
scanf("%d", &pontos2);


//Cálculos Carta 1
densidade1 = populacao1/area1;
percapita1 = pib1/populacao1;
poder1 = populacao1 + area1 + pib1 + pontos1 + percapita1 + 1/densidade1;


//Cálculos Carta 2
densidade2 = populacao2/area2;
percapita2 = pib2/populacao2;
poder2 = populacao2 + area2 + pib2 + pontos2 + percapita2 +1/densidade2;

// Saída carta 1
printf("\nResultado da Carta 1 \n");
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("Código: %s\n", codigo1);
printf("População: %d\n", populacao1);
printf("Área: %.2f Km2\n",area1);
printf("Pib: %.2f reais\n",pib1);
printf("Pontos Turísticos: %d\n", pontos1);
printf("Densidade: %.2f hab/Km2\n", densidade1);
printf("Pib Per Capita: %.2f reais\n", percapita1);
printf("Poder da Carta 1: %.2f\n", poder1);


//Saída carta 2
printf("\nResultado da Carta 2 \n");
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n",cidade2);
printf("Código: %s\n", codigo2);
printf("População: %d\n", populacao2);
printf("Área: %.2f Km2\n",area2);
printf("Pib: %.2f reais\n",pib2);
printf("Pontos Turísticos: %d\n", pontos2);
printf("Densidade: %.2f hab/Km2\n", densidade2);
printf("Pib Per Capita: %.2f reais\n", percapita2);
printf("Poder da Carta 2: %.2f\n", poder2);

//Comparação de cartas
printf("\nBatalha de Cartas\n");

if(populacao1=populacao2){
    printf("Carta 1 venceu!\n");
}else{
    printf("Carta 2 venceu!\n");
}

if (area1=area2) {    
    printf("Carta1 venceu!\n");
}else{
    printf("Carta2 venceu!\n");
}

