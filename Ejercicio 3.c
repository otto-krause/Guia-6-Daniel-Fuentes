    #include<stdlib.h>
    #include<stdio.h>
    void main ()
    {
        int num=0, num2=0;
        float inter=0;
        printf("Ingrese dos n%cmeros\n", 163);
        scanf("%d %d", &num, &num2);
        inter=num;
        do
        {
            inter=inter+0.1;
            printf("%f\n", inter);
        }
        while (inter<=num2);

        return 0;
    }
