#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    char s[256];

    printf("String: ");
    
    if (fgets(s, sizeof(s), stdin) != NULL)
    {
        s[strcspn(s, "\n")] = '\0';
        for (int i = 0; i < 6; i++)
        {
            if (strcmp(strings[i], s) == 0)
            {
                printf("Found\n");
                
                return 0;
            }
        }
    }
    printf("Not found\n");

    return 1;
}