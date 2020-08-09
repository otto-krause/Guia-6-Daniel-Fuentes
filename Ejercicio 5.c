    #include<stdlib.h>
    #include<stdio.h>
    void main ()
    {
        int num=0, num2=0, i=1, multi=0;
        printf("Ingrese dos n%cmeros\n", 163);
        scanf("%d %d", &num, &num2);
        multi=num;
        while(i<num2)
        {
            multi=multi*i;
            i++;
        }
        printf("La potencia de %d de exponente %d es %d ", num, num2, multi);
        system("pause");
    }
