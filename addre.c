#include <stdio.h>

int main (void)
{
    char *s = "HI!";    //instead of string
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    //run it (all one bite away)
    //hh

    printf("%c\n", s[0]);
    printf("%c\n", *s); //=
    printf("%c\n", s[1]);
    printf("%c\n", *(s+1));  //=
    printf("%c\n", s[2]);
    printf("%c\n", *(s+2));
    //poke around - what's in the computers memory
    printf("%c\n", *(s+50));
    printf("%c\n", *(s+50000));

    printf("%s\n", s);
    printf("%s\n", s);
    printf("%s\n", s);
}