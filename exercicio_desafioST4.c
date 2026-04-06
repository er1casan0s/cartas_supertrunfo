#include <stdio.h>

int main() {
    // Variáveis para as cartas
    char estado1[50], estado2[50];
    char cod1[10], cod2[10];
    char nome1[50], nome2[50];
    int pop1, pop2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    // --- Cadastro da Carta 1 ---
   // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes de %c limpa o buffer do teclado
    printf("Código da Carta (ex: A01): ");
    scanf("%s", cod1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1); // Lê a string incluindo espaços
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", cod2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // --- Cálculos ---
    float densidade1 = (float)pop1 / area1;
    float densidade2 = (float)pop2 / area2;

    // --- Comparação de População (Maior vence) ---
    printf("\n=== COMPARAÇÃO: POPULAÇÃO ===\n");
    printf("Carta 1 (%s): %d\n", nome1, pop1);
    printf("Carta 2 (%s): %d\n", nome2, pop2);

    if (pop1 > pop2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (pop2 > pop1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // --- Comparação de Densidade Populacional (MENOR vence) ---
    printf("\n=== COMPARAÇÃO: DENSIDADE POPULACIONAL ===\n");
    printf("Carta 1 (%s): %.2f hab/km²\n", nome1, densidade1);
    printf("Carta 2 (%s): %.2f hab/km²\n", nome2, densidade2);

    // Regra: O menor valor vence para Densidade
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 venceu (Menor Densidade)!\n");
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 venceu (Menor Densidade)!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
