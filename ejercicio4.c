/*4.	Programa para crear un 
procedimiento que reciba dos variables reales 
como argumentos e intercambiar sus valores.*/

#include <stdio.h>


void intercambiar (int v1, int v2);

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Proporciona el valor del primer numero: ");
    scanf("%i", &num1);
    printf("Proporciona el valor del segundo numero: ");
    scanf("%i", &num2);

    intercambiar(num1, num2);
    return 0;
}

void intercambiar (int v1, int v2){
    int vtemp;
    vtemp = v1;
    v1 = v2;
    v2 = vtemp;

    printf("Los valores intercambiados son %i, %i", v1, v2);
    
}
