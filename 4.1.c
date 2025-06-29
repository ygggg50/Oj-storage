#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    double high£»
        int n;
    scanf("%lf,%d", &high, &n);

    double distance=high;
    double height;
    
    for (int i = 1; i < n; i++)
    {
        high /= 2;
        distance += high * 2;
    }
    height = high / 2;

    printf("%.1lf,%.1lf", distance, height);

    return 0;
}
