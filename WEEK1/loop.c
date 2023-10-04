#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

int main(void)
{

    const int n = get_int("Digite o lado do quadrado que deseja imprimir: ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}