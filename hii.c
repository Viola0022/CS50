#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%s\n", s);
    //printing only first character:
    printf("%c\n", s[0]);
    //printing out other characters:
    printf("%c%c%c\n", s[0], s[1], s[2]);
    //numbers:
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}