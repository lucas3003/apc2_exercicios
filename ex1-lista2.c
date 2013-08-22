#include <stdio.h>

int main()
{
    int numeros, i;
    scanf("%d", &numeros);

    int vetor[numeros];

    for(i = 0; i < numeros; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for(i = numeros-1; i >= 0; i--)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
