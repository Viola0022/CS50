#include <stdio.h>
#include <cs50.h>

int get_size(void);
int get_other(int x);
int calculate_years(int x, int y);

int main(void)
{
    // Starting size
    int x = get_size();
    // Ending size
    int y = get_other(x);
    //Calculation of years
    int years = calculate_years(x, y);
    printf("Years: %i\n", years);
}

int get_size(void)
{
    int x;
    do
    {
        x = get_int("Size of population at the beginning: ");
    }
    while (x < 9);
    return x;
}

int get_other(int x)
{
    int y;
    do
    {
        y = get_int("Size of the population at the end: ");
    }
    while (y < x);
    return y;
}

int calculate_years(int x, int y)
{
    int answer = 0;
    while (x < y)
    {
        int born = x / 3;
        int passed_away = x / 4;
        x += born - passed_away;
        answer++;
    }
    return answer;
}