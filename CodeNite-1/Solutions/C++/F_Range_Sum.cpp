/**
 * @author [Dhruv Pasricha](https://github.com/DhruvPasricha)
 */

#include <stdio.h>

long long int A[100000] = {0};
long long int B[100001] = {0};

int main()
{
    int n;
    int q;

    scanf("%d%d", &n, &q);

    for (int i = 0; i < n; i++)
        scanf("%lld", &A[i]);

    while (q--)
    {
        int l, r;
        long long int x;
        scanf("%d%d%lld", &l, &r, &x);

        B[--l] += x;
        B[r] -= x;
    }

    for (int i = 1; i < n; i++)
        B[i] += B[i - 1];

    for (int i = 0; i < n; i++)
        printf("%lld ", A[i] + B[i]);
}