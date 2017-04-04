#include <stdio.h>
#include <math.h>

main()
{


    int   ordem=5, tamanho;                         //características do triângulo de Sierpinki
    unsigned long long combinacao, num=1, den=1, a;    //construcao do triângulo de Pascal
    int   i, j, k, m, n, esp;                       //controladores de laços

    tamanho = pow(2, ordem);

    for(esp=1; esp<=tamanho; esp++)
    {
        printf(" ");
    }
    printf("1\n");

    for(i=1; i<tamanho; i++)
    {
        for(esp=i; esp<tamanho; esp++)
        {
            printf(" ");
        }

        printf("1 ");

        for(j=1; j<=i; j++)
        {
            for(n=i, m=j; n>i-a, m>0; n--, m--)
            {
                num*=n;
                den*=m;
            }

            combinacao = num/den;

            if(combinacao%2!=0)
                printf("%d ", combinacao);
            else
                printf("%d ", combinacao);

            combinacao = 1;
            num=1;
            den=1;
        }

        printf("\n");
    }
}
