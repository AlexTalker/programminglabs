#include <stdio.h>
/*
 *var:22
 *lab:4
 */
void main()
{
    int a;
    int min = 1000, max = 10000;
    scanf("%d",&a);
    printf("%s\n",((a >= min) && (a <= max)) ? "yes":"no" );

    scanf("%x",&a);
    printf("%d\n",a&(1<<23));
}
