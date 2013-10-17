#include <stdio.h>
#include <math.h>

int main(void)
{
    //TODO: сделать расчеты на бумаге для проверки
    double a,b,z1,z2;
    scanf("%lf %lf", &a, &b);
    z1 = (pow((cos(a) - cos(b)), 2))-(pow(( sin(a) - sin(b)), 2));
    z2 = (sin(a+b))*(sin(a-b));
    printf("z1 = %lf\nz2 = %lf\n", z1, z2);
    return 0;
}
