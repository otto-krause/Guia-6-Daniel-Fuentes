    #include<stdlib.h>
    #include<stdio.h>
    void main ()
{
    int num=0, prom=0, a=0, prom1=0, num2=0;
    printf("Ingrese 15 n%cmeros\n", 163);
    do
    {
        scanf("%d", &num);
        prom=prom+num;
        if (num>num2)
        num2=num;
        a=a+1;
    }
    while (a<15);
    prom1=prom/15;
    printf("El promedio de los 15 n%cmeros es %d, y el mayor n%cmero ingresado es %d ", 163, prom1, 163, num2);
    system("pause");
}
