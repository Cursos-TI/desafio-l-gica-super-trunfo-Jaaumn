#include <stdio.h>

int main (){

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
    int escolhajogador, primeiroatributo, segundoatributo, resultadoprimeiroatributo, resultadosegundoatributo;

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
        printf("%s - %s venceu!\n\n", nomedacidadeA, estadoA);
        
    } else {
        printf("%s - %s venceu!\n\n", nomedacidadeB, estadoB);
    }
    
        // foi escolhido o PIB per capita para a comparação 


    
    printf("### Escolha um atributo para ser comparado ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demografica\n");
    printf("Escolha: ");
    scanf("\n %d", &escolhajogador);

        // Criado menu acima com escolhas 

    switch (escolhajogador)
    {
    case 1:
        if (populacaoA > populacaoB)
        {
            printf("Cidade %s e %s \n", nomedacidadeA, nomedacidadeB);
            printf("O atributo utilizado na comparação é a População\n");
            printf("Valor da cidade %s: %lu \nValor da cidade %s: %lu \n", nomedacidadeA, populacaoA, nomedacidadeB, populacaoB);
            printf("Cidade %s vence\n", nomedacidadeA);
        } else if (populacaoA < populacaoB)
            {
                printf("Cidade %s e %s \n", nomedacidadeA, nomedacidadeB);
                printf("O atributo utilizado na comparação é a População\n");
                printf("Valor da cidade %s: %lu \nValor da cidade %s: %lu \n", nomedacidadeA, populacaoA, nomedacidadeB, populacaoB);
                printf("Cidade %s vence\n", nomedacidadeB);
            } else 
            {
                printf("Empate\n");
            }
        break;
    case 2:
        if (areaemkmA > areaemkmB)
        {
            printf("Cidade %s e %s \n", nomedacidadeA, nomedacidadeB);
            printf("O atributo utilizado na comparação é a Área\n");
            printf("Valor da cidade %s: %.2f \nValor da cidade %s: %.2f \n", nomedacidadeA, areaemkmA, nomedacidadeB, areaemkmB);
            printf("Cidade %s vence\n", nomedacidadeA);
        } else if (areaemkmA < areaemkmB)
            {
                printf("Cidade %s e %s \n", nomedacidadeA, nomedacidadeB);
                printf("O atributo utilizado na comparação é a Área\n");
                printf("Valor da cidade %s: %.2f \nValor da cidade %s: %.2f \n", nomedacidadeA, areaemkmA, nomedacidadeB, areaemkmB);
                printf("Cidade %s vence\n", nomedacidadeB);
            } else 
            {
                printf("Empate\n");
            }
        break;    
    case 3:
            if (PIBA > PIBB)
            {
                printf("Cidade %s e %s \n", nomedacidadeA, nomedacidadeB);
                printf("O atributo utilizado na comparação é o PIB\n");
                printf("Valor da cidade %s: %.2f \nValor da cidade %s: %.2f \n", nomedacidadeA, PIBA, nomedacidadeB, PIBB);
                printf("Cidade %s vence\n", nomedacidadeA);
            } else if (PIBA < PIBB)
                {
                    printf("Cidade %s e %s \n", nomedacidadeA, nomedacidadeB);
                    printf("O atributo utilizado na comparação é o PIB\n");
                    printf("Valor da cidade %s: %.2f \nValor da cidade %s: %.2f \n", nomedacidadeA, PIBA, nomedacidadeB, PIBB);
                    printf("Cidade %s vence\n", nomedacidadeB);
                } else 
                {
                    printf("Empate\n");
                }
        break;
    case 4:
            if (numerodepontosturisticosA > numerodepontosturisticosB)
            {
                printf("Cidade %s e %s \n", nomedacidadeA, nomedacidadeB);
                printf("O atributo utilizado na comparação é o número de pontos turísticos\n");
                printf("Valor da cidade %s: %d \nValor da cidade %s: %d \n", nomedacidadeA, numerodepontosturisticosA, nomedacidadeB, numerodepontosturisticosB);
                printf("Cidade %s vence\n", nomedacidadeA);
            } else if (numerodepontosturisticosA < numerodepontosturisticosB)
                {
                    printf("Cidade %s e %s \n", nomedacidadeA, nomedacidadeB);
                    printf("O atributo utilizado na comparação é o número do pontos turísticos\n");
                    printf("Valor da cidade %s: %d \nValor da cidade %s: %d \n", nomedacidadeA, numerodepontosturisticosA, nomedacidadeB, numerodepontosturisticosB);
                    printf("Cidade %s vence\n", nomedacidadeB);
                } else 
                {
                    printf("Empate\n");
                }
        break;
    case 5:
            if (densidadepopulacionalA < densidadepopulacionalB)
            {
                printf("Cidade %s e %s \n", nomedacidadeA, nomedacidadeB);
                printf("O atributo utilizado na comparação é a densidade populacional\n");
                printf("Valor da cidade %s: %.2f \nValor da cidade %s: %.2f \n", nomedacidadeA, densidadepopulacionalA, nomedacidadeB, densidadepopulacionalB);
                printf("Cidade %s vence\n", nomedacidadeA);
            } else if (densidadepopulacionalA > densidadepopulacionalB)
                {
                    printf("Cidade %s e %s \n", nomedacidadeA, nomedacidadeB);
                    printf("O atributo utilizado na comparação é densidade populacional\n");
                    printf("Valor da cidade %s: %.2f \nValor da cidade %s: %.2f \n", nomedacidadeA, densidadepopulacionalA, nomedacidadeB, densidadepopulacionalB);
                    printf("Cidade %s vence\n", nomedacidadeB);
                } else 
                {
                    printf("Empate\n");
                }
        break;
    
    default:
                printf("Selecione uma opção valida!");
        break;
    }


    printf("\n\n### Comparando dois atributos! ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demografica\n");
    printf("Escolha o primeiro atributo: ");
    scanf("\n %d", &primeiroatributo);

    // Construindo menu interativo

    switch (primeiroatributo)
    {
    case 1:
        printf("\nVocê escolheu População! \n");
        resultadoprimeiroatributo = populacaoA > populacaoB ? 1 : 0;
        break;
    case 2:
        printf("\nVocê escolheu Área! \n");
        resultadoprimeiroatributo = areaemkmA > areaemkmB ? 1 : 0;
        break;
    case 3:
        printf("\nVocê escolheu PIB! \n");
        resultadoprimeiroatributo = PIBA > PIBB ? 1 : 0;
        break;
    case 4:
        printf("\nVocê escolheu Número de pontos turisticos! \n");
        resultadoprimeiroatributo = numerodepontosturisticosA > numerodepontosturisticosB ? 1 : 0;
        break;
    case 5:
        printf("\nVocê escolheu Densidade demografica! \n");
        resultadoprimeiroatributo = densidadepopulacionalA < densidadepopulacionalB ? 1 : 0;
        break;
    
    default:
        printf("\n\nOpção inválida\n");
        break;
    }

    // Switch para opções do primeiro menu

    printf("\n\n### Comparando dois atributos! ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demografica\n");
    printf("Escolha o segundo atributo: ");
    scanf("\n %d", &segundoatributo);

    switch (segundoatributo)
    {
        if (primeiroatributo = segundoatributo)
        {
            printf("\n\nVocê escolhou o mesmo atributo para ser comparado!\n");
        } else
        {
             case 1:
                printf("\nVocê escolheu População! \n");
                resultadosegundoatributo = populacaoA > populacaoB ? 1 : 0;
                break;
            case 2:
                printf("\nVocê escolheu Área! \n");
                resultadosegundoatributo = areaemkmA > areaemkmB ? 1 : 0;
                break;
            case 3:
                printf("\nVocê escolheu PIB! \n");
                resultadosegundoatributo = PIBA > PIBB ? 1 : 0;
                break;
            case 4:
                printf("\nVocê escolheu Número de pontos turisticos! \n");
                resultadosegundoatributo = numerodepontosturisticosA > numerodepontosturisticosB ? 1 : 0;
                break;
            case 5:
                printf("\nVocê escolheu Densidade demografica! \n");
                resultadosegundoatributo = densidadepopulacionalA < densidadepopulacionalB ? 1 : 0;
                break;
            
            default:
                printf("\nOpção inválida\n");
                break;
            
            }
        }


    if (resultadoprimeiroatributo && resultadosegundoatributo)
    {
        printf("\nComparação - %s e %s\n", nomedacidadeA, nomedacidadeB);
        printf("Cidade %s venceu", nomedacidadeA);
    } else if (resultadoprimeiroatributo != resultadosegundoatributo)
        {
            printf("\nEmpate");
        } else
        {
            printf("\nComparação - %s e %s\n", nomedacidadeA, nomedacidadeB);
            printf("Cidade %s venceu", nomedacidadeB);
        }
    
    
    






return 0;






}