#include <stdio.h>

//Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

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
     int escolha;
    

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

      // Menu interativo

     printf("### ESCOLHA O ATRIBUTO PARA COMPARAÇÃO ###\n");

     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade Populacional\n");
     printf("6. Renda Per Capita\n");
     printf("7. Super Poder\n");
     printf("Digite a sua escolha: ");
     scanf("%d", &escolha);

     // Resultado da Comparação

     printf("\n---Resulatdos da Comparação---\n");

     switch (escolha) {
        case 1: // População
            if (população1 > população2) {
                printf("Carta 1 venceu pela maior População!\n");
            } else if (população1 < população2) {
                printf("Carta 2 venceu pela maior População!\n");
            } else {
                printf("Empate: População igual.\n");
            }
            break;

        case 2: // Área
            if (area1 > area2) {
                if ((area1 - area2) / area1 < 0.05) {
                    printf("Empate técnico: diferença de área inferior a 5%%.\n");
                } else {
                    printf("Carta 1 venceu pela maior Área!\n");
                }
            } else if (area2 > area1) {
                if ((area2 - area1) / area2 < 0.05) {
                    printf("Empate técnico: diferença de área inferior a 5%%.\n");
                } else {
                    printf("Carta 2 venceu pela maior Área!\n");
                }
            } else {
                printf("Empate: Área igual.\n");
            }
            break;

        case 3: // PIB
            if (pib1 > pib2) {
                printf("Carta 1 venceu pelo maior PIB!\n");
            } else if (pib2 > pib1) {
                printf("Carta 2 venceu pelo maior PIB!\n");
            } else {
                printf("Empate: PIB igual.\n");
            }
            break;

        case 4: // Pontos Turísticos
            if (pontos1 > pontos2) {
                printf("Carta 1 venceu com mais Pontos Turísticos!\n");
            } else if (pontos2 > pontos1) {
                printf("Carta 2 venceu com mais Pontos Turísticos!\n");
            } else {
                printf("Empate: mesma quantidade de Pontos Turísticos.\n");
            }
            break;

        case 5: // Densidade (menor vence)
            if (densidade1 < densidade2) {
                printf("Carta 1 venceu com menor Densidade Populacional!\n");
            } else if (densidade2 < densidade1) {
                printf("Carta 2 venceu com menor Densidade Populacional!\n");
            } else {
                printf("Empate: mesma Densidade Populacional.\n");
            }
            break;

        case 6: // Renda Per Capita
            if (percapita1 > percapita2) {
                printf("Carta 1 venceu com maior Renda Per Capita!\n");
            } else if (percapita2 > percapita1) {
                printf("Carta 2 venceu com maior Renda Per Capita!\n");
            } else {
                printf("Empate: mesma Renda Per Capita.\n");
            }
            break;

        case 7: // Super Poder
            if (superpoder1 > superpoder2) {
                printf("Carta 1 venceu com Super Poder superior!\n");
            } else if (superpoder2 > superpoder1) {
                printf("Carta 2 venceu com Super Poder superior!\n");
            } else {
                printf("Empate: Super Poder igual.\n");
            }
            break;

        default:
            printf("Opção inválida. Nenhuma comparação realizada.\n");
            break;

    return 0;

}
   }