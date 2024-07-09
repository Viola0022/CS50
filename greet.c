#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv [] )
{
    printf("hello, %s %s\n", argv[1], argv[2]);
    //or
    if (argc ==2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}