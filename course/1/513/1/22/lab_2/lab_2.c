#include <stdio.h>
#include <math.h>
/*
 *var:22
 *lab:2
 */
void main()
{
    float a;
    printf("a = ");
    scanf("%f",&a);
    float z = (sin(2*a)+sin(5*a)-sin(3*a))/(cos(a)+1-2*pow(sin(2*a),2));
    printf("\nz1 = %f", z);
    z = 2*sin(a);
    printf("\nz2 = %f\n", z);
}
