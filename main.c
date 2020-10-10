#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0;
    int I,O,i,i2;
    printf("\n\tIngresa un valor para N\n\t ");
    scanf("%d", &I);
     i=(2*I)+1;
    while(c<=i){
            i2=c;
        c=c+1;
        O=(3*I)+(2*i2);
        printf("%d  ",O);
    }
    return 0;
}
