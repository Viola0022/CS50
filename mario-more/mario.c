#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while ((n > 8) || (n < 1));

    string brick = "#";

    for (int i = 0; i < n; i++)
    {
        for (int e = n - i; e > 1; e--)
        {
            printf(" ");
        }
        for (int c = i + 1; c > 0; c--)
        {
            printf("%s", brick);
        }
        printf("  ");
        for (int d = i + 1; d > 0; d--)
        {
            printf("%s", brick);
        }
        printf("\n");
    }
}
