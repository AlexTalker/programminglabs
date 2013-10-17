#include <stdio.h>
/*
* Lab #3
*/
int main(){
    int a,b;
    printf("Enter a number(in hex(0x100, etc), 16-based numeric system):\n");
    scanf("%x", &a);// получаем число
    printf("%o\n",a);//задание 1
    printf("%o\n", a);//задание 2
    b = a;
    a = (a << 1);//задание 3
    printf("%o\n", a);
    printf("%d\n", b);//задание 4
    printf("%o\n", (~b));
    scanf("%o", &a);//число для задания 5
    printf("%o\n", (a&b));//задание 5
    return 0;
}
