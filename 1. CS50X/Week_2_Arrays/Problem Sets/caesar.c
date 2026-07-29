#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char encipher (char c, int k);

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
        char encrypted = encipher(text[i], k);
        printf("%c", encrypted);
    }
    return 0;
}

char encipher (char c, int k)
{
    if (isupper(c))
    {
        int num = c - 'A';
        return ((num + k) % 26) + 'A';
    }
    else if (islower(c))
    {
        int num = c - 'a';
        return ((num + k) % 26) + 'a';
    }
    else
    {
        return c;
    }
}
