#include <stdio.h>
#define MAX 10

int main()
{
    float A[MAX], B[MAX];
    int i;

    for(i = 0; i < MAX; i++)
    {
        scanf("%f", &A[i]);
    }

    for(i = 0; i < MAX; i++)
    {
        scanf("%f", &B[i]);
    }

    float C[MAX];

    for(i = 0; i < MAX; i++)
    {
        C[i] = A[i] * B[MAX-1-i];
    }
}
