#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declarar var 
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";
    
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;
    
    float valorA = 10.50;
    float valorB = 20.40;
    
    unsigned int estoqueMinimoA = 500;  // ✅ Nome corrigido
    unsigned int estoqueMinimoB = 2500; // ✅ Nome corrigido
    
    double valorTotalA;
    double valorTotalB;
    
    int resultadoA, resultadoB;
    
    // Exibir as informações dos produtos
    printf("#########INVENTÁRIO#########\n");
    printf("%s tem estoque %u e o valor unitário é %.2f.\n", produtoA, estoqueA, valorA);
    printf("%s tem estoque %u e o valor unitário é %.2f.\n", produtoB, estoqueB, valorB);
    printf("-----------------------------------------------------------\n");
    
    // Comparações com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;  // ✅ Nome corrigido
    resultadoB = estoqueB > estoqueMinimoB;  // ✅ Nome corrigido
    
    printf("O produto %s está acima do estoque mínimo? %d.\n", produtoA, resultadoA);
    printf("O produto %s está acima do estoque mínimo? %d.\n", produtoB, resultadoB);
     printf("-----------------------------------------------------------\n");
    // Comparações entre os valores totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d. \n",
           estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));
     printf("-----------------------------------------------------------\n");
    return 0;
}
