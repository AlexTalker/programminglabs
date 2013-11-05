#include <stdio.h>
#include <math.h>

int main(void)
{
    double a,b,z1,z2;
    scanf("%lf %lf", &a, &b);
    z1 = (pow((cos(a) - cos(b)), 2))-(pow(( sin(a) - sin(b)), 2));
    z2 = -4*(pow(sin((a-b)/2), 2.0))*cos(a+b);
    printf("z1 = %lf\nz2 = %lf\n", z1, z2);
    return 0;
}
