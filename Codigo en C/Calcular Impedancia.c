#include <stdio.h>
#include <math.h>

// Función para calcular la impedancia, resistencia y componentes asociados
void calcularImpedancia(float moduloI, float faseI, float frecuencia, float *resistencia, float *inductancia, float *capacitancia) {
    float realI, imagI;

    // Convertir el número complejo de módulo y fase a forma rectangular
    realI = moduloI * cos(faseI);
    imagI = moduloI * sin(faseI);

    // Calcular la impedancia
    float moduloZ = sqrt(realI * realI + imagI * imagI);

    // Calcular la resistencia (parte real de la impedancia)
    *resistencia = moduloZ;

    // Calcular la reactancia (parte imaginaria de la impedancia)
    float reactancia = 0;

    if (imagI > 0) {
        // Calcular inductancia
        *inductancia = moduloZ / (2 * 3.14159265359 * frecuencia);
    } else if (imagI < 0) {
        // Calcular capacitancia
        *capacitancia = 1 / (2 * 3.14159265359 * frecuencia * moduloZ);
    }
}

int main() {
    float moduloI, faseI, frecuencia, resistencia = 0, inductancia = 0, capacitancia = 0;

    // Solicitar al usuario ingresar el módulo y la fase de la corriente
    printf("Ingrese el módulo de la corriente: ");
    scanf("%f", &moduloI);

    printf("Ingrese la fase de la corriente (en radianes): ");
    scanf("%f", &faseI);

    // Solicitar al usuario ingresar la frecuencia de trabajo
    printf("Ingrese la frecuencia de trabajo (en Hz): ");
    scanf("%f", &frecuencia);

    // Calcular la impedancia, resistencia y componentes asociados
    calcularImpedancia(moduloI, faseI, frecuencia, &resistencia, &inductancia, &capacitancia);

    // Mostrar los resultados
    printf("Impedancia: %.2f ohmios + j%.2f ohmios\n", resistencia, inductancia - capacitancia);

    if (inductancia > 0) {
        printf("Componente asociado: Inductor %.2f Henrys\n", inductancia);
    } else if (capacitancia > 0) {
        printf("Componente asociado: Capacitor %.2f Faradios\n", capacitancia);
    } else {
        printf("Componente asociado: Resistor %.2f ohmios\n", resistencia);
    }

    return 0;
}
