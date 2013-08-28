#include <stdio.h>

int main()
{
    int N[20];

    int i, indice;
    for(i = 0; i < 20; i++)
    {
        scanf("%d", &N[i]);
    }

    int menor = N[0];
    indice = 0;
    for(i = 1; i < 20; i++)
    {
        if(menor > N[i])
        {
            menor = N[i];
            indice = i;
        }
    }

    printf("O menor elemento de N eh %d e sua posicao dentro do vetor eh %d\n", menor, indice);

    return 0;
}
