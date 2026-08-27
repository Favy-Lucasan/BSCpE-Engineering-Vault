#include <stdio.h>
void draw(int n);

int main(void)
{
    int height = 0;

    printf("Height: ");
    scanf("%i", &height);

    draw(height);
}

void draw(int n)
{
    // Base case
    if (n <= 0)
        return;
    draw(n - 1);
    for (int i = 0; i < n; i++)
        printf("#");
    printf("\n");

    // No need curly braces when you only have one argument
}