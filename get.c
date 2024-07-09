#include <stdio.h>

int main (void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x);

    //for strings (we don't know how long it will be)
    char s[4];    //won't work for longer, annoying for not knowing how long it is
    //getting user's input is hard in C
    printf("s: ");
    scanf("%s", s);    //here we don't need &, everywhere yes - stirng is already address
    printf("s: %s\n", s);
}