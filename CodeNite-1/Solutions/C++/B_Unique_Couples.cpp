#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int m;
        long long int n;

        scanf("%lld%lld", &m, &n);

        long long int ans = m * n;

        printf("%lld\n", ans);
    }
}