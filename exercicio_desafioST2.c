#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Estados
    char estado1='A';
    char estado2= 'B';
    
    //Código da carta 
    char cod1[3] = "01";
    char cod2[3] = "02";
    
    //Nome da cidade 
    char nome1[50] = "São Paulo";
    char nome2[50] = "Rio de Janeiro";
    
    // Populacão
    int pop1 = 12325000;
    int pop2 = 6748000;
    
    //Área 
    float area1 = 152111;
    float area2 = 120025;
    
    //PIB
    float pib1 = 69928;
    float pib2 = 30050;
    
    //Pontos turísticos 
    int pontos1= 50;
    int pontos2 = 30;
    
    //Carta 1
    
    printf("Carta 1\n");
    printf("Estado: %c\n",estado1);
    printf("Código da carta: %c%s\n",estado1,cod1);
    printf("Nome da cidade: %s\n",nome1);
    printf("População: %d habitantes\n",pop1);
    printf("Área: %f km²\n",area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Números de pontos turísticos: %d\n",pontos1);
    //DENSIDADEPOPULACIONAL
    printf("Densidade Populacional: %f\n",(float)pop1/area1);
    //RENDA PER CAPITA    
    printf("PIB per Capita: %f\n",(float)pib1/pop1);

    
    //Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n",estado2);
    printf("Código da carta: %c%s\n",estado2,cod2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %d habitantes\n",pop2);
    printf("Área: %fkm²\n",area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Números de pontos turísticos: %d\n",pontos2);
     //DENSIDADEPOPULACIONAL
    printf("Densidade Populacional: %f\n",(float)pop2/area2);
    //RENDA PER CAPITA    
    printf("PIB per Capita: %f",(float)pib2/pop2);
    
 
    return 0;
}
