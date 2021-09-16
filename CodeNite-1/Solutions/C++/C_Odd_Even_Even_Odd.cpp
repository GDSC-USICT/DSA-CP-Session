/**
 * @author [Dhruv Pasricha](https://github.com/DhruvPasricha)
 */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    char s[110];
    while (t--)
    {
        scanf("%s", s);
        int odd_sum = 0;
        int even_sum = 0;
        for (int i = 0; s[i] != 0; i++)
        {
            int digit = s[i] - '0';
            if (i % 2 == 0)
                odd_sum += digit;
            else
                even_sum += digit;
        }

        if (odd_sum % 2 == 0 and even_sum % 2 != 0)
            printf("good\n");
        else
            printf("not good\n");
    }
}