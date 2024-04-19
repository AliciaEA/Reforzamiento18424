#include <stdio.h>

int converMetros ( int distKilometros);

int main(int argc, char const *argv[])
{
    int metros, kilometros;

    printf("Proporciona la distancia en Kilometros para convertir a metros: ");
    scanf("%i", &kilometros);

    metros = converMetros(kilometros);

    printf("La distancia en metros es: %i", metros);
    return 0;
}

int converMetros ( int km){
    return (km * 1000);
}
