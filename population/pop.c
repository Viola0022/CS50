#include <stdio.h>
#include <cs50.h>

int calculate_years(int start_size, int end_size);

int main(void)
{
    int start_size, end_size;
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);

    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);

    int years = calculate_years(start_size, end_size);

    printf("Years: %i\n", years);
}

int calculate_years(int start_size, int end_size)
{
    int years = 0;
    while (start_size < end_size)
    {
        int born = start_size / 3;
        int passed_away = start_size / 4;

        start_size += born - passed_away;
        years++;
    }
    return years;
}