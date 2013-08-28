#include <stdio.h>

int main()
{
    int A[20];
    int i, pares;

    for(i = 0, pares = 0; i < 20; i++)
    {
        printf("A[%d] = ",i);
        scanf("%d", &A[i]);
        if((A[i] % 2) == 0) ++pares;
    }

    printf("Quantidade de numeros pares no vetor = %d\n", pares);

    return 0;
}
