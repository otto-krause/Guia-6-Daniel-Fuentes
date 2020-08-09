#include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int s=0, p=1, c=0, c1=0;
        do
        {
            printf("Ingrese el sueldo de la persona %d\n", p);
            scanf("%d", &s);
            if (s>2000)
                c=c+1;
            else
                c1=c1+1;
            p++;
        }while(p<21);
        printf("Los que ganan m%cs de $2000 son %d y los que ganan menos de esa suma son %d ", 160, c, c1);


        return 0;
    }
