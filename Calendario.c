#include <stdio.h>
main()
{
    int ano=0, auxa=0, auxb=0, auxc=0,
        l=0, j=0, k=0, kp=0, semAnt=0,
        diaSemana=0,mes=0,terMes=31,
        ehBissexto=0; //Variável indicadora para ano bissexto
    printf("Informe o ano: ");
    scanf("%d", &ano);
    //Verificação de ano bissexto
    if(ano%4==0 && ano%100!=0 || ano%400==0)
        ehBissexto = 1;
    //dia da semana de 01/01/AAAA
    //1/1/1900 eh segunda
    auxa = ano-1900;            //quantos anos passaram desde 1900
    auxb = auxa/4;
    if(!ehBissexto)                //quantos as bissextos;
        auxc = (365*(auxa-auxb) + 366*auxb)+1; //qunatidade de dias entre a 01/01/1900 e a data;
    else                                       //a fórmula é feita para anos bissextos, portanto
        auxc = 365*(auxa-auxb) + 366*auxb;     //foi necessario o '+1' pra adicionar uma lacuna
    diaSemana = auxc%7;                        //no lugar do 366° dia
    
   printf("\n\n\t\tJaneiro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
   for(j=0; j<diaSemana; j++)          //A primeira semana tem um comportamento diferente das outras,
        printf(" \t");                  //é impossível alcançar dois resultados diferentes com a mesma entrada,
   for(l=0; l<7-diaSemana; l++)        //por isso criei um laço só pra ela. Isso inclui os espaçamento, por isso
   {
       //criei 'kp'(k da primeira semana) pra não desorganizar o resto do mes.
       kp++;
       printf("%d\t",kp);
   }
   printf("\n");
   for(k=kp; k<=terMes; k+0)
   {
       for(j=0; j<=6; j++)             //esse laço foi necessario porque eu precisei de uma quebra de linha
   {
        //fora de um laço, para que ele não pulasse uma linha apos cada dia
        k++;
   if(k>terMes)
   {
        semAnt=0;
        semAnt=j;
        kp=0;               //termino de mes ocorre apenas uma vez, por isso vem antes
        break;
   }
   else
        printf("%d\t",k);
   }
   if(j>=6)                    //quebra de linha da semana comum
        printf("\n");
   }
   
    printf("\n\n\n");
    for(mes=1; mes<=11; mes++)
    {

    switch(mes)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            printf("\n\n\t\tFevereiro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
            if(!ehBissexto)
            {
                terMes=28;
            }
            else
            {
                terMes=29;
            }
            break;
        }
        case 2:
        {
            printf("\n\n\t\tMarco de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
            terMes=31;
            break;
            }
        case 3:
        {
             printf("\n\n\t\tAbril de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
             terMes=30;
             break;
        }
        case 4:
        {
            printf("\n\n\t\tMaio de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
            terMes=31;
            break;
        }
        case 5:
        {
            printf("\n\n\t\tJunho de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
            terMes=30;
            break;
         }
         case 6:
         {
            printf("\n\n\t\tJulho de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
            terMes=31;
            break;
         }
         case 7:
         {
            printf("\n\n\t\tAgosto de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
            terMes=31;
            break;
          }
          case 8:
          {
             printf("\n\n\t\tSetembro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
             terMes=30;
             break;
          }
          case 9:
          {
             printf("\n\n\t\tOutubro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
             terMes=31;
             break;
          }
          case 10:
          {
             printf("\n\n\t\tNovembro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
             terMes=30;
             break;
          }
          case 11:
          {
             printf("\n\n\t\tDezembro de %d\nDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n",ano);
             terMes=31;
             break;
          }
    }
        for(j=0; j<semAnt; j++)
            printf(" \t");

        for(l=0; l<=6-semAnt; l++)
        {
            kp++;
            printf("%d\t",kp);
        }
        printf("\n");
        
        for(k=kp; k<=terMes; k+0)
            {
                for(j=0; j<=6; j++)
                {
                    k++;
                    if(k>terMes)
                    {
                        semAnt=0;
                        semAnt=j;
                        kp=0;                //termino de mes ocorre apenas uma vez, por isso vem antes
                        break;
                    }
                    else
                        printf("%d\t",k);
                }
                if(j>=6)                    //quebra de linha da semana comum
                    printf("\n");
            }
            printf("\n\n\n");
        }
    }
