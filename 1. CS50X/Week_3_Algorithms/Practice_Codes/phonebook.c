#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *phone;
} person;

int main(void)
{
    person people[3];

    people[0].name = "Favy";
    people[0].phone = "+63-912-345-6789";

    people[1].name = "Wealth";
    people[1].phone = "+63-111-222-3333";

    people[2].name = "Success";
    people[2].phone = "+63-111-111-1111";

    char n[256];

    printf("Name: ");
    if (fgets(n, sizeof(n), stdin) != NULL)
    {
        n[strcspn(n, "\n")] = '\0';
        for (int i = 0; i < 3; i++)
        {
            if (strcmp(people[i].name, n) == 0)
            {
                printf("Found!\n");
                printf("Phone Number: %s\n", people[i].phone);
                return 0;
            }
        }
    }
    printf("Not found!\n");
    return 1;
}