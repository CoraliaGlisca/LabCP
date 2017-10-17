#include <stdio.h>

int main()
{
    int x,y;
    printf("x="); scanf("%d", &x);
    printf("y="); scanf("%d", &y);

    printf("Addition: %d + %d= %d", x,y,x+y); printf("\n");
    printf("Subtraction: %d - %d= %d", x,y, x-y); printf("\n");
    printf("Multiplication: %d * %d= %d", x,y,x*y);printf("\n");
    printf("Integer division: %d / %d= %d", x,y,x/y); printf("\n");
    printf("Modulus: %d mod %d= %d", x,y,x%y); printf("\n");
    return 0;
}
