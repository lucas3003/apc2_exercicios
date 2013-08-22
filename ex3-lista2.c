#include <stdio.h>
#include <string.h>

int main()
{
    char frase[50];
    int qtdEspaco = 0;

    printf("Digite uma frase de ate 50 caracteres\n");
    gets(frase);

    int i;
    for(i = 0; i < strlen(frase); i++)
    {
        if(frase[i] != ' ') printf("%c", frase[i]);
        else qtdEspaco++;
    }

    printf("\n Quantidade de espacos = %d\n", qtdEspaco);

    return 0;
}
