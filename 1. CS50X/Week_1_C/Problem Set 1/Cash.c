#include <stdio.h>

int coins(int owed);

int main(void)
{
    int owed;
    do
    {
        printf("Change owed: ");
        scanf("%i", &owed);
    }
    while (owed < 0);

    int total_coins = coins(owed);
    printf("%i\n", total_coins);
}

int coins(int owed)
{
    int coin = 0;

    coin += owed / 25;
    owed %= 25;

    coin += owed / 10;
    owed %= 10;

    coin += owed / 5;
    owed %= 5;

    coin += owed;

    return coin;
}