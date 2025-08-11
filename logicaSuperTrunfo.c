#include <stdio.h>
#include <stdlib.h>

//Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


   int compararArtributo(int tipoAtributo, unsigned long p1, unsigned long p2, float a1,
   float a2, float pib1, float pib2, int pts1, int pts2, float d1, float d2, float pc1, float pc2, float sp1,
   float sp2) {
   switch (tipoAtributo)
   {
   case 1:
    return (p1 > p2) ? 1 : (p1 == p2 ? 0 : 2); // população    
   case 2: 
    return (a1 > a2) ? 1 : (a1 == a2 ? 0 : 2); // Área
   case 3: 
   return (pib1 > pib2) ? 1 : (pib1 == pib2 ? 0 : 2); // PIB
   case 4: 
   return (pts1 > pts2) ? 1 : (pts1 == pts2 ? 0 : 2); // Pontos Turisticos
   case 5:
   return (d1 < d2) ? 1 : (d1 == d2 ? 0 : 2); // Densidade (menor vence)
   case 6:
   return (pc1 > pc2) ? 1 : (pc1 == pc2 ? 0 : 2); // Renda Per Capita
   case 7: 
   return (sp1 > sp2) ? 1 : (sp1 == sp2 ? 0 : 2); // Super Poder
   
   }

   return -1; // Erro

   } 

   int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

         printf("Desafio do Super Trunfo!\n");

    // Atributo da carta A01: São Paulo

     char estado1;
     char codigo1[20];
     char cidade1[50];
     unsigned long int populacao1;         // Em milhões de habitantes
     float area1;           // Em Km quadrados
     float pib1;           // Em bilhões de Reais
     int pontos1;
     float densidade1;
     float percapita1; 
     float superpoder1;
     int escolha1;
          
     // Atributos da carta B02: Rio de Janeiro
     
     char estado2;
     char codigo2[20];
     char cidade2[50];
     unsigned long int populacao2;         // Em milhões de habitantes
     float area2;           // Em Km quadrados
     float pib2;           // Em bilhões de Reais
     int pontos2;
     float densidade2;
     float percapita2;
     float superpoder2;
     int escolha2;
     int resultado1 = compararArtributo(escolha1, populacao1, populacao2, area1, area2, pib1,pib2, pontos1, pontos2, densidade1, densidade2, percapita1, percapita2, superpoder1, superpoder2);  
     int resultado2 = compararArtributo(escolha2, populacao1, populacao2, area1, area2, pib1,pib2, pontos1, pontos2, densidade1, densidade2, percapita1, percapita2, superpoder1, superpoder2);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

     // Cadastro da carta A01: São Paulo 
        
     printf("Carta 1: \n");

     printf("Digite o Estado: ");
     scanf(" %c", &estado1);

     printf("Digite o Codigo: ");
     scanf("%19s", codigo1);

     printf("Digite o Nome da Cidade: ");
     scanf(" %49[^\n]", cidade1);
     
     printf("Digite a População: ");
     scanf("%lu", &populacao1);
     getchar();

     printf("Digite a Area: ");
     scanf(" %f", &area1);
     getchar();

     printf("Digite o pib: ");
     scanf(" %f", &pib1);
     getchar();

     printf("Digite o numero de Pontos Turisticos: ");
     scanf("%d", &pontos1);
     getchar();

    // Calculo da Densidade - Renda Per Capita - Super Poder

    // densidade1:

    if (area1 != 0.0f)
    {
        densidade1 = (float)populacao1 / area1;
    } 
    else {
        printf("Atenção: Área da Carta 1 é zero. Densidade definida como 0.\n"); densidade1 = 0.0f;
     }
     // percapita1:

     if (populacao1 != 0)
     {
        percapita1 = (pib1 * 1000000000.0f) / populacao1;
     }
     else {
        printf("Atenção: População da Carta 1 é zero. PIB Per Capita definido como 0.\n"); percapita1 = 0.0f;
     }
     // superpoder1: 
     
     float inverso_densidade1 = 0.0f;  

     if (densidade1 != 0.0f)
     {
        inverso_densidade1 = 1.0f / densidade1;
     }
     else {
        printf("Atenção: Densidade da Carta 1 é zero. O inverso será 0 no Super Poder.\n");
     } superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + percapita1 + inverso_densidade1; 
     
     // Cadastro da carta B02: Rio de Janeiro


    printf("Carta 2: \n");

     printf("Digite o Estado: ");
     scanf(" %c", &estado2);

     printf("Digite o Codigo: ");
     scanf("%19s", codigo2);

     printf("Digite o Nome da Cidade: ");
     scanf(" %49[^\n]", cidade2);
     
     printf("Digite a População: ");
     scanf("%lu", &populacao2);
     getchar();

     printf("Digite a Area: ");
     scanf(" %f", &area2);
     getchar();

     printf("Digite o pib: ");
     scanf(" %f", &pib2);
     getchar();

     printf("Digite o numero de Pontos Turisticos: ");
     scanf("%d", &pontos2);
     getchar();

     // Calculo da Densidade - Renda Per Capita - Super Poder

     // densidade2:
    if (area2 != 0.0f)
    {
        densidade2 = (float)populacao2 / area2;
    } 
    else {
        printf("Atenção: Área da Carta 2 é zero. Densidade definida como 0.\n"); densidade2 = 0.0f;
     }
     // percapita2:
     if (populacao2 != 0)
     {
        percapita2 = (pib2 * 1000000000.0f) / populacao2;
     }
     else {
        printf("Atenção: População da Carta 2 é zero. PIB Per Capita definido como 0.\n"); percapita2 = 0.0f;
     }
     // superpoder2: 
     
     float inverso_densidade2 = 0.0f;  
     
     if (densidade2 != 0.0f)
     {
        inverso_densidade2 = 1.0f / densidade2;
     }
     else {
        printf("Atenção: Densidade da Carta 2 é zero. O inverso será 0 no Super Poder.\n");
     } superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + percapita2 + inverso_densidade2; 
     

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dos dados da carta A01: São Paulo

     printf("O Nome do Estado: %c\n", estado1);
     printf("O Código da Cidade: %s\n", codigo1);
     printf("O Nome da Cidade é: %s\n", cidade1);
     printf("A população tem: %lu\n", populacao1);
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
     printf("A população tem: %lu\n", populacao2);
     printf("A área tem: %.2f km²\n", area2);
     printf("O PIB é: R$ %.2f bilhões\n", pib2);
     printf("Pontos Turísticos: %d\n", pontos2);
     printf("Densidade Populacional é: %.2f hab/km²\n", densidade2);
     printf("Renda Per Capita é: R$ %.2f reais\n", percapita2);
     printf("Super Poder: %.2f\n", superpoder2);

     printf("\n--- Resultados de Comparação Direta (1=Carta 1 Venceu, 0=Carta 2 Venceu/Empate) ---\n");

     printf("População: %d\n", populacao1 > populacao2);
     printf("Área: %d\n", area1 > area2);
     printf("PIB: %d\n", pib1 > pib2);
     printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
     printf("Densidade Populacional: %d\n", densidade1 < densidade2); // Menor densidade vence
     printf("Renda Per Capita: %d\n", percapita1 > percapita2 );
     printf("Super Poder: %d\n", superpoder1 > superpoder2);

      // Menu interativo

     printf("### ESCOLHA O ATRIBUTO 1 PARA COMPARAÇÃO ###\n");

     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade Populacional\n");
     printf("6. Renda Per Capita\n");
     printf("7. Super Poder\n");
     printf("Digite a sua escolha: ");
     scanf("%d", &escolha1);

    printf("### ESCOLHA O ATRIBUTO 2 PARA COMPARAÇÃO (Diferente do Primeiro) ###\n");

     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade Populacional\n");
     printf("6. Renda Per Capita\n");
     printf("7. Super Poder\n");
     printf("Digite a sua escolha: ");
     scanf("%d", &escolha2); 

     if (escolha2 < 1 || escolha2 > 7 || escolha2 == escolha1) 
     {
        printf("Opção inválida ou Igual ao primeiro tributo. Encerrando. \n");

        return 1;
     }
     

     for (int i = 1; i <= 7 ; i++)
     {
        if (i != escolha1) continue;
        {
            switch (i)
            {
             case 1: 
             printf("1. População\n");
             break;
             case 2:
             printf("2. Área\n");
             break;
             case 3:
             printf("3. PIB\n");
             break;
             case 4: 
             printf("4. Pontos Turísticos\n");
             break;
             case 5:
             printf("5. Densidade Populacional\n");
             break;
             case 6: 
             printf("6. Renda Per Capita\n");
             break;
             case 7:
             printf("7. Super Poder\n");
             break;
            }
        }
    }

        printf("Digite ");
        scanf("%d", &escolha2);

        // Função para pegar valor do atributo

        float valorCarta1[8] = {0, populacao1, area1, pib1, pontos1, densidade1, percapita1, superpoder1};
        float valorCarta2[8] = {0, populacao2, area2, pib2, pontos2, densidade2, percapita2, superpoder2};    

        // Comparação dos Tributos

        float soma1 = 0, soma2 = 0;
        int atributos[2] = {escolha1, escolha2};

     // Resultado da Comparação

     printf("\n---Resulatdos da Comparação---\n");

     for (int i = 0; i < 2; i++)
     {
        int atr = atributos[i];
        printf("\Atributos %d:", atr);
     }
     switch (atr)
     {
     case 1: 
     printf("1. População\n");
     break;
     case 2:
     printf("2. Área\n");
     break;
     case 3:
     printf("3. PIB\n");
     break;
     case 4: 
     printf("4. Pontos Turísticos\n");
     break;
     case 5:
     printf("5. Densidade Populacional\n");
     break;
     case 6: 
     printf("6. Renda Per Capita\n");
     break;
     case 7:
     printf("7. Super Poder\n");
     break;
             
     }
    
     switch () {
        case 1: // População
            if (populacao1 > populacao2) {
                printf("Carta 1:%s Venceu!\n", cidade1);
                printf("Atributo Vencedor: População\n");
            } else if (populacao1 == populacao2) {
                printf("Empate na População!\n");
            } else {
                printf("Carta 2:%s Venceu!\n", cidade2);
                printf("Atributo Vencedor: População!\n");
            }
            break;

        case 2: // Área
            if (area1 > area2) {
               printf("Carta 1:%s Venceu!\n", cidade1);
               printf("Atributo Vencedor: Área\n");
               } 
            else if (area2 == area1) {
                printf("Empate na Área!\n");
                }
            else {
                printf("Carta 2: %s Venceu!\n", cidade2);
                printf("Atributo Vencedor: Área!\n");
            }
            break;

        case 3: // PIB
            if (pib1 > pib2) {
                 printf("Carta 1: %s Venceu!\n", cidade1);
                 printf("Atributo Vencedor: Pib\n");
            } else if (pib2 == pib1) {
                printf("Empate no PIB!\n");
            } else {
                printf("Carta 2: %s Venceu!\n", cidade2);
                printf("Atributo Vencedor: PIB!\n");
            }
            break;

        case 4: // Pontos Turísticos
            if (pontos1 > pontos2) {
                printf("Carta 1: %s Venceu!\n", cidade1);
                printf("Atributo Vencedor: Pontos Turísticos\n");
            } else if (pontos2 == pontos1) {
                printf("Empate no Ponto Turísticos!\n");
            } else {
                printf("Carta 2: %s Venceu!\n", cidade2);
                printf("Atributo Vencedor: Pontos Turísticos!\n");
            }
            break;

        case 5: // Densidade (menor vence)
            if (densidade1 < densidade2) {
                printf("Carta 1: %s Venceu!\n", cidade1);
                printf("Atributo Vencedor: Densidade\n");
            } else if (densidade2 == densidade1) {
                printf("Empate na Densidade!\n");
            } else {
                printf("Carta 2: %s Venceu!\n", cidade2);
                printf("Atributo Vencedor: Densidade!\n");
            }
            break;

        case 6: // Renda Per Capita
            if (percapita1 > percapita2) {
                printf("Carta 1: %s Venceu!\n", cidade1);
                printf("Atributo Vencedor: Renda Per Capita\n");
            } else if (percapita2 == percapita1) {
                printf("Empate na Renda Per Capita!\n");
            } else {
                printf("Carta 2: %s Venceu!\n", cidade2);
                printf("Atributo Vencedor: Renda Per Capita!\n");
            }
            break;

        case 7: // Super Poder
            if (superpoder1 > superpoder2) {
               printf("Carta 1: %s Venceu!\n", cidade1);
               printf("Atributo Vencedor: Super Poder\n");
            } else if (superpoder2 == superpoder1) {
                printf("Empate no Super Poder!\n");
            } else {
                printf("Carta 2: %s Venceu!\n", cidade2);
                printf("Atributo Vencedor: Super Poder!\n");
            }
            break;

         default:
            printf("Opção inválida. Nenhuma comparação realizada.\n");

            break;
        }       
 
 return 0;

    }