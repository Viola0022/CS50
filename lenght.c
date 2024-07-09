#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string ("What´s your name?\n");

    //manually
    int c = 0;
    while (name[c] != '\0')
    {
        c++;
    }
    printf("%i\n", c);

    //same
    int n = strlen(name);
    printf("%i\n", n);
}