#include <stdio.h>

main()
{
    int ano=0, auxa=0, auxb=0, auxc=0,
        l=0, j=0, k=0, kp=0, master=0,
        diaSemana=0,mes=0,terMes=31,
        ehBissexto=0; //Variável indicadora para ano bissexto

    char noMes;

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
        for(mes=0; mes<=11; mes++)
        {
            switch(mes)
            {
            case 0:
            {
                printf("\n\n\t\tJaneiro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                break;
            }

            case 1:
            {
                printf("\n\n\t\tFevereiro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                terMes-=3;
                break;
            }

            case 2:
            {
                printf("\n\n\t\tMarco de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                break;
            }

            case 3:
            {
                printf("\n\n\t\tAbril de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                terMes-=1;
                break;
            }

            case 4:
            {
                printf("\n\n\t\tMaio de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                break;
            }

            case 5:
            {
                printf("\n\n\t\tJunho de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                terMes-=1;
                break;
            }

            case 6:
            {
                printf("\n\n\t\tJulho de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                break;
            }
            case 7:
            {
                printf("\n\n\t\tAgosto de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                break;
            }
            case 8:
            {
                printf("\n\n\t\tSetembro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                terMes-=1;
                break;
            }
            case 9:
            {
                printf("\n\n\t\tOutubro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                break;
            }
            case 10:
            {
                printf("\n\n\t\tNovembro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                terMes-=1;
                break;
            }
            case 11:
            {
                printf("\n\n\t\tDezembro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
                break;
            }
            printf("%d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
            }
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
            printf("\n");
            for(k=kp; k<=terMes; k+0)
            {
                if(mes%2==0)
                {
                    for(j=0; j<=6; j++)
                    {
                        /*esse laço foi necessario porque eu precisei de uma quebra de linha fora de um laço,
                        para que ele não pulasse uma linha apos cada dia*/
                        k++;
                        if(k>terMes)
                        {
                            master=j;                //termino de mes ocorre apenas uma vez, por isso vem antes
                            break;
                        }
                        else
                            printf("%d\t",k);
                    }
                    if(j>6)                    //quebra de linha da semana comum
                        printf("\n");
                }

                else
                {
                    for(j=0; j<=6; j++)
                    {
                        k++;
                        if(k>terMes)
                        {
                            master=j;                //termino de mes ocorre apenas uma vez, por isso vem antes
                            break;
                        }
                        else
                            printf("%d\t",k);
                    }
                    if(j>6)                    //quebra de linha da semana comum
                        printf("\n");
                }
            }
            kp=0;
            terMes=31;
            printf("\n\n\n%d",master);
        }


        /*for(i=2; i<=12; i++)
        {
            printf("\t\t %d de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n", i,ano);
        }*/
    }
    else
        printf("Eh Bissexto!!\n");
}
