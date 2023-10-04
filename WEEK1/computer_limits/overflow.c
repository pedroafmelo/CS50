#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const long i = get_long("X: ");
    const long j = get_long("Y: ");

    const long n = i + j;

    printf("%li", n);
}