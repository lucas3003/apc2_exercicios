#include <stdio.h>

int main()
{
    float K[30];
    int i;

    for(i = 0; i < 30; i++)
    {
        scanf("%f", &K[i]);
    }

    int aux;
    for(i = 0 ; i < 29; i++)
    {
        if((i % 2) != 0)
        {
            aux = K[i];
            K[i] = K[i+1];
            K[i+1] = aux;
        }
    }
}
