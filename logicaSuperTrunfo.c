#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    
    unsigned long int populacao1, populacao2;
    
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    float superPoder1, superPoder2;
    
    int opcao; 

    // Nivel mestre Variáveis

    int opcao1, opcao2;

    float atributo1Carta1, atributo1Carta2;
    float atributo2Carta1, atributo2Carta2;

    float somaCarta1, somaCarta2;

    char nomeAtributo1[30];
    char nomeAtributo2[30];

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Cadastro da Carta 1\n");
    
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex:A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacão da cidade: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex:B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacão da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Cálculos Densidade e Pib Per Capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do super poder (do desafio anterior)

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Comparações antigas (do desafio anterior Tema 2)
    /*
    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPIB = pib1 > pib2;
    int resultadoPontos = pontosTuristicos1 > pontosTuristicos2;
    int resultadoDensidade = densidade1 < densidade2;
    int resultadoPIBPerCapita = pibPerCapita1 > pibPerCapita2;
    int resultadoSuperPoder = superPoder1 > superPoder2;
    */
    
    // Menu interativo (antigo - nivel aventureiro- mantido para referência)
    /*
    printf("\n==============================\n");
    printf("Menu de comparação\n");
    printf("==============================\n");

    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    printf("\nEscolha o atributo para comparação: ");
    scanf("%d", &opcao);

    // Estrutura switch para escolha do atributo
    switch (opcao)
    {
    case 1:
        printf("\nComparação por População: \n");

        printf("%s: %lu\n", cidade1, populacao1);
        printf("%s: %lu\n", cidade2, populacao2);

        if (populacao1 > populacao2) {
            printf("\nResultado: %s venceu! \n", cidade1);
        }
        else if (populacao2 > populacao1){
            printf("\nResultado: %s venceu!\n", cidade2);
        }
        else {
            printf("\nResultado: Empate!\n");
        }
        break;
    
    case 2:
        printf("\nComparação por Área:\n");
        
        printf("%s: %.2f km²\n", cidade1, area1);
        printf("%s: %.2f km²\n", cidade2, area2);

        if (area1 > area2) {
            printf("\nResultado: %s venceu!\n", cidade1);
        }
        else if (area2 > area1) {
            printf("\nResultado: %s venceu!\n", cidade2);
        }
        else {
            printf("\nResultado: Empate!\n");
        }
        break;
    
    case 3:
        printf("\nComparação por PIB:\n");

        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n", cidade2, pib2);

        if (pib1 > pib2) {
            printf("\nResultado: %s venceu!\n", cidade1);
        }
        else if (pib2 > pib1) {
            printf("\nResultado: %s venceu!\n", cidade2);
        }
        else {
            printf("\nResultado: Empate!\n");
        }
        
        break;
    
    case 4:
        printf("\nComparação por Pontos Turísticos: \n");

        printf("%s: %d\n", cidade1, pontosTuristicos1);
        printf("%s: %d\n", cidade2, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("\nResultado: %s venceu!\n", cidade1);
        }
        else if (pontosTuristicos2 > pontosTuristicos1) {
            printf("\nResultado: %s venceu!\n", cidade2);
        }
        else {
            printf("\nResultado: Empate!\n");
        }

        break;

        case 5:
            printf("\nComparação por Densidade Demográfica:\n");

            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            // Regra: MENOR densidade vence

            if (densidade1 < densidade2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            }
            else if (densidade2 < densidade1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            }
            else {
                printf("\nResultado: Empate!\n");
            }
            
            break;

            // Opção Inválida:
    default:
            printf("\nOpção inválida!\n");
            break;
    }
    */
    
    // Nível mestre comparação com dois atributos

    printf("\n===========================\n");
    printf("SUPER TRUNFO\n");
    printf("===========================\n");

    // Primeiro menu

    printf("\nEscolha o primeiro atributo:\n");

    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    printf("\nDigite a opção: ");
    scanf("%d", &opcao1);

    // Segundo menu

    printf("\nEscolha o segundo atributo:\n");

    if (opcao1 != 1)
        printf("1 - população\n");
    
    if (opcao1 != 2) 
        printf("2 - Área\n");
    
    if (opcao1 != 3)
        printf("3 - PIB\n");
    
    if (opcao1 != 4)
        printf("4 - Pontos Turísticos\n");

    if (opcao1 != 5)
        printf("5 - Densidade Demográfica\n");

    printf("\nDigite a opção: ");
    scanf("%d", &opcao2);

    // verificação para não repetir atributos já escolhidos

    if (opcao1 == opcao2) {
        printf("\nErro: Você escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Atributo 1

    switch (opcao1) {

        case 1:
            atributo1Carta1 = populacao1;
            atributo1Carta2 = populacao2;

            sprintf(nomeAtributo1, "População");
            break;
        
        case 2:
            atributo1Carta1 = area1;
            atributo1Carta2 = area2;

            sprintf(nomeAtributo1, "Área");
            break;

        case 3:
            atributo1Carta1 = pib1;
            atributo1Carta2 = pib2;

            sprintf(nomeAtributo1, "PIB");
            break;
        
        case 4:
            atributo1Carta1 = pontosTuristicos1;
            atributo1Carta2 = pontosTuristicos2;

            sprintf(nomeAtributo1, "Pontos Turísticos");
            break;

        case 5:
            atributo1Carta1 = densidade1;
            atributo1Carta2 = densidade2;

            sprintf(nomeAtributo1, "Densidade Demográfica");
            break;

        default:
            printf("\nOpção inválida!\n");
            return 0 ;
    }

    // Atributo 2
    
    switch (opcao2) {
    
        case 1:
            atributo2Carta1 = populacao1;
            atributo2Carta2 = populacao2;

            sprintf(nomeAtributo2, "População");
            break;

        case 2:
            atributo2Carta1 = area1;
            atributo2Carta2 = area2;
            
            sprintf(nomeAtributo2, "Área");
            break;
        
        case 3:
            atributo2Carta1 = pib1;
            atributo2Carta2 = pib2;

            sprintf(nomeAtributo2, "PIB");
            break;

        case 4:
            atributo2Carta1 = pontosTuristicos1;
            atributo2Carta2 = pontosTuristicos2;
            
            sprintf(nomeAtributo2, "Pontos Turísticos");
            break;

        case 5:
            atributo2Carta1 = densidade1;
            atributo2Carta2 = densidade2;

            sprintf(nomeAtributo2, "Densidade Demográfica");
            break;

        default:
            printf("\nOpção inválida!\n");
            return 0;
    }

    // Regra especial densidade menor valor vence

    if (opcao1 == 5) {
        atributo1Carta1 = 1 / atributo1Carta1;
        atributo1Carta2 = 1 / atributo1Carta2;
    }

    if (opcao2 == 5) {
        atributo2Carta1 = 1 / atributo2Carta1;
        atributo2Carta2 = 1 / atributo2Carta2;
    }

    // Soma dos atributos

    somaCarta1 = atributo1Carta1 + atributo2Carta1;
    somaCarta2 = atributo1Carta2 + atributo2Carta2;

    // Exibição dos resultados

    printf("\n=============================\n");
    printf("RESULTADO DA COMPARAÇÃO\n");
    printf("=============================\n");

    printf("\nCarta1: %s\n", cidade1);
    printf("Carta2: %s\n", cidade2);

    printf("\nPrimeiro atributo: %s\n", nomeAtributo1);
    printf("%s: %.2f\n", cidade1, atributo1Carta1);
    printf("%s: %.2f\n", cidade2, atributo1Carta2);

    printf("\nSegundo atributo: %s\n", nomeAtributo2);
    printf("%s: %.2f\n", cidade1, atributo2Carta1);
    printf("%s: %.2f\n", cidade2, atributo2Carta2);

    printf("\nSoma dos atributos:\n");

    printf("%s: %.2f\n", cidade1, somaCarta1);
    printf("%s: %.2f\n", cidade2, somaCarta2);

    // Operador Tenário

    printf("\n Resultado Final:\n");

    (somaCarta1 > somaCarta2)
        ? printf("%s venceu!\n", cidade1)
        : (somaCarta2 > somaCarta1)
            ? printf("%s venceu!\n", cidade2)
            : printf("Empate!\n");

     // Estrutura De decisão (nível novato)
     // if (populacao1 > populacao2) {
     // printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
     // } 
     // else if (populacao2 > populacao1) {
     // printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
     // } 
     // else {
     // printf("\nResultado: Empate!\n");
     // }


    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    /*
    printf("\n==============================\n");
    printf("Comparação de Cartas (Atributo: População)\n");
    printf("==============================\n\n");

    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
    */
    return 0;
}
