#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    gets(text);

    char vogais[] = "aeiou";
    int vezes[] = {0,0,0,0,0}, i, j;

    for(i=0; i<strlen(text); i++)
    {
        for(j=0; j<5; j++)
            if(text[i] == vogais[j]) vezes[j]++;
    }

    if(vezes[0] > 0) printf("Vogal A: %d vezes\n", vezes[0]);
    if(vezes[1] > 0) printf("Vogal E: %d vezes\n", vezes[1]);
    if(vezes[2] > 0) printf("Vogal I: %d vezes\n", vezes[2]);
    if(vezes[3] > 0) printf("Vogal O: %d vezes\n", vezes[3]);
    if(vezes[4] > 0) printf("Vogal U: %d vezes\n", vezes[4]);


    return 0;
}
