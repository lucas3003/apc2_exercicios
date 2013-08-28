#include <stdio.h>

int QtdeDigitosNumericos(char str[])
{
    int i, j, result = 0;
    char numericos[] = "0123456789";

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(str[i] == numericos[j]) result++;
        }
    }

    return result;
}

int main()
{
    char str[] = "APC 2 - Aula 04";

    printf("Qtd de digitos numericos = %d", QtdeDigitosNumericos(str));

    return 0;
}
