#include <cs50.h>
#include <stdio.h>

string replace(string input);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please give only one word as input\n");
        return 1;
    }
    string output = replace(argv[1]);
    printf("%s\n", output);
    return 0;
}

string replace(string input)
{
    int length = 0;
    for (int p = 0; input[p] != 0; p++)
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        if (input[i] == 'a')
        {
            input[i] = '6';
        }
        else if (input[i] == 'e')
        {
            input[i] = '3';
        }
        else if (input[i] == 'i')
        {
            input[i] = '1';
        }
        else if (input[i] == 'o')
        {
            input[i] = '0';
        }
        else{}
    }
    return input;
}
