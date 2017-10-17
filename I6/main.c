#include <stdio.h>
#define NMAX x

int main()
{
    int x, no=0, sum=0;
    printf("x=");scanf("&d", &x);
    while (no< NMAX)
    {
        no++; sum+=no;
    }
    printf("\n");
    return 0;
}
