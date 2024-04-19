#include <stdio.h>

int suma ();
int resta ();
int division ();
int multiplicacion ();

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

int suma (){
    int numero1, numero2;
    printf("Proporciona el primer numero: ");
    scanf("%i", &numero1);
    printf("Proporciona el segundo numero: ");
    scanf("%i", &numero2);
    return numero1 + numero2;
}
int resta (){
    int numero1, numero2;
    printf("Proporciona el primer numero: ");
    scanf("%i", &numero1);
    printf("Proporciona el segundo numero: ");
    scanf("%i", &numero2);
    return numero1 - numero2;
}
int multiplicacion (){
    int numero1, numero2;
    printf("Proporciona el primer numero: ");
    scanf("%i", &numero1);
    printf("Proporciona el segundo numero: ");
    scanf("%i", &numero2);
    return numero1 + numero2;
}
int division (){
    int numero1, numero2;
    printf("Proporciona el primer numero: ");
    scanf("%i", &numero1);
    printf("Proporciona el segundo numero: ");
    scanf("%i", &numero2);
    if (numero2 > 0) return numero1 / numero2;
    return 0;
}
