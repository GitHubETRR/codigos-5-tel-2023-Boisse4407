#include <stdio.h>
#include <math.h>

int main() {
    double modulo, fase, real, imag;

    // Solicitar al usuario que ingrese el módulo y la fase del número complejo
    printf("Ingrese el módulo del número complejo: ");
    scanf("%lf", &modulo);

    printf("Ingrese la fase del número complejo en radianes: ");
    scanf("%lf", &fase);

    // Calcular las partes real e imaginaria del número complejo
    real = modulo * cos(fase);
    imag = modulo * sin(fase);

    // Mostrar el número complejo en formato rectangular
    printf("El número complejo en formato rectangular es: %lf + j%lf\n", real, imag);

    return 0;
}