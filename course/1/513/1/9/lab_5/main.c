#include <stdio.h>
//=========================================
int main(void)
{
    int i,j;// переменные для хранения координат в массивах
    int a[7] = {123, 123, 123, 123, 456, 321, 1};// массив для вывода
    int m1[2][2] = {{1,2}, {3,4}};//массивы для умноженияы
    int m2[2][2] = {{1, 0}, {0, 1}};
    int m[2][2] = {{0, 0}, {0, 0}};
    for(i = 0;i < 7;++i)// первое задание
        printf("%d ", a[i]);
    printf("\n====================\n");
    for(i = 0;i < 2;++i){//второе задание
        for(j = 0;j < 2;++j){
            m[i][j] = (m1[i][0]*m2[0][j]) + (m1[i][1] * m2[1][j]);
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}

