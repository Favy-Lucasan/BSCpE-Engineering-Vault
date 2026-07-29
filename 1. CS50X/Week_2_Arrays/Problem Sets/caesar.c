#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int only_digits(char *key);
char encipher(char c, int k);

int main(int argc, char *argv[])
{
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
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

int only_digits(char *key)
{
    for (int i = 0; key[i] != '\0'; i++)
    {
        if (!isdigit(key[i]))
        {
            return 0;
        }
    }
    return 1;
}

char encipher(char c, int k)
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
