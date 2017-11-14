#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    char comando[20];
    int i;

    for(i = 0; i < 100; i++)
    {
       sprintf(comando, "mkdir MILGRAU%d", i);
       system(comando);
    }

    return 0;
}
