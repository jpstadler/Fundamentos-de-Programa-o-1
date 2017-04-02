#include <stdio.h>

main()
{

    int n=536, //o numero deve ser maior que 519 e multiplo de 6
        reverso, aux; //para achar o reverso do numero

    for(n=736;n<2500; n+=500) //De 500 em 500 o padrão 696 aparece no final do numero
    {
        {
            aux=n*n;
            reverso=0;
            printf("%n \t %d\n\n", n, aux);

            while(aux!=0)
            {
                reverso = reverso*10 + aux%10;
                aux/=10;

                if(reverso>696926) //caso o reverso seja maior que o numero desejado, pode-se parar a análise
                    break;
            }
            aux=0;
            printf("%4d\t %d\t %d\n", n, aux, reverso);
            //n+=50;
        }
    }
}
