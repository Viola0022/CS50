#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')     //in ctype: if(islower(s[i]));
        {
            printf("%c", s[i] - 32);        //printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
        printf("\n");
    }
}