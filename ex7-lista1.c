#include <stdio.h>

int main()
{
    int A[20], B[20];
    char C[20];
    float D[20];

    int i;
    for(i = 0; i < 20; i++)
    {
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 20; i++)
    {
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 20; i++)
    {
        scanf("%c", &C[i]);
    }

    for(i = 0; i < 20; i++)
    {
        switch(C[i])
        {
            case '+':
                D[i] = A[i] + B[i];
                break;

            case '-':
                D[i] = A[i] - B[i];
                break;

            case '*':
                D[i] = A[i] * B[i];
                break;

            case '/':
                D[i] = (float) (A[i]/B[i]);
                break;
        }
    }
}
