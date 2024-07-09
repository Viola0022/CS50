#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string text = get_string("Message: ");

    // Convert text to decimal ASCII
    int converted[strlen(text)];
    for (int i = 0; i < strlen(text); i++)
    {
        converted[i] = text[i];
    }

    // Convert decimal ASCII to binary and store in array
    int binary[strlen(text)][BITS_IN_BYTE];
    for (int i = 0; i < strlen(text); i++)
    {
        int n = converted[i];
        // Decimal to binary
        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            binary[i][j] = n % 2;
            n = n / 2;
        }
    }

    // Print it
    for (int i = 0; i < strlen(text); i++)
    {
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            print_bulb(binary[i][j]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
