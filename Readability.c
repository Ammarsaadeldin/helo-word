#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    // Get text from user 
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1;
    int sentences = 0;    

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters ++;
        }
        else if (isspace(text[i]))
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    
    printf("Your letters: %i\n", letters);
    printf("Your words: %i\n", words);
    printf("Your sentences: %i\n", sentences);
     
    float l = (letters * 100) / words;
    float s = (sentences * 100) / words;
    float index = 0.0588 * l - 0.296 * s - 15.8;
    int Grade = round(index);
    // Grade level 
    if (Grade >= 1 && Grade < 16)
    {
        printf("Grade %i\n", Grade);
    }
    else if (Grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else 
    {
        printf("Before Grade 1\n");
    }
}
