#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string ("s: ");
    string t = get_string ("t: ");

    if (strcmp(s, t) == 0)  //comparing strings, not possible just s == t
    // if (*s == *t) -> would compare just the first character
    // *s == *t && *(s+1) == *(t+1) && and so on would work
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}