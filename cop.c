#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char *s = get_string ("s: ");
    if (s == NULL)
    {
        return 1;
    }

    char *t = malloc(strlen(s) + 1);     //number of bites I need to store + 1 for the \0

    for(int i = 0, n = strlen(s) + 1; i < n; i++)  //or i < strlen(s) + 1
    {
        t[i] = s[i];
    }

    //or instead of the for loop
    //strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}