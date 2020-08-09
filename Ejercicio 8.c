    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int num=0, cont=0, cont1=0, cont2=0, i=1;
        printf("Ingrese 10 n%cmeros\n", 163);
        do
        {
            scanf("%d", &num);
            if(num>0)
                cont=cont+1;
            else
                if (num<0)
                    cont1=cont1+1;
            else
                cont2=cont2+1;
            i++;
        }while(i<11);
        printf("De los n%cmeros ingresados: \n", 163);
        printf("%d son positivos, %d son negativos, y %d son ceros", cont, cont1, cont2);
        return 0;
    }
