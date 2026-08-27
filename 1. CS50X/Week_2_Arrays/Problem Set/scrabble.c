#include <ctype.h>
#include <stdio.h>
#include <string.h>

const int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int compute (char text[]);

int main(void)
{

    char p1[50];
    char p2[50];

    printf("Player 1: ");
    scanf("%49s", p1);
    printf("Player 2: ");
    scanf("%49s", p2);

    int score1 = compute(p1);
    int score2 = compute(p2);

    if (score1 > score2)
    {
        printf("Player 1 wins!");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!");
    }
    else
    {
        printf("Tie!");
    }

    return 0;
}

int compute (char text[])
{
    int score = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (isalpha(text[i]))
        {
            char upper = toupper(text[i]);
            int index = upper - 'A';
            score += points[index];
        }
    }
    return score;
}
