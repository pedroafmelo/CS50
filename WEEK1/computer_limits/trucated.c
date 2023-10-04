#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int x = get_int("Digite um número x: ");
    const int y = get_int("Digite um número y: ");

    const float z = (float)x / (float)y;
    printf("Resultado = %f", z);
}