#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b;
    if(argc == 4){
        freopen(argv[3], "w", stdout);
        sscanf(argv[1], "%d", &a);
        sscanf(argv[2], "%d", &b);
        fprintf(stdout, "%d", (a+b));
    }
    else{
        fprintf(stdout, "%d", 0);
        return -1;
    }
    return 0;
}
