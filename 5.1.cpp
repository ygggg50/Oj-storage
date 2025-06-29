#include <stdio.h>
#include <math.h>

int prime(int n);

int main()
{
    int m, n;
    scanf("%d,%d", &m, &n);

    int count = 0;
    int sum = 0;

    for (int i = m; i <= n; i++)
    {
        if (prime(i))
        {
            count ++;
            sum+= i;
        }
    }

    printf("count=%d,sum=%d", count, sum);
    return 0;
}

int prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return 0;
    }
    for (int i = 3; i <= sqrt(n); i+=2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

