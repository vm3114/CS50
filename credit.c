#include <cs50.h>
#include <stdio.h>
int main(void){
    long num;
    printf("Enter card number: ");
    scanf("%ld", &num);

    int dcount = 0;
    long i = num;
    while (i >= 1) 
    {
        i = i/10;
        dcount++;
    }
    if (dcount != 13 && dcount != 15 && dcount != 16)   
    {
        printf("INVALID\n");
        return 0;
    }

    int digits[dcount];
    i = num;
    for (int j = 0; j < dcount; j++)
    {
        long div = 1;
        for (int exp = dcount - j - 1; exp > 0; exp--)
        {
            div = div * 10;
        }
        long temp = num / div;
        digits[j] = temp % 10;     
    }
    int even = 0;
    for (int e = 2; e <= dcount; e = e+2)
    {
        int numero = digits[dcount - e] * 2;         
        if (numero > 9)
        {
            int amogs;
            amogs = numero % 10;
            even = even + 1 + amogs;
        }
        else
        {
            even = even + numero;
        }
    }
    int odd =0;
    for (int o = 1; o <= dcount; o += 2)          
    {
        odd = odd + digits[dcount - o];
    }
    int total = even + odd;
    int test = total % 10;

    if (test == 0)                       
    {
        if ((digits[0] == 4) && (dcount == 13 || dcount == 16))
        {
            printf("VISA\n");
            return 0;
        }
        else if ((digits[0] == 3) && (digits[1] == 4 || digits[1] == 7) && (dcount == 15))
        {
            printf("AMEX\n");
            return 0;
        }
        else if ((dcount == 16) && (digits[0] == 5) && (digits[1] == 1 || digits[1] == 2 || digits[1] == 3 || digits[1] == 4 || digits[1] == 5))
        {
            printf("MASTERCARD\n");
            return 0;
        }
        else
        {
            printf("INVALID\n");
            return 0;
        }
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }

}
