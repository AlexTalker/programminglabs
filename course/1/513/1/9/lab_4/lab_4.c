#include <stdio.h>
#define BIT 9
/*
* Lab #4
*/
int main(void)
{
    int a,b,n;
    n = 1;
    scanf("%d", &a);
    printf("%s\n", ((-100 <= a && a <= 100)?"true":"false"));
    printf("Input a number > 100 in hex:\n");
    scanf("%x", &b);// получаем число для вычисления бита
    while (n < (BIT+1))// ищем нужный бит
    {
        b = b << 1;
        if(n == BIT){// если нашли, то выясняем, 1 он или 0 с помощью тернарного оператора
            printf("%s\n",(b&1)?("bit = 1"):("bit = 0"));
        }
        ++n;
    }
    return 0;
}
