#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int op, op1,r,na=1,ne,ie,ia=1,a,na1,ia1=1,t,n1,n2,n3,n4,c=0,s;
    do{
    printf("\n\tBienvenido que programa desea ejecutar\n\t");
    printf("\n\t1.Imprimir Triangulos\n\t");
    printf("\n\t2.Calcular el valor de pi\n\t");
    printf("\n\t3.Mostrar la serie\n\t");
    scanf("%d", &op);

        switch (op)
        {
        case 1:
            system("cls");
            printf("\n\tBienvenido\n");
            for (r=1; r<=10; r++)
            {
                for(a=1; a<=na; a++)
                {
                    printf("*");
                }
                printf("\n");
                na=na+ia;
            }
            printf("\n");
            na1=10;
            for (int r1=1; r1<=10; r1++)
            {
                for(int a1=1; a1<=na1; a1++)
                {
                    printf("*");
                }
                printf("\n");
                na1=na1-ia1;
            }
            printf("\n");
            na=10;
            ne=0;
            for (r=1; r<=10; r++)
            {
                for (int e=0; e<=ne; e++)
                {
                    printf(" ");
                }
                for (a=1; a<=na; a++)
                {
                    printf("*");
                }
                printf("\n");
                na=na-1;
                ne=ne+1;
            }
            printf("\n");
            na=1;
            ne=9;
            for(r=1; r<=10; r++)
            {
                for(int e=10; e<=ne; e++)
                {
                    printf(" ");
                }
                for (a=1; a<=na; a++)
                {
                    printf("*");
                }
                printf("\n");
                na=na+1;
                ne=ne-1;
            }
            printf("\n\tDesea volver al menu principal\n\t1.si\n\t2.no\n\t");
            scanf("%d", &op1);
            system("cls");
            break;
        case 2:
            system("cls");
            printf("\n\tBienvenido");
            int terminos, c2=0;
    float pi=0;
    bool resta_serie = true;
    printf("\n\tIngrese la cantidad de terminos que desea usar\n\tTerminos= ");
    scanf("%d", &terminos);
    for (float c1=1; c1<=terminos; c1=c1+2)
    {
        if (resta_serie==true)
        {
            pi=pi+(4/c1);
            resta_serie=false;
        }
        else{
            pi=pi-(4/c1);
            resta_serie=true;
        }
    }

    printf("el valor de pi es: %f", pi);
            printf("\n\tDesea volver al menu principal\n\t1.si\n\t2.no\n\t");
            scanf("%d", &op1);
            system("cls");
            break;
        case 3:
            system("cls");
             printf("\n\tBienvenido\n\t");
             printf("Hasta que termino desea que termine la serie\n\tnumero: ");
             scanf("%d", &t);
             n1=1;
             n2=2;
             n3=30;
             n4=15;
             for (c=1; c<=t; c++)
             {
                printf("%d ",n1);
                n1=n1+2;
             }
             printf("\n");
                          for (c=1; c<=t; c++)
             {
                printf("%d ",n2);
                n2=n2+3;
             }
             printf("\n");
             for (c=1; c<=t; c++)
             {
                printf("%d ",n3);
                n3=n3-10;
             }
             printf("\n");
             for (c=1; c<=t; c++)
             {
                printf("%d ",n4);
                n4=n4+8;
             }
            printf("\n\tDesea volver al menu principal\n\t1.si\n\t2.no\n\t");
            scanf("%d", &op1);
            system("cls");
            break;
        }
    }while(op1==1);
    return 0;
}
