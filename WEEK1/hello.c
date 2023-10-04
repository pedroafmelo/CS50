#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    char name;
    name = get_char("Type a char: ");
    if (isalpha(name))
    {
        printf("Yeah, your input %c is alphabetical!\n");
    }
    else
    {
        printf("Oh no, your character %c is not alpha...");
    }

}

