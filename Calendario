#include <stdio.h>

main()
{
    int ano, a, b, c, w, i,l=0, j=0, k=0, kp=0, mult, ordem,
                           diaSemana, bissexto, sec, anoaux, diaaux,
                           ordemMax,
                           ehBissexto = 0; //Variável indicadora para ano bissexto

    printf("Informe o ano");
    scanf("%d", &ano);
    anoaux=ano;
    printf("%d\n",anoaux);


    //Verificação de ano bissexto
    if(ano%4==0 && ano%100!=0 || ano%400==0)
        ehBissexto = 1;

    //dia da semana de 01/01/AAAA
    //1/1/1900 eh segunda
    /*a = ano-1900;            //quantos anos passaram desde 1900
    b = a/4;                //quantos as bissextos;
    c = 365*(a-b) + 366*b; //qunatidade de dias entre a 01/01/1900 e a data;
    diaSemana = c%7;
    printf("\n%d\n%d\n%d\n%d\n",diaSemana,a,b,c);*/


    sec=0;
    anoaux-=2000;
    printf("%d\n",anoaux);
    mult=7;

    while(anoaux%mult>6)
        mult+=7;

    diaSemana=((anoaux-mult)+(anoaux/4))+sec;
    mult=0;

    while(mult<diaSemana)
        mult+=7;

    printf("%d\n",diaSemana);
    if(diaSemana>7)
        diaSemana-=mult;

    printf("%d\n",diaSemana);

    switch (diaSemana)
    {
    case 0:
        printf("Domingo\n");
        break;
    case 1:
        printf("Segunda-feira\n");
        break;
    case 2:
        printf("Terça-feira\n");
        break;
    case 3:
        printf("Quarta-feira\n");
        break;
    case 4:
        printf("Quinta-feira\n");
        break;
    case 5:
        printf("Sexta-feira\n");
        break;
    case 6:
        printf("Sábado\n");
        break;
    }

    diaSemana=4; /*AINDA NÃO CONSEGUI ACERTAR O CÁLCULO DO DIA DA SEMANA!!! POR ISSO FORJEI ESSE RESULTADO.*/

    /*if(!ehBissexto)
    {*/
    printf("\t\tJANEIRO de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n", ano);
    for(j=0; j<diaSemana; j++)
        printf(" \t");
    /*A primeira semana tem um comportamento diferente das outras,
    é impossível alcançar dois resultados diferentes com a mesma entrada,
    por isso criei um laço só pra ela. Isso inclui os espaçamento, por isso
    criei 'kp'(k da primeira semana) pra não desorganizar o resto do mes.*/
    while(l<7-diaSemana)
    {
        kp++;
        printf("%d\t",kp);
        l++;
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
