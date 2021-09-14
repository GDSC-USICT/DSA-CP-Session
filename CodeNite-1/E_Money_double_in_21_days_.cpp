#include <stdio.h>

int good(long long int x, long long int V)
{

    long long int f_x = (46 * x * x) + (6 * x) + 4ll;

    if (f_x >= V)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int V;
        scanf("%lld", &V);

        long long int l = 0, r = 100000000;

        while (r - l > 1)
        {

            long long int m = (l + r) / 2;

            if (good(m, V) == 1)
                r = m;
            else
                l = m;
        }

        printf("%lld\n", r);
    }
}