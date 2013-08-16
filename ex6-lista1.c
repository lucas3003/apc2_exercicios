#include <stdio.h>
#define MAX 100

int main()
{
    int i;

    int RA[MAX];
    float nota[MAX];

    for(i = 0; i < MAX; i++)
    {
        scanf("%d", &RA[i]);
        if(RA[i] < 0) break;

        scanf("%f", &nota[i]);
    }

    return 0;
}
