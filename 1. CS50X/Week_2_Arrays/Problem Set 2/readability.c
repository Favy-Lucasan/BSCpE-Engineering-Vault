#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int letter_count(char letters[]);
int word_count(char words[]);
int sentence_count(char sentences[]);

int main(void)
{
    char text[1000];
    int answer = 1;

    printf("Text: ");
    scanf("%999[^\n]", text);

    int total_letters = letter_count(text);
    int total_words = word_count(text);
    int total_sentences = sentence_count(text);
    float L = ((float) total_letters / total_words) * 100;
    float S = ((float) total_sentences / total_words) * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

    return 0;
}

int letter_count(char letters[])
{
    int total_letters = 0;
    for (int i = 0, length = strlen(letters); i < length; i++)
    {
        if (isalpha(letters[i]))
        {
            total_letters += 1;
        }
    }
    return total_letters;
}

int word_count(char words[])
{
    int total_words = 0;
    for (int i = 0, length = strlen(words); i < length; i++)
    {
        if (words[i] == ' ')
        {
            total_words++;
        }
    }
    total_words += 1;

    return total_words;
}

int sentence_count(char sentences[])
{
    int total_sentences = 0;
    for (int i = 0, length = strlen(sentences); i < length; i++)
    {
        if (sentences[i] == '.' || sentences[i] == '!' || sentences[i] == '?')
        {
            total_sentences++;
        }
    }
    return total_sentences;
}
