#include <stdio.h>
#include <malloc.h>

void main(void) {
    int arr[] = {-1, -12, -123, -1234};// первое задание
    int *p = (int *) &arr, *r;
    int n,m;
    for (n = 0;n < 4;p++,n++)
      printf("%d ", *p);
    printf("\n");
    p = 0;
    p = (int *) malloc(4 * sizeof(int));// второе задание
    for(n = 0,m = -1 ;n < 4;n++, m = (m*10 -(n + 1)))
        p[n] = m;
    r = (int *) p;
    for (n = 0;n < 4;p++,n++)
      printf("%d ", *p);
    free(r);
}
