#include <stdio.h>
#include <malloc.h>
/*
 *var: 23
 *lab:6
 */
void main()
{
    float array[] = {-8.8, 11.2, 64.67, 55.32};
    float *ptr=array;
    for(int i=0;i<4;i++,ptr++)
        printf("%f ",*ptr);
    printf("\n");

    ptr =(float *) malloc(4*sizeof(float));
    for(int i=0;i<4;i++)
    {
        ptr[i]=array[i];
        printf("%f ", ptr[i]);
    }
    free(ptr);
}
