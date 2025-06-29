#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int scores[100];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",& scores[i]);
    }

    int A = 0, B = 0, C = 0, D = 0, E = 0;
    for (int i = 0; i < n; i++)
    {
        switch (scores[i] / 10)
        {
        case 10:
            case 9:
                A++;
                break;
            case 8:
                B++; 
                break;
            case 7:
                C++;
                break;
            case 6:
                D++;
                break;
            default:
                E++;
                break;

        }
    }
    printf("A:%d\n", A);
    printf("B:%d\n", B);
    printf("C:%d\n", C);
    printf("D:%d\n", D);
    printf("E:%d\n", E);
    
    return 0;
}

