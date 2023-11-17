#include <stdio.h>
#include <math.h>

int main() {
    double real, imag, modulo, fase;

    // Solicitar al usuario ingresar la parte real e imaginaria del número complejo
    printf("Por favor, introduzca la parte real del número complejo: ");
    scanf("%lf", &real);

    printf("Ahora ingrese la parte imaginaria del número complejo: ");
    scanf("%lf", &imag);

    // Calcular el módulo del número complejo utilizando la fórmula estándar
    modulo = sqrt(real * real + imag * imag);

    // Calcular la fase (ángulo) del número complejo en radianes mediante una función trigonométrica
    fase = atan2(imag, real);

    // Mostrar el resultado al usuario
    printf("El módulo del número complejo es: %lf\n", modulo);
    printf("La fase (ángulo) del número complejo en radianes es: %lf\n", fase);

    return 0;
}

