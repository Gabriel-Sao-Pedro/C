#include <stdio.h>
#include <stdlib.h>
int r;
int i;

void teste(int n)
{

    for (i = 4; i >= 0; i--)
    {
        r = n >> i;

        if (r & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}

int main()
{
    int numero;
    printf("Digite um número entre 0 e 31: \n");
    scanf("%d", &numero);
    if (numero >= 0 && numero <= 31)
        teste(numero);
    else
    {
        printf("Tu é engraçadão!! Digite entre 0 e 31 meu consagrado \n");
    }
}