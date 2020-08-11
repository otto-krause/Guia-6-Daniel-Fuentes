    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        {
        int v=1, v2=0, tg=0, uv=0, uni=0, uni2=0, dias=1, tg1=0,vm=0;

        do
        {
            printf("Ingrese las ventas del vendedor %d\n", v);
            do
            {
                printf("Ventas del d%ca %d \n", 161, dias);
                scanf("%d", &uni);
                uv=uv+uni;
                if (uni>uni2)
                {
                    uni2=uni;
                    vm=v;
                }
                dias++;
            }while (dias<16);
            dias=1;
            tg=tg+uv;
            printf("Las ventas totales del vendedor %d son %d\n ", v, uv);
            v++;
        }while(v<21);

        printf("Las ventas totales de la empresa son %d y el vendedor %d tiene la mayor venta diaria", tg, vm);

        return 0;
    }
    }
