    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    int divs, res, cont, divide;

    printf("Ingresar el dividendo entero positivo ");
    scanf("%d", &divide);
    printf("Ingresar el divisor entero positivo ");
    scanf("%d", &divs);

        cont=0;
        res=divide;

        while ( res>=divs )
        {
            res=res-divs;
            cont++;
        }
        printf("El resto de la division es %d", res);
        return 0;
}
