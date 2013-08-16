#include <stdio.h>

int main()
{
    int i;
    float reais[500];
    float menor, maior;

    for(i = 0; i < 500; i++)
    {
        scanf("%f", &reais[i]);
    }

    menor = reais[0];
    maior = reais[0];

    for(i = 0; i < 500; i++)
    {
        if(menor > reais[i]) menor = reais[i];
        if(maior < reais[i]) maior = reais[i];
    }

    printf("Menor valor = %f , Maior valor = %f\n", menor, maior);


}
