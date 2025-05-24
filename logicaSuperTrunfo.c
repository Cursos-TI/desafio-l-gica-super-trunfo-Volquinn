#include <stdio.h>

int main() {
    // Carta 1
    unsigned long int populacao1, populacao2;
    int numPontos1, numPontos2;
    float area1, pib1, area2, pib2;
    float Densidade1, PIBperCapita1, superPoder1;
    float Densidade2, PIBperCapita2, superPoder2;
    char codigo1, cidade1[20], estado1;
    char codigo2, cidade2[20], estado2;

    // Entrada de dados Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Digite a letra do estado:\n");
    scanf("%s", &estado1);

    printf("Digite o número de 1 a 9:\n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numPontos1);

    Densidade1 = populacao1 / area1;
    PIBperCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + PIBperCapita1 + numPontos1 + (1.0 / Densidade1);

    // Entrada de dados Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Digite a letra do estado:\n");
    scanf("%s", &estado2);

    printf("Digite o número de 1 a 9:\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numPontos2);

    Densidade2 = populacao2 / area2;
    PIBperCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + PIBperCapita2 + numPontos2 + (1.0 / Densidade2);

    // Menu de Atributos
    int escolha1, escolha2;
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("\n*** Escolha dois atributos diferentes ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica (menor vence)\n");

    printf("Digite o primeiro atributo: ");
    scanf("%d", &escolha1);

    printf("Digite o segundo atributo (diferente do primeiro): ");
    scanf("%d", &escolha2);

    // Validação manual com if
    if (escolha1 == escolha2 || escolha1 < 1 || escolha1 > 5 || escolha2 < 1 || escolha2 > 5) {
        printf("Erro: atributos inválidos ou repetidos.\n");
    } else {
        // Pegando valores para a primeira escolha
        if (escolha1 == 1) {
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
        } else if (escolha1 == 2) {
            valor1_c1 = area1;
            valor1_c2 = area2;
        } else if (escolha1 == 3) {
            valor1_c1 = pib1;
            valor1_c2 = pib2;
        } else if (escolha1 == 4) {
            valor1_c1 = numPontos1;
            valor1_c2 = numPontos2;
        } else if (escolha1 == 5) {
            valor1_c1 = Densidade1;
            valor1_c2 = Densidade2;
        }

        // Pegando valores para a segunda escolha
        if (escolha2 == 1) {
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
        } else if (escolha2 == 2) {
            valor2_c1 = area1;
            valor2_c2 = area2;
        } else if (escolha2 == 3) {
            valor2_c1 = pib1;
            valor2_c2 = pib2;
        } else if (escolha2 == 4) {
            valor2_c1 = numPontos1;
            valor2_c2 = numPontos2;
        } else if (escolha2 == 5) {
            valor2_c1 = Densidade1;
            valor2_c2 = Densidade2;
        }

        // Soma considerando inversão para Densidade
        soma1 = (escolha1 == 5 ? 1.0 / valor1_c1 : valor1_c1) +
                (escolha2 == 5 ? 1.0 / valor2_c1 : valor2_c1);

        soma2 = (escolha1 == 5 ? 1.0 / valor1_c2 : valor1_c2) +
                (escolha2 == 5 ? 1.0 / valor2_c2 : valor2_c2);

        // Resultados
        printf("\n=== Comparação ===\n");
        printf("Cidade 1: %s\n", cidade1);
        printf("Cidade 2: %s\n", cidade2);
        printf("Atributo %d: %.2f x %.2f\n", escolha1, valor1_c1, valor1_c2);
        printf("Atributo %d: %.2f x %.2f\n", escolha2, valor2_c1, valor2_c2);
        printf("Soma dos atributos:\n");
        printf("%s: %.2f\n", cidade1, soma1);
        printf("%s: %.2f\n", cidade2, soma2);

        if (soma1 > soma2) {
            printf("\n %s venceu!\n", cidade1);
        } else if (soma2 > soma1) {
            printf("\n %s venceu!\n", cidade2);
        } else {
            printf("\n Empate!\n");
        }
    }

}