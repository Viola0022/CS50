#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
//submit50 cs50/problems/2024/x/readabilityy
//  The Coleman-Liau index

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string sample = get_string("Text: ");

    int letters = count_letters(sample);
    // printf("Letters:: %i\n", letters);
    int sentences = count_sentences(sample);
    // printf("Sentences: %i\n", sentences);
    int words = count_words(sample);
    // printf("Words: %i\n", words);

    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;
    float index = (float) (0.0588 * L) - (0.296 * S) - 15.8;

    /*X” is the grade level computed, rounded to the nearest integer. If the grade level is 16 or
     * higher (equivalent to or greater than a senior undergraduate reading level), your program
     * should output “Grade 16+” instead of giving the exact index number. If the grade level is
     * less than 1, your program should output “Before Grade 1”.*/
    if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else
    {
        printf("Grade %d\n", (int) roundf(index));
        return 0;
    }
}

int count_letters(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))
        {
            count++;
        }
    }
    return count;
}

int count_words(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            count++;
        }
    }
    return count + 1; // add one for last word of sentence
}

int count_sentences(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] == '.') || (text[i] == '?') || (text[i] == '!'))
        {
            count++;
        }
    }
    return count;
}
