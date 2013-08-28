#include <stdio.h>
#include <string.h>

int main()
{
    char A[201],B[201];

    printf("A=");
    gets(A);

    printf("B=");
    gets(B);

    printf("Antes da troca: \n");
    printf("A = %s\n", A);
    printf("B = %s\n", B);

    printf("Depois da troca: \n");

    int i, j;
    char aux;
    for(i = 0, j = 199; i < 200; i++, j--)
    {
        aux = A[i];
        A[i] = B[j];
        B[j] = aux;
    }

    printf("A = %s\n", A);
    printf("B = %s\n", B);

    return 0;
}
