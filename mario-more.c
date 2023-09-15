#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1);

    for (int line = 1; line <= height; line++)
    {
        for (int dot = 0; dot <= height - line; dot++)
        {
            printf(" ");
        }

        for (int hash = 0; hash < line; hash++)
        {
            printf("#");
        }

        printf("  ");

        for (int hash = 0; hash < line; hash++)
        {
            printf("#");
        }

        printf("\n");
    }
}
