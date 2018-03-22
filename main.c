#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    float numero2;
    // 2-float suma;
    char letra;


    //numero2 = 5.5555; el usuario esta ingresando datos asi que lo comento para que no se asigne valor
    //numero1 = 50;     el usuario esta ingresando datos asi que lo comento para que no se asigne valor

    printf("ingrese un numero entero : ");
    scanf("%d",&numero1);
    printf("ingrese un numero decimal : ");
    scanf("%f",&numero2);
    //2-suma=numero1+numero2;
    printf("ingrese una letra : ");
   // fflush(stdin);//te limpia el baffer donde esta guardado el "enter"
   // scanf("%c",&letra);//se deja un espacio para que no tome el "enter" (" %c")

   letra=getc("ingrese una letra");

    printf("\nel 'numero entero es : %d y el numero flotante es : %.2f",numero1,numero2);
   //2- printf("\n la suma es %.2f ",suma);
    printf("\n la letra es %c",letra);
    return 0;
}
