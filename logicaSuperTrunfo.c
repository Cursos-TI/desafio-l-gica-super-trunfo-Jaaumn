#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estadoA [3], estadoB [3];
    char nomedacidadeA [20], nomedacidadeB [20];
    unsigned long int populacaoA, populacaoB;
    float areaemkmA, areaemkmB;
    float PIBA, PIBB;
    int numerodepontosturisticosA, numerodepontosturisticosB;
    float densidadepopulacionalA, densidadepopulacionalB;
    float PIBpercaptaA, PIBpercaptaB;
    float SuperpoderA, SuperpoderB;
    int resultadopopulacao, resultadoarea, resultadoPIB, resultadopontosturisticos, resultadodensidade, resultadoPIBpercapita, resultadosuperpoder;

        //atribuicao das variaveis

    printf("***Insira os dados da primeira cidade*** \n");
    printf("Digite a sigla do estado: ");
    scanf("%s", estadoA);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidadeA);
    printf("Digite a populacao da cidade: ");
    scanf("%lu", &populacaoA);
    printf("Digite a área em KM da cidade: ");
    scanf(" %f", &areaemkmA);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &PIBA);
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &numerodepontosturisticosA);

    printf("\n***Insira os dados da Segunda cidade*** \n");
    printf("Digite a sigla do estado: ");
    scanf("%s", estadoB);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidadeB);
    printf("Digite a populacao da cidade: ");
    scanf("%lu", &populacaoB);
    printf("Digite a área em KM da cidade: ");
    scanf(" %f", &areaemkmB);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &PIBB);
    printf("Digite o número de pontos turisticos: ");
    scanf(" %d", &numerodepontosturisticosB);

    //leitura das informações das cartas

    densidadepopulacionalA  = (float) populacaoA / areaemkmA; 
    densidadepopulacionalB  = (float) populacaoB / areaemkmB;

    printf("\nA Densidade populacional de %s-%s é : %.2f \n" ,nomedacidadeA, estadoA, densidadepopulacionalA);
    printf("A Densidade populacional de %s-%s é: %.2f \n\n" , nomedacidadeB, estadoB, densidadepopulacionalB);
   
    // Calculo e apresentaçao da densidade populacional

    PIBpercaptaA = (float) PIBA / populacaoA;
    PIBpercaptaB = (float) PIBB / populacaoB;

    printf("O PIB per capita de %s-%s é: %.2f \n", nomedacidadeA, estadoA, PIBpercaptaA);
    printf("O PIB per capita de %s-%s é: %.2f \n\n", nomedacidadeB, estadoB, PIBpercaptaB);

    // Calculo e apresentaçao PIB per capita

    SuperpoderA = (float) populacaoA + areaemkmA + PIBA + numerodepontosturisticosA + (1.0 / densidadepopulacionalA) + PIBpercaptaA;
    SuperpoderB = (float) populacaoB + areaemkmB + PIBB + numerodepontosturisticosB + (1.0 / densidadepopulacionalB) + PIBpercaptaB;
    
    printf("O Superpoder de %s-%s é: %.2f \n", nomedacidadeA, estadoA, SuperpoderA);
    printf("O Superpoder de %s-%s é: %.2f \n\n", nomedacidadeB, estadoB, SuperpoderB);
    
    // Calculo e apresentaçao do super poder

    resultadopopulacao = populacaoA > populacaoB;
    resultadoarea = areaemkmA > areaemkmB;
    resultadoPIB = PIBA > PIBB;
    resultadopontosturisticos = numerodepontosturisticosA > numerodepontosturisticosB;
    resultadodensidade = densidadepopulacionalA > densidadepopulacionalB;
    resultadoPIBpercapita = PIBpercaptaA > PIBpercaptaB;
    resultadosuperpoder = SuperpoderA > SuperpoderB;

    printf("Populacao: Carta 1 venceu (%d) \n", resultadopopulacao);
    printf("Área: Carta 2 venceu (%d) \n", resultadoarea);
    printf("PIB: Carta 1 venceu (%d) \n", resultadoPIB);
    printf("Pontos turísticos: Carta 1 venceu (%d) \n", resultadopontosturisticos);
    printf("Densidade Populacional: Carta 2 venceu (%d) \n", resultadodensidade);
    printf("PIB per capita: Carta 2 venceu (%d) \n", resultadoPIBpercapita);
    printf("Super poder: Carta 1 venceu (%d) \n\n", resultadosuperpoder);

        // Calculo e apresentaçao das comparaçôes

    printf("Carta 1 - %s - %s: %.2f \n", nomedacidadeA, estadoA, PIBpercaptaA);
    printf("Carta 1 - %s - %s: %.2f \n", nomedacidadeB, estadoB, PIBpercaptaB);

    if (PIBpercaptaA > PIBpercaptaB){
        printf("%s - %s venceu!", nomedacidadeA, estadoA);
        
    } else {
        printf("%s - %s venceu!", nomedacidadeB, estadoB);
    }
    
        // foi escolhido o PIB per capita para a comparação 
    

        
    return 0;
}
