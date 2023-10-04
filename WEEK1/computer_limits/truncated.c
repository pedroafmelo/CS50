#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int x = get_int("Digite um número x: ");
    const int y = get_int("Digite um número y: ");

    const double z = (double)x / (double)y;
    printf("Resultado = %.20f", z);
}