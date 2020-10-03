#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,x1,x2,p1,p2,p3,p4,p5,px,pr1;
    printf("\n\tPrograma para emplear la formula general");
    printf("\n\tIngresa valor para a\n\t a=   ");
    scanf("%f", &a);
    printf("\n\tIngresa valor para a\n\t b=   ");
    scanf("%f", &b);
    printf("\n\tIngresa valor para a\n\t c=   ");
    scanf("%f", &c);

    p1=pow(b,2);

    p2=(4*a)*c;

    p3=p1-p2;


    if(p3<0)
    {
        pr1=(-1*b);
        px=-(p3);
        p4=(sqrt(px));
        printf("\n\tPara x1 el resultado es:\n\t %f+%fi\n\t",pr1,p4);
        printf("\n\tPara x2 el resultado es:\n\t %f-%fi\n\t",pr1,p4);
    }
    else{
        p4=(((-1)*b)+sqrt(p3))/(2*a);
        p5=(((-1)*b)-sqrt(p3))/(2*a);
        printf("\n\tPara x1 el resultado es: %f",p4);
        printf("\n\tPara x2 el resultado es: %f",p5);

    }

    return 0;
}
