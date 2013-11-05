#include <stdio.h>
/*
 *var:23
 *lab:3
 */
int main()
{
    int a;
    scanf("%d",&a);
    printf(" %x",a);
    int c = a >> 3;
    printf("\n %o %o",a,c);
    printf("\n %o %o",a,~a);
    printf("\n\n");
    int b;
    scanf("\n%o",&b);
    printf(" %o", a|b);
    printf("\n");
    return 0;
}
