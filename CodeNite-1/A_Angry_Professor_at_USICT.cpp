#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int c0 = 0;
    int c1 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x == 0)
            c0++;
        else
            c1++;
    }

    if (c0 <= c1)
        printf("Yes\n");
    else
        printf("No\n");
}