#include <stdio.h>
#include <math.h>

int main() {
    float real, imag, frecuencia;

    // Solicitar al usuario ingresar la parte real e imaginaria de la impedancia
    printf("Ingrese la parte real de la impedancia: ");
    scanf("%f", &real);

    printf("Ingrese la parte imaginaria de la impedancia: ");
    scanf("%f", &imag);

    // Solicitar al usuario ingresar la frecuencia de trabajo
    printf("Ingrese la frecuencia de trabajo (en Hz): ");
    scanf("%f", &frecuencia);

    // Calcular la resistencia
    float resistencia = sqrt(real * real + imag * imag);

    // Mostrar el resultado
    printf("Resistencia: %.2f ohmios\n", resistencia);

    // Calcular y mostrar el componente reactivo
    if (imag > 0) {
        float inductancia = resistencia / (2 * 3.14159265359 * frecuencia);
        printf("Inductancia (reactancia inductiva): %.2f Henrys\n", inductancia);
    } else if (imag < 0) {
        float capacitancia = 1 / (2 * 3.14159265359 * frecuencia * resistencia);
        printf("Capacitancia (reactancia capacitiva): %.2f Faradios\n", capacitancia);
    } else {
        printf("No hay componente reactivo (ni inductivo ni capacitivo).\n");
    }

    return 0;
}
