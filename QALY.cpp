#include <stdio.h>

int main()
{
    double sum;
    double a;
    double b;
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%lf %lf", &a, &b);
        sum += a*b;
    }
    printf("%lf",sum);
}