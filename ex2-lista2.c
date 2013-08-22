#include <stdio.h>

int main()
{
    char gabarito[31];

    int numeroAlunos, i;

    printf("Indique o numero de alunos\n");
    scanf("%d", &numeroAlunos);

    char alunos[numeroAlunos][31];

    for(i = 0; i < numeroAlunos; i++)
    {
        printf("Indique o cartao resposta do aluno %d\n", i);
        fflush(stdin);
        gets(alunos[i]);
    }

    printf("Indique o gabarito:\n");
    gets(gabarito);

    int acertos[numeroAlunos], j;

    for(i = 0; i < numeroAlunos; i++)
    {
        for(j = 0; j < 31; j++)
        {
            if(alunos[i][j] == gabarito[j]) ++acertos[i];
        }

    }

    for(i = 0; i < numeroAlunos; i++)
    {
        printf("Aluno %d, nota %d\n", i, acertos[i]);
    }

    return 0;
}
