#include <stdio.h>

main()
{
    int ano, auxa, auxb, auxc,
        l=0, j=0, k=0, kp=0,
        diaSemana,
        ehBissexto = 0; //Variável indicadora para ano bissexto

    printf("Informe o ano: ");
    scanf("%d", &ano);

    //Verificação de ano bissexto
    if(ano%4==0 && ano%100!=0 || ano%400==0)
        ehBissexto = 1;

    //dia da semana de 01/01/AAAA
    //1/1/1900 eh segunda
    auxa = ano-1900;            //quantos anos passaram desde 1900
    auxb = auxa/4;                //quantos as bissextos;
    auxc = (365*(auxa-auxb) + 366*auxb)+1; //qunatidade de dias entre a 01/01/1900 e a data;
    diaSemana = auxc%7;

    if(!ehBissexto)
    {
        printf("\n\n\t\tJANEIRO de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n", ano);
        for(j=0; j<diaSemana; j++)
            printf(" \t");
        /*A primeira semana tem um comportamento diferente das outras,
        é impossível alcançar dois resultados diferentes com a mesma entrada,
        por isso criei um laço só pra ela. Isso inclui os espaçamento, por isso
        criei 'kp'(k da primeira semana) pra não desorganizar o resto do mes.*/
        for(l=0; l<7-diaSemana; l++)
        {
            kp++;
            printf("%d\t",kp);
        }

        /*Formatação das semanas comuns*/
        printf("\n");
        for(k=kp; k<=31; k+0)
        {
            for(j=0; j<=6; j++)
            {
                /*esse laço foi necessario porque eu precisei de uma quebra de linha fora de um laço,
                para que ele não pulasse uma linha apos cada dia*/
                k++;
                if(k>31)                 //termino de mes ocorre apenas uma vez, por isso vem antes
                    break;
                else
                    printf("%d\t",k);
            }
            if(j>6)                    //quebra de linha da semana comum
                printf("\n");
        }


        /*for(i=2; i<=12; i++){
            printf("\t\t %d de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n", i,ano);
        }*/

        /*}*/
    }
    else
        printf("Eh Bissexto!!\n");
}
