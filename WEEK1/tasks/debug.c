// This was ondly a simple task to see what was wrong in the code 
// ( The printf was only print )

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Type your name: ");
    string country = get_string("Type your nationality: ");

    printf("Hello, %s, from %s", name, country);
}