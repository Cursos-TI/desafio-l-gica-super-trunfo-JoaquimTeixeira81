 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 void exibirMenu(int escolhaJaFeita) {
 printf("\n### ESCOLHA UM ATRIBUTO ###\n");
 if (escolhaJaFeita !=1)
    printf("1. População\n");
 if (escolhaJaFeita !=2)
   printf("2. Área\n");
 if (escolhaJaFeita !=3)
   printf("3. PIB\n");
 if (escolhaJaFeita !=4)
   printf("4. Pontos Turísticos\n");
 if (escolhaJaFeita !=5)
   printf("5. Densidade Populacinal\n");
 if (escolhaJaFeita !=6)
   printf("6. Renda Per Capita\n");
 if (escolhaJaFeita !=7)
   printf("7. Super Poder\n");

   printf("Digite a sua Escolha: ");

 }
const char* nomeAtributo(int escolha1) {
    switch (escolha1) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Populacional";
        case 6: return "Renda Per Capita";
        case 7: return "Super Poder";
        default: return "Desconhecido";
    }
}


 float obterValorAtributo(int escolha, unsigned long int pop, float area, float pib, int pontos, float dens, float percapita, float super) {

    switch (escolha)
    {
    case 1:
    return (float) pop;
    case 2:
    return area;
    case 3:
    return pib;
    case 4:
    return (float) pontos;
    case 5:
    return dens;
    case 6:
    return percapita;
    case 7:
    return super;
       
    default: return 0.0f;

        break;
    }
 }

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
     unsigned long int populacao1;         // Em milhões de habitantes
     float area1;                         // Em Km quadrados
     float pib1;                         // Em bilhões de Reais
     int pontos1;
     float densidade1;
     float percapita1; 
     float superpoder1;
    
          
     // Atributos da carta B02: Rio de Janeiro
     
     char estado2;
     char codigo2[20];
     char cidade2[50];
     unsigned long int populacao2;         // Em milhões de habitantes
     float area2;                         // Em Km quadrados
     float pib2;                         // Em bilhões de Reais
     int pontos2;
     float densidade2;
     float percapita2;
     float superpoder2;
     int escolha1;
     int escolha2;
     // int resultado1 = compararArtributo(escolha1, populacao1, populacao2, area1, area2, pib1,pib2, pontos1, pontos2, densidade1, densidade2, percapita1, percapita2, superpoder1, superpoder2);  
     // int resultado2 = compararArtributo(escolha2, populacao1, populacao2, area1, area2, pib1,pib2, pontos1, pontos2, densidade1, densidade2, percapita1, percapita2, superpoder1, superpoder2);

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

    printf("\n --- Carta 1 ---\n");

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

     printf("\n--- Carta 2 ---\n");
     
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


     // Escolha dos atributos - Menu Dinâmico
     exibirMenu(0);
     scanf("%d", &escolha1);
     do {
        exibirMenu(escolha1);
        scanf("%d", &escolha2);
        if (escolha2 == escolha1)
            printf("Você já escolheu esse atributo! Escolha outro.\n");
    } while (escolha2 == escolha1);

    // Comparação
    float valor1_c1 = obterValorAtributo(escolha1, populacao1, area1, pib1, pontos1, densidade1, percapita1, superpoder1);
    float valor1_c2 = obterValorAtributo(escolha1, populacao2, area2, pib2, pontos2, densidade2, percapita2, superpoder2);

    float valor2_c1 = obterValorAtributo(escolha2, populacao1, area1, pib1, pontos1, densidade1, percapita1, superpoder1);
    float valor2_c2 = obterValorAtributo(escolha2, populacao2, area2, pib2, pontos2, densidade2, percapita2, superpoder2);

    // Pontuação
    int pontos_c1 = 0, pontos_c2 = 0;

    // Regra para Densidade (menor vence)
    if (escolha1 == 5) {
        if (valor1_c1 < valor1_c2) pontos_c1++;
        else if (valor1_c2 < valor1_c1) pontos_c2++;
    } else {
        if (valor1_c1 > valor1_c2) pontos_c1++;
        else if (valor1_c2 > valor1_c1) pontos_c2++;
    }

    if (escolha2 == 5) {
        if (valor2_c1 < valor2_c2) pontos_c1++;
        else if (valor2_c2 < valor2_c1) pontos_c2++;
    } else {
        if (valor2_c1 > valor2_c2) pontos_c1++;
        else if (valor2_c2 > valor2_c1) pontos_c2++;
    }

    // Soma total dos dois atributos para desempate
    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    // Resultado final detalhado
     printf("\n=== RESULTADO FINAL DA RODADA ===\n");
     printf("%s -> [%s: %.2f | %s: %.2f] Soma: %.2f\n",
           cidade1, nomeAtributo(escolha1), valor1_c1,
           nomeAtributo(escolha2), valor2_c1, soma_c1);

     printf("%s -> [%s: %.2f | %s: %.2f] Soma: %.2f\n",
           cidade2, nomeAtributo(escolha1), valor1_c2,
           nomeAtributo(escolha2), valor2_c2, soma_c2);
        
    if (pontos_c1 == 2) {
        printf("\n🏆 Vencedor da Rodada: %s\n", cidade1);
    }
    else if (pontos_c2 == 2) {
        printf("\n🏆 Vencedor da Rodada: %s\n", cidade2);

    }
    else
        printf("\n🤝 Empate na Rodada!\n");


     // if (soma_c1 > soma_c2)
       // printf("\n🏆 Vencedor: %s\n", cidade1);
     // else if (soma_c2 > soma_c1)
      // printf("\n🏆 Vencedor: %s\n", cidade2);
     // else
      // printf("\n🤝 Empate!\n");

  
 return 0;

    }