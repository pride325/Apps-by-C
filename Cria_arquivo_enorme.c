#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arq;

    int x[20000], i;

    arq = fopen("arquivo.txt", "wb");

    for(i = 0; i < 10000000; i++)
    {
        fwrite(x,sizeof(x),1,arq);
    }

    fclose(arq);

    return 0;
}

