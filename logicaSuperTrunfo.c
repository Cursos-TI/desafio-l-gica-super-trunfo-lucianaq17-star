#include <stdio.h>



int main() {
  
//Variáveis

char pais1 [50], codigo1 [50],cidade1 [50], pais2 [50], codigo2[50], cidade2 [50];
int pontos1, pontos2;
unsigned long int populacao1, populacao2;
float pib1, area1, densidade1, percapita1, poder1, pib2, area2, densidade2, percapita2, poder2;
unsigned long int populacaoresult;
float arearesult, pibresult, densidaderesult, percapitaresult, poderresult;
int pontosresult, atributo;


printf("/n*** Jogo Super Trunfo ***/n");

//Entrada dados carta 1
printf("Digite Dados da Carta 1 \n");

printf("País: ");
scanf("%s", pais1);

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

printf("País: ");
scanf("%s", pais2);

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

//Escolha do Atributo
printf("Por favor, escolha um atributo.");
printf("1. População/n");
printf("2. Área/n");
printf("3. Pib/n");
printf("4. Pontos Turísticos/n");
printf("5. Densidade/n");
printf("6. Pib Per Capita");
scanf("%d", &atributo);


//Comparação de cartas
printf("\n*** Batalha de Cartas ***\n");

switch (atributo){
case 1:
  printf("População /n");
  if(populacao1>populacao2){
    printf("População: Carta 1 venceu!\n");
}else{
    printf("População: Carta 2 venceu!\n");
}
  break;
  
case 2:
  printf("Área /n");
if (area1>area2) {    
    printf("Área: Carta 1 venceu!\n");
}else{
    printf("Área: Carta 2 venceu!\n");
}
  break;
  
case 3:
  printf("Pib /n");
if (pib1>pib2) {    
    printf("Pib: Carta 1 venceu!\n");
}else{
    printf("Pib: Carta 2 venceu!\n");
}
  break;
  
case 4:
  printf("Pontos Turísticos /n");
if (pontos1>pontos2) {    
    printf("Pontos Turísticos: Carta 1 venceu!\n");
}else{
    printf("Pontos Turísticos: Carta 2 venceu!\n");
}
  break;
  
case 5:
  printf("Densidade /n");
if (densidade1>densidade2) {    
    printf("Densidade: Carta 2 venceu!\n");
}else{
    printf("Densidade: Carta 1 venceu!\n");
}
  break;
  
case 6:
  printf("Pib Per Capita/n");
if (percapita1>percapita2) {    
    printf("Pib Per Capita: Carta 1 venceu!\n");
}else{
    printf("Pib Per Capita: Carta 2 venceu!\n");
}
default:
  printf("Opção Inválida/n");
break;
}



// Saída carta 1
printf("\nResultado da Carta 1 \n");
printf("País: %s\n", pais1);
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
printf("País: %s\n", pais2);
printf("Cidade: %s\n",cidade2);
printf("Código: %s\n", codigo2);
printf("População: %d\n", populacao2);
printf("Área: %.2f Km2\n",area2);
printf("Pib: %.2f reais\n",pib2);
printf("Pontos Turísticos: %d\n", pontos2);
printf("Densidade: %.2f hab/Km2\n", densidade2);
printf("Pib Per Capita: %.2f reais\n", percapita2);
printf("Poder da Carta 2: %.2f\n", poder2);



return 0;
}