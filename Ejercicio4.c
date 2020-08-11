    #include<stdlib.h>
    #include<stdio.h>
    void main ()
    {
        int num=0, i=0, fact=1;
        printf("Ingrese un n%cmero entero\n", 163);
        scanf("%d", &num);
        i=num;
        do
        {
            fact=fact*i;
            i--;
        }
        while (i>1);
        printf("El factorial de %d es %d\n", num, fact);
        system("pause");
    }
