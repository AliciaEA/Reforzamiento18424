#include <stdio.h>

int sumar();
int restar();
int multiplicar();
int division();

int main(int argc, char const *argv[])
{
    int opcion;
    printf("¡Bienvenido!\n");
    printf("1. Sumar dos numeros\n");
    printf("2. Restar dos numeros\n");
    printf("3. Multiplicar dos numeros\n");
    printf("4. Dividir dos numeros\n");
    printf("5. Salir\n");
    printf("Escoge una de las opciones: ");

    scanf("%i", &opcion);

    if (opcion == 1)
    {
        printf("La suma de los numeros es %i\n", sumar());
    }
    else if (opcion == 2)
    {
        printf("La resta de los numeros es %i\n", restar());
    }
    else if (opcion == 3)
    {
        printf("La multiplicacion de ambos numeros es: %i\n", multiplicar());
    }
    else if (opcion == 4)
    {
        printf("La division de ambos numeros es: %i\n", division());
    }
    else if(opcion == 5){
        printf("Adioooos");
    }
    else
    {
        printf("Opcion invalida..\n");
    }

    if (opcion != 5)
    {
        main(0, 0);
    }

    return 0;
}

int sumar()
{
    int num1, num2;
    printf("Proporciona el valor del primer numero: ");
    scanf("%i", &num1);
    printf("Proporciona el valor del segundo numero: ");
    scanf("%i", &num2);

    return num1 + num2;
}

int restar()
{
    int num1, num2;
    printf("Proporciona el valor del primer numero: ");
    scanf("%i", &num1);
    printf("Proporciona el valor del segundo numero: ");
    scanf("%i", &num2);

    return num1 - num2;
}
int multiplicar()
{
    int num1, num2;
    printf("Proporciona el valor del primer numero: ");
    scanf("%i", &num1);
    printf("Proporciona el valor del segundo numero: ");
    scanf("%i", &num2);

    return num1 * num2;
}
int division()
{
    int num1, num2;
    printf("Proporciona el valor del primer numero: ");
    scanf("%i", &num1);
    printf("Proporciona el valor del segundo numero: ");
    scanf("%i", &num2);

    if (num2 > 0)
        return num1 / num2;
    return 0;
}