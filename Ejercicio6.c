    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int a=1, acu=0, acu1=0, notas=1;
        float prom=0, prom1=0, nota=0;

        do
        {
            printf("Ingrese las 2 notas del alumno %d\n", a);
            do
            {
                scanf("%f", &nota);
                acu=acu+nota;
                notas++;
            }while (notas<=2);
            notas=1;
            prom=acu/2;
            acu1=acu1+acu;
            acu=0;
            printf("El promedio del alumno %d es %.1f\n ", a, prom);
            a++;
        }while(a<=3);

        prom1=acu1/3;
        printf("El promedio del curso es %.1f ", prom1);

        return 0;
    }
