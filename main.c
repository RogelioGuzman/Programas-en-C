#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int c=0;
    int I,O,i;
    printf("\n\tIngrese el valor de la entrada N \n\t ");
    scanf("%d", &I);

    while(c<=I)
    {
        i=c;
        c=c+1;
        O=pow(I,2)-(2*i);
        printf("%d ",O);
    }
    return 0;
}
