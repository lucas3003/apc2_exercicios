#include <stdio.h>

int main()
{
    int F[20], G[20], produtoF = 1, produtoG = 1;
    int i;

    for(i = 0; i < 20; i++)
    {
        printf("F[%d] = ", i);
        scanf("%d", &F[i]);
        produtoF *= F[i];
    }

    for(i = 0; i < 20; i++)
    {
        printf("G[%d] = ", i);
        scanf("%d", &G[i]);
        produtoG *= G[i];
    }

    printf("Produto do vetor F = %d, produto do vetor G = %d\n", produtoF, produtoG);

    return 0;


}
