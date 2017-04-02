#include <stdio.h>

main()
{
    unsigned long n=0, m=0, reverso=0, aux, quadrado=0; 

    while(reverso!=69696)
    {
        n++;
        m++;
        quadrado=quadrado+(2*n-1); //a quadrado de n é a soma dos n primeiros impares
        //printf(">%d\t%d\n", m, quadrado);

        aux=quadrado;
        reverso=0;

        while(aux!=0)
        {
            reverso=reverso*10+aux%10;
            aux/=10;

            //printf("->%d\t%d\n", aux, reverso);
        }
    }

    printf("\n-->%d\t%d\n", m, quadrado);
}

