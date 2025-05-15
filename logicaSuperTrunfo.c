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
        scanf("%d", &populacao1);

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
        scanf("%d", &populacao2);

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


        //Contadores de Vitorias
        int vitorias1 = 0;
        int vitorias2 = 0;

        //Populacao
        if(populacao1 > populacao2) {
                vitorias1++;
        } else {
                vitorias2++;
        }
        
        // Area
        if(area1 > area2) {
                vitorias1++;
        } else {
                vitorias2++;
        }

        //PIB
        if(pib1 > pib2) {
                vitorias1++;
        } else {
                vitorias2++;
        }

        //Pontos Turisticos
        if(numPontos1 > numPontos2) {
                vitorias1++;
        } else {
                vitorias2++;
        }

        //PIB per capita
        if(PIBperCapita1 > PIBperCapita2) {
                vitorias1++;
        } else {
                vitorias2++;
        }

        //Densidade populacional (menor carta vence)
        if (Densidade1 < Densidade2) {
                vitorias1++;
        } else {
                vitorias2++;
        }

        //Resultado final
        printf("\n Resultado Final da Comparacao:\n");
        printf("Carta 1 venceu %d atributos\n", vitorias1);
        printf("Carta 2 venceu %d atributos\n", vitorias2);

        if(vitorias1 > vitorias2) {
                printf("Carta 1 e a grande vencedora!\n");
        } else {
                printf("Carta 2 e a grande vencedora!\n");
        }
        
        return 0;
