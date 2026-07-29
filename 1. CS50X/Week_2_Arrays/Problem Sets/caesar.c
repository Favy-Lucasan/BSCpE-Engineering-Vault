#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    char text[1000];

    printf("plaintext:  ");
    fgets(text, sizeof(text), stdin);

    int k = atoi(argv[1]);

    printf("ciphertext: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isupper(text[i]))
        {
            int num = text[i] - 'A';
            char c = (num + k) % 26 + 'A';

            printf("%c", c);
        }
        else if (islower(text[i]))
        {
            int num = text[i] - 'a';
            char c = (num + k) % 26 + 'a';

            printf("%c", c);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    return 0;
}
