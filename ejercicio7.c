/*7.	Programa para calcular el área y el perímetro de un
rectángulo dada la base y la altura.
Utilizar una función diferente por cada cálculo.*/

#include <stdio.h>

int calcArea(int altura, int base);
int calcPerimetro(int altura, int base);

int main(int argc, char const *argv[])
{
    int opcion;
    int altura, base;
    printf("¡Bienvenido!\n Elija alguna de las siguientes opciones:\n");
    printf("1. Calcular el area del rectangulo\n");
    printf("2. Calcular el perimetro del rectangulo\n");
    printf("3. Salir\n");
    scanf("%i", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Proporciona la altura del rectangulo: ");
        scanf("%i", &altura);
        printf("Proporciona la base del rectangulo: ");
        scanf("%i", &base);
        printf("El area del rectangulo es de: %i", calcArea(altura, base));
        break;

    case 2: 
        printf("Proporciona la altura del rectangulo: ");
        scanf("%i", &altura);
        printf("Proporciona la base del rectangulo: ");
        scanf("%i", &base);
        printf("El Perimetro del rectangulo es de: %i", calcPerimetro(altura, base));
        break;

    default:
        printf("Opcion invalida...");
        break;
    }
     if (opcion!= 3){
          main(0, 0);
        return 0;
    }
    return 0;
}

int calcArea(int altura, int base)
{
    return altura * base;
}

int calcPerimetro(int altura, int base)
{
    return (2 * altura) + (2 * base);
}