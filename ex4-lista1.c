#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    gets(text);

    int i, contador = 0;

    for(i = 0; i < strlen(text); i++)
    {
        if(text[i] == '0' || text[i] == '1' || text[i] == '2' ||
           text[i] == '3' || text[i] == '4' || text[i] == '5' ||
           text[i] == '6' || text[i] == '7' || text[i] == '8' || text[i] == '9')
        {
            contador++;
        }
    }

    printf("Quantidade de digitos numericos = %d", contador);
}
