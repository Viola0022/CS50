#include <stdio.h>

int main (void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
    printf("%i\n", *p);     //*p means go there
}