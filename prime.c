#include <cs50.h>
#include <stdio.h>

bool prime(int number);
int max, min;

int main(void)
{
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{

    for (int div = 2; div < number; div++)
    {
        float x = number % div;
        if (x == 0)
        {
            return false;
        }
    }

    return true;
}
