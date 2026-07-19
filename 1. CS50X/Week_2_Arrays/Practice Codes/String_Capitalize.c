#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    printf("Before: ");
    scanf("%49s", name);

    printf("After: ");
    for (int i = 0, n = strlen(name); i < n; i++)
    {
            printf("%c", toupper(name[i]));
    }
    printf("\n");

    return 0;
}