#include <stdio.h>

    int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

     printf("Desafio do Super Trunfo!\n");

    // Atributo da carta A01: São Paulo

     char estado1;
     char codigo1[20];
     char cidade1[50];
     unsigned long int população1;         // Em milhões de habitantes
     float area1;           // Em Km quadrados
     float pib1;           // Em bilhões de Reais
     int pontos1;
     float densidade1;
     float percapita1; 
     float superpoder1;


     // Atributos da carta B02: Rio de Janeiro
     
     char estado2;
     char codigo2[20];
     char cidade2[50];
     unsigned long int população2;         // Em milhões de habitantes
     float area2;           // Em Km quadrados
     float pib2;           // Em bilhões de Reais
     int pontos2;
     float densidade2;
     float percapita2;
     float superpoder2;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

     // Cadastro da carta A01: São Paulo 
        
     printf("Carta 1: \n");

     printf("Digite o Estado: ");
     scanf(" %c", &estado1);

     printf("Digite o Codigo: ");
     scanf("%s", codigo1);

     printf("Digite o Nome da Cidade: ");
     scanf(" %49[^\n]", cidade1);
     
     printf("Digite a População: ");
     scanf("%lu", &população1);

     printf("Digite a Area: ");
     scanf(" %f", &area1);

     printf("Digite o pib: ");
     scanf(" %f", &pib1);

     printf("Digite o numero de Pontos Turisticos: ");
     scanf("%d", &pontos1);

    // Calculo da Densidade - Renda Per Capita - Super Poder

     densidade1 = (float)população1 / area1;
     percapita1 = (pib1 * 1000000000.0f) / população1; 
     superpoder1 = (float)população1 + area1 + pib1 + (float)pontos1 + percapita1 + (1.0f / densidade1);
     
     // Cadastro da carta B02: Rio de Janeiro


    printf("Carta 2: \n");

     printf("Digite o Estado: ");
     scanf(" %c", &estado2);

     printf("Digite o Codigo: ");
     scanf("%s", codigo2);

     printf("Digite o Nome da Cidade: ");
     scanf(" %49[^\n]", cidade2);
     
     printf("Digite a População: ");
     scanf("%lu", &população2);

     printf("Digite a Area: ");
     scanf(" %f", &area2);

     printf("Digite o pib: ");
     scanf(" %f", &pib2);

     printf("Digite o numero de Pontos Turisticos: ");
     scanf("%d", &pontos2);

     // Calculo da Densidade - Renda Per Capita - Super Poder

     densidade2 = (float)população2 / area2;
     percapita2 = (pib2 * 1000000000.0f) / população2; 
     superpoder2 = (float)população2 + area2 + pib2 + (float)pontos2 + percapita2 + (1.0f / densidade2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

      // Exibição dos dados da carta A01: São Paulo

     printf("O Nome do Estado: %c\n", estado1);
     printf("O Código da Cidade: %s\n", codigo1);
     printf("O Nome da Cidade é: %s\n", cidade1);
     printf("A população tem: %lu\n", população1);
     printf("A área tem: %.2f km²\n", area1);
     printf("O PIB é: R$ %.2f bilhões\n", pib1);
     printf("Pontos Turísticos: %d\n", pontos1);
     printf("Densidade Populacional é: %.2f hab/km²\n", densidade1);
     printf("Renda Per Capita é: R$ %.2f reais\n", percapita1);
     printf("Super Poder: %.2f\n", superpoder1);
     

     // Exibição dos dados da carta B02: Rio de Janeiro
     
     printf("O Nome do Estado: %c\n", estado2);
     printf("O Código da Cidade: %s\n", codigo2);
     printf("O Nome da Cidade é: %s\n", cidade2);
     printf("A população tem: %lu\n", população2);
     printf("A área tem: %.2f km²\n", area2);
     printf("O PIB é: R$ %.2f bilhões\n", pib2);
     printf("Pontos Turísticos: %d\n", pontos2);
     printf("Densidade Populacional é: %.2f hab/km²\n", densidade2);
     printf("Renda Per Capita é: R$ %.2f reais\n", percapita2);
     printf("Super Poder: %.2f\n", superpoder2);

     // Comparações entre as Cartas

     printf("\n---Resulatdos da Comparação---\n");

     if (população1 > população2)
     {
      printf("Carta 1: São Paulo Venceu!\n");
      printf("Atributo Vencedor: População\n");
     } 
     else if (população1 < população2)
     {
      printf("Carta 2: Rio de Janeiro Venceu!\n");
      printf("Atributo Vencedor: População\n");
     } 
     else {
      printf("Empate: Carta 1 e Carta 2\n");
      printf("Atributo empatado: Área\n");
     }
  
     if (area1 > area2)
     {
      printf("Carta 1: São Paulo Venceu!\n");
      printf("Atributo Vencedor: Área\n");
     } 
     else if (area1 < area2) 
     {
      printf("Carta 2: Rio de Janeiro Venceu!\n");
      printf("Atributo Vencedor: Área\n");
     }
     else {
      printf("Empate: Carta 1 e Carta 2\n");
      printf("Atributo empatado: Área\n");
     }

     if (pib1 > pib2)
     {
      printf("Carta 1: São Paulo Venceu!\n");
      printf("Atributo Vencedor: PIB\n");
     } 
     else if (pib1 < pib2)
     {
      printf("Carta 2: Rio de Janeiro Venceu!\n");
      printf("Atributo Vencedor: PIB\n");
     }
     else
     {
      printf("Empate: Carta 1 e Carta 2\n");
      printf("Atributo empatado: PIB\n");
     }
     
     if (pontos1 > pontos2)
     {
      printf("Carta 1: São Paulo Venceu!\n");
      printf("Atributo Vencedor: Pontos Turisticos\n");
     } 
     else if(pontos1 < pontos2) 
     {
      printf("Carta 2: Rio de Janeiro Venceu!\n");
      printf("Atributo Vencedor: Ponto Turisticos\n");
     }
     else
     {
      printf("Empate: Carta 1 e Carta 2\n");
      printf("Atributo empatado: Pontos Turisticos\n");
     }

     if (densidade1 < densidade2)
     {
      printf("Carta 1: São Paulo Venceu!\n");
      printf("Atributo Vencedor: Densidade Populacional\n");
     } 
     else if (densidade1 > densidade2) 
     {
      printf("Carta 2: Rio de Janeiro Venceu!\n");
      printf("Atributo Vencedor: Densidade Populacional\n");
     }
     else
     {
      printf("Empate: Carta 1 e Carta 2\n");
      printf("Atributo empatado: Densidade Populacional\n");
     }

     if (percapita1 > percapita2)
     {
      printf("Carta 1: São Paulo Venceu!\n");
      printf("Atributo Vencedor: Renda Per Capita\n");
     } 
     else if (percapita1 < percapita2) 
     {
      printf("Carta 2: Rio de Janeiro Venceu!\n");
      printf("Atributo Vencedor: Renda Per Capita\n");
     } 
     else 
     {
      printf("Empate: Carta 1 e Carta 2\n");
      printf("Atributo empatado: Renda Per Capita\n");
     }
     if (superpoder1 > superpoder2)
     {
      printf("Carta 1: São Paulo Venceu!\n");
      printf("Atributo Vencedor: Super Poder\n");
     } 
     else if(superpoder1 < superpoder2) 
     {
      printf("Carta 2: Rio de Janeiro Venceu!\n");
      printf("Atributo Vencedor: Super Poder\n");
     }
     else 
     {
      printf("Empate: Carta 1 e Carta 2\n");
      printf("Atributo empatado: Super Poder\n");
     }

     
    return 0;

}
