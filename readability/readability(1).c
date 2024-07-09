#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //insert
    string text = get_string("Insert text: ");

    //counting
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    //calculating the formula
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;
    float index = (float)(0.0588 * L) - (0.296 * S) - 15.8;

    //categorize the grade
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", (int) roundf(index));
    }
}

//count letters
int count_letters(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }
    return count;
}

//count words
int count_words(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isspace(text[i]))
        {
            count++;
        }
    }
    return count + 1; //add one for last word of sentence
}

//count sentences
int count_sentences(string text)
{
    int count = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            count++;
        }
    }
    return count;
}
