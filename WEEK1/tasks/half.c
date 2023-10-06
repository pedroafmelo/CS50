#include <stdio.h>
#include <cs50.h>

int get_bill(void);
int get_tax(void);
int get_tip(void);

int main(void)
{
    int b = get_bill();
    float ta = get_tax();
    float ti = get_tip();

    float bill_plus_tax = b * (1 + ta / 100);
    float full_bill = bill_plus_tax * (1 + (ti / 100));

    int people = get_int("\nHow many people in the table?\n");
    float divided_bill = full_bill / people;

    printf("\nThe value of the full bill is %.2f, and divided by %i, "
           "it's going to be U$%.2f each!",
           full_bill, people, divided_bill);
}

    int get_bill(void)
    {
        int bill = get_int("\nPlease, type the cost of the bill: ");
        while (bill <= 0)
        {
            printf("\nThe bill cannot be 0 or under...\n");
            bill = get_int("\nType again: ");
        }
        return bill;
}

int get_tax(void)
{
    int tax = get_int("\nPlease, type the value (%) of the tax in your state: ");
    while (tax < 0)
    {
        printf("\nThe tax cannot be less than 0...\n");
        tax = get_int("\nType again: ");
    }
    return tax;
}

int get_tip(void)
{
    int tip = get_int("\nPlease, type the tip (%): ");
    while (tip <= 0)
    {
        printf("\nThe tip cannot be 0 or under...\n");
        tip = get_int("\nType again: ");
    }
    return tip;
}