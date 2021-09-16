/**
 * @author [Dhruv Pasricha](https://github.com/DhruvPasricha)
 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int A[2000];

    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    int mx = 0;

    for (int i = 0; i < n; i++)
        if (A[i] > mx)
            mx = A[i];

    for (int level = mx; level >= 1; level--)
    {
        for (int i = 0; i < n; i++)
        {
            if (A[i] >= level)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}