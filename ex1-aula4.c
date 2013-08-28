#include <stdio.h>

void maior(int A[])
{
    int i, maior = A[0];

    for(i = 1; i < 8; i++) if(maior < A[i]) maior = A[i];

    printf("Maior valor = %d\n", maior);
}

void menor(int A[])
{
    int i, menor = A[0];

    for(i = 1; i < 8; i++) if(menor > A[i]) menor = A[i];

    printf("Menor valor = %d\n", menor);
}

int main()
{
    int A[] = {20, 30, 40, 10, 50, 110, 45, 55};
    maior(A);
    menor(A);

    return 0;
}
