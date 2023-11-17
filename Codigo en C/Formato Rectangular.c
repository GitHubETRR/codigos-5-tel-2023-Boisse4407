#include <stdio.h>
#include <math.h>

int main() {
    double real1, imag1, real2, imag2, suma_real, suma_imag;
    char opcion;

    // Solicitar al usuario ingresar la parte real e imaginaria del primer número complejo
    printf("Ingrese la parte real e imaginaria del primer número complejo (ejemplo: 3 4): ");
    scanf("%lf %lf", &real1, &imag1);

    // Solicitar al usuario ingresar la parte real e imaginaria del segundo número complejo
    printf("Ingrese la parte real e imaginaria del segundo número complejo (ejemplo: 1 -2): ");
    scanf("%lf %lf", &real2, &imag2);

    // Calcular la suma de los números complejos en formato rectangular
    suma_real = real1 + real2;
    suma_imag = imag1 + imag2;

    // Solicitar al usuario que elija el formato de salida
    printf("¿Cómo desea ver el resultado? (P para polar, R para rectangular): ");
    scanf(" %c", &opcion);

    // Mostrar el resultado en el formato seleccionado
    if (opcion == 'P' || opcion == 'p') {
        double modulo, fase;

        modulo = sqrt(suma_real * suma_real + suma_imag * suma_imag);
        fase = atan2(suma_imag, suma_real);

        printf("El resultado en formato polar es: %.2lf < %.2lf radianes\n", modulo, fase);
    } else if (opcion == 'R' || opcion == 'r') {
        printf("El resultado en formato rectangular es: %.2lf + j%.2lf\n", suma_real, suma_imag);
    } else {
        printf("Opción no válida.\n");
    }

    return 0;
}
