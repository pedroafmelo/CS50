#include <stdio.h>
#include <cs50.h>

int get_pop(void);
void years(int i, int f);

int main(void)
{
    printf("\n\nIn this program, you will be able to calculate "
    "the time in which a population of llamas grows from x to y organisms!\n\nLet's go!\n\n");
    int y = get_pop();
    years(y, get_int("Enter the final population (it has to be greater than the inicial): "));
}

int get_pop(void)
{    
    int i = get_int("Enter the initial population (Positive number greater than 9): ");
    while (i < 9)
    {
        if (i < 0)
        {
            printf("The population cannot begin with a negative number...\n\n");
            i = get_int("Enter the initial population (Positive number greater than 9): ");
        }
        else
        {
            printf("If the population starts with a number <= 9, it will remain stagnant... \n\n");
            i = get_int("Enter the initial population (Positive number greater than 9): ");
        }
    }

    // int f = get_int("Enter the final population (it has to be greater than the inicial): ");
    // while (f < i)
    // {
    //     printf("The final number of organisms must be greater than the initial one! Please try again!");
    //     const int f = get_int("Enter the final population (it has to be greater than the inicial): ");
    // }
    return i;
}

void years(int i, int f)
{
    int time = 0;
    int llamas = i;
    while (f > llamas)
    {
        llamas = llamas + ((llamas / 3) - (llamas / 4));
        time++;
    }
    printf("\n\nThe number of complete years to get from i to f is %i\n\n", time);
}