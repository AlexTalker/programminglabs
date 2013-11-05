#include <stdio.h>
/*
 *var:2
 *lab:5
 */
void main()
{
    int i,j;
    int array[9] = {88, 112, 6467, 325, 878, 3, 77, 8, 99};
    for(i = 0; i < 9; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    int mat1[2][2] =
    {
        {2,5},
        {2,2}
    };

    int mat2[2][2] =
    {
        {1,2},
        {0,1}
    };

    int result[2][2] =
    {
      {
      (mat1[0][0]*mat2[0][0]+mat1[0][1]*mat2[1][0]),
      (mat1[0][0]*mat2[0][1]+mat1[0][1]*mat2[1][1])},
      {
      (mat1[1][0]*mat2[0][0]+mat1[1][1]*mat2[1][0]),
      (mat1[1][0]*mat2[0][1]+mat1[1][1]*mat2[1][1])
      }
    };

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
