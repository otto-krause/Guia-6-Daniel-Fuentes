    #include<stdlib.h>
    #include<stdio.h>
    void main ()
    {
        int num=0, num2=0, inter=0, limite=0;
        //float inter=0;
        printf("Ingrese dos n%cmeros\n", 163);
        scanf("%d %d", &num, &num2);
        if (num>num2)// para que funciones independientemente del orden ingresado de los números.
        {
            inter=num2;
            limite=num;
        }
        else
        {
            inter=num;
            limite=num2;
        }
        do
        {
            inter=inter+1;
            printf("%d\n", inter);
        }
        while (inter<limite-1);

        //return 0; lo usamos solo si la función ppal es de tipo entero.
    }
