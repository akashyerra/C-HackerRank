#include<stdio.h>
int main()
{
    int num1, num2;
    double num3, num4;
    scanf("%d%d", &num1, &num2);
    scanf("%lf%lf", &num3, &num4);
    printf("%d %d\n", num1+num2, num1-num2);
    printf("%.1lf %.1lf", num3+num4, num3-num4);
}

