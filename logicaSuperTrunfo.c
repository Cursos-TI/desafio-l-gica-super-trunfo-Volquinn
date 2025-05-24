#include <stdio.h>


int main() {

        //Carta1
        unsigned long int populacao1;
        int numPontos1; //Numero de pontos turisticos
        float area1, pib1;  //Numero da area km²
        float Densidade1, PIBperCapita1, superPoder1;
        char codigo1, cidade1[20];    //Codigo da cidade e nome
        char estado1; //Estado do País
        
        //Carta2
        unsigned long int populacao2;
        int numPontos2; //Numero de pontos turisticos
        float area2, pib2;  //Numero da area km²
        float Densidade2, PIBperCapita2, superPoder2;
        char codigo2, cidade2[20];    //Codigo da cidade e nome
        char estado2; // Estado do País


        //Entrada de dados Carta 1

        printf("\n=== Carta 1 ===\n");
        printf("Digite a letra do estado:\n");
        scanf("%s", &estado1);

        printf("Digite o numero de 1 a 9:\n");
        scanf("%s", &codigo1);

        printf("Digite o nome da cidade:\n");
        scanf("%s", cidade1);

        printf("Digite a populacao da cidade:\n");
        scanf("%lu", &populacao1);

        printf("Digite a area em km²:\n");
        scanf("%f", &area1);

        printf("Digite o pib:\n");
        scanf("%f", &pib1);

        printf("Digite o numeros de pontos turisticos:\n");
        scanf("%d", &numPontos1);

        //Calculando os valores Carta 1

        Densidade1 = populacao1 / area1;
        PIBperCapita1 = pib1 / populacao1;
        superPoder1 = populacao1 + area1 + pib1 + PIBperCapita1 + numPontos1 + (1.0 / Densidade1);


        //Entrada de dados Carta 2

        printf("\n=== Carta 2 ===\n");
        printf("Digite a letra do Estado:\n");
        scanf("%s", &estado2);

        printf("Digite o numero de 1 a 9:\n");
        scanf("%s", &codigo2);

        printf("Digite o nome da cidade:\n");
        scanf("%s", &cidade2);

        printf("Digite a populacao da cidade:\n");
        scanf("%lu", &populacao2);

        printf("Digite a area em km²:\n");
        scanf("%f", &area2);

        printf("Digite o pib:\n");
        scanf("%f", &pib2);

        printf("Digite o numero de pontos turisticos:\n");
        scanf("%d", &numPontos2);

        //Calculando os valores Carta 2

        Densidade2 = populacao2 / area2;
        PIBperCapita2 = pib2 / populacao2;
        superPoder2 = populacao2 + area2 + pib2 + PIBperCapita2 + numPontos2 + (1.0 / Densidade2);


        // Menu Interativo
        
        int escolha;
        
                printf("\n*** Escolha o atributo para comparar as cartas ***\n");
                printf("1. População\n");
                printf("2. Area\n");
                printf("3. PIB\n");
                printf("4. Numero de pontos turisticos\n");
                printf("5. Densidade demografica\n");
                printf("Digite o numero da sua escolha:\n");
                scanf("%d", &escolha);

                printf("\nComparando as cartas...\n");
                printf("Carta 1: %s\n", cidade1);
                printf("Carta 2: %s\n", cidade2);

        switch (escolha)
        {
        case 1:
                printf("Atributos a serem comparados: Populacao\n");
                printf("%s: %lu\n", cidade1, populacao1);
                printf("%s: %lu\n", cidade2, populacao2);

               if(populacao1 > populacao2)
                        printf("Resultado: %s venceu!\n", cidade1);

               else if (populacao2 > populacao1)
                        printf("Resultado: %s venceu!\n", cidade2);
                else
                        printf("Resultado: Empate!\n");
        break;

        case 2:
                printf("Atributos a serem comparados: Area\n");
                printf("%s: %.2f km²\n", cidade1, area1);
                printf("%s: %.2f km²\n", cidade2, area2);

                if(area1 > area2)
                        printf("Resultado: %s Venceu!\n", cidade1);

                else if(area2 > area1)
                        printf("Resultado: %s Venceu!\n", cidade2);

                else
                        printf("Resultado: Empate!\n");
        break;

        case 3:
                printf("Atributos a serem comparados: PIB\n");
                printf("%s: %.2f\n", cidade1, pib1);
                printf("%s: %.2f\n", cidade2, pib2);
                
                if(pib1 > pib2)
                        printf("Resultado: %s Venceu!\n", cidade1);

                else if(pib2 > pib1);
                        printf("Resultado: %s Venceu!\n", cidade2);
                
                else
                        printf("Resultado: Empate!\n");
        break;

        case 4:
                printf("Atributos a serem comparados: Pontos Turisticos\n");
                printf("%s: %d\n", cidade1, numPontos1);
                printf("%s: %d\n", cidade2, numPontos2);

                if(numPontos1 > numPontos2)
                        printf("Resultado: %s Venceu!\n", cidade1);

                else if(numPontos2 > numPontos1)
                        printf("Resultado: %s Venceu!\n", cidade2);
                
                else 
                        printf("Resultado: Empate!\n");

        break;

        case 5:
                printf("Atributos a serem comparados: Densidade demografica(menor e melhor)\n");
                printf("%s: %.2f hab/km²\n", cidade1, Densidade1);
                printf("%s: %.2f hab/km²\n", cidade2, Densidade2);

                if(Densidade1 < Densidade2)
                        printf("Resultado: %s Venceu!\n", cidade1);

                else if (Densidade2 < Densidade1)
                        printf("Resultado: %s Venceu!\n", cidade2);
                
                else
                        printf("Resultado: Empate!\n");
                
        break;

        default:
                printf("Opcao invalida!\n");
        
        }

        return 0;
}