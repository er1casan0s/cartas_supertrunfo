#include <stdio.h>
#include <stdlib.h>

int main() {
    
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
    
    //Densidade Populacional
     float DensidadePopulacional1 =(float)pop1/area2;
     float DensidadePopulacional2 =(float)pop2/area2;

    //PIB Per capita
     float PIBperCapita1=(float)pib1/pop1;
     float PIBperCapita2=(float)pib2/pop2;
     
     
     
    int resultadoPop = pop1 > pop2;    
    int resultadoArea = area1 > area2;   
    int resultadoPib = pib1 > pib2;          
    int resultadoPontosT = pontos1 > pontos2; 
    int resultadoDensidade = DensidadePopulacional1 < DensidadePopulacional2;  
    int resultadoPIBPerCapita = PIBperCapita1 > PIBperCapita2;  
    int superPoder = resultadoPop + resultadoArea + resultadoPib + 
                     resultadoPontosT + resultadoDensidade + resultadoPIBPerCapita;
     
    // resultado ==1 >verdadeiro / resultado == 0 > falso
    
    printf("COMPARAÇÃO DE CARTAS\n");
    printf("População: Carta %d venceu\n", resultadoPop ? 1 : 2);
    printf("Área: Carta %d venceu\n", resultadoArea ? 1 : 2);
    printf("PIB: Carta %d venceu\n", resultadoPib ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", resultadoPontosT ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu \n", resultadoDensidade ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", resultadoPIBPerCapita ? 1 : 2);
    printf("Super Poder: Carta %d venceu com %d pontos\n", superPoder > 3 ? 1 : 2, superPoder);
    
    
    return 0;
}
