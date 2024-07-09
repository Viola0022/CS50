//Saves names and files in a CSV file

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    FILE *file = fopen("phonebook.cvs", "a");

    string name = get_string("Name: ");
    string number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}