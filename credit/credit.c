#include <cs50.h>
#include <stdio.h>

int first_two_digits(long number, int count);

int main(void)
{
    long number = get_long("Number: ");

    // Luhn’s Algorithm - VALID or NOT
    int multiply = 0;
    int other = 0;

    /*Multiply every other digit by 2, starting with the number’s second-to-last digit,
    and then add those products’ digits together.
    Add the sum to the sum of the digits that weren’t multiplied by 2.*/

    // Luhn's Algorithm.
    // jít na to přes mod a pak dělit 10
    // mod10 * 2 += multiply
    // děl 10
    // mod10 += other
    // děl.10
    // znovu dokud number = 0
    long ngmber = number;
    while (ngmber > 0)
    {
        other += (ngmber % 10);
        // printf("%i\n", other);
        ngmber /= 10;
        if (((ngmber % 10) * 2) > 9)
        {
            multiply += (((ngmber % 10) * 2) % 10 + (((ngmber % 10) * 2) / 10));
        }
        else
        {
            multiply += (ngmber % 10) * 2;
        }
        // printf("%i\n", multiply);
        ngmber /= 10;
    }

    // printf("%i\n", multiply);
    // printf("%i\n", other);

    // count multiply (number*2)

    // count other
    // sum of multiply and other is mod10 = 0
    if ((multiply + other) % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // counting digits
    int count = 0;
    long nzmber = number;
    do
    {
        nzmber /= 10;
        ++count;
    }
    while (nzmber != 0);

    if (count < 13 || count > 16)
    {
        printf("INVALID\n");
        return 0;
    }

    // printf("%i\n", count);
    // first_two_digits
    int check = first_two_digits(number, count);
    // printf("%i\n", check);

    // All American Express numbers start with 34 or 37 | American Express uses 15-digit numbers
    if ((count == 15) && (check == 34 || check == 37))
    {
        printf("AMEX\n");
        return 0;
    }
    // Visa uses 13-and 16-digit numbers | all Visa numbers start with 4
    else if ((count == 13 || count == 16) && (check <= 49 && check >= 40))
    {
        printf("VISA\n");
        return 0;
    }
    // MasterCard numbers start with 51,52, 53, 54, or 55 | MasterCard uses 16-digit numbers
    else if ((check <= 55 && check >= 51) && (count == 16))
    {
        printf("MASTERCARD\n");
        return 0;
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }
}

int first_two_digits(long number, int count)
{
    while (count > 2)
    {
        number /= 10;
        count--;
    }
    return number;
}
