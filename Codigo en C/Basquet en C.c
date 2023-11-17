#include <stdio.h>

int main() {
    int equipo1 = 0, equipo2 = 0, equipoActual, punto, puntaje1 = 0, puntaje2 = 0, simples = 0, dobles = 0, triples = 0;
    float porcentajeSimples, porcentajeDobles, porcentajeTriples;

    do {
        printf("Ingrese el numero de equipo (1, 2) (0 para terminar): ");
        scanf("%d", &equipoActual);

        if (equipoActual != 0) {
            if (equipoActual == 1 || equipoActual == 2) {
                printf("Ingrese el valor del punto. Debe ser 1, 2 o 3: ");
                scanf("%d", &punto);

                if (punto == 1 || punto == 2 || punto == 3) {
                    if (punto == 1) {
                        puntaje1 += 1;
                        simples += 1;
                    } else if (punto == 2) {
                        puntaje2 += 1;
                        dobles += 1;
                    } else {
                        puntaje2 += 1;
                        triples += 1;
                    }

                    if (equipoActual == 1) {
                        equipo1 += punto;
                    } else {
                        equipo2 += punto;
                    }

                    printf("Puntos del Equipo 1: %d\n", equipo1);
                    printf("Puntos del Equipo 2: %d\n", equipo2);

                    if (equipo1 > equipo2) {
                        printf("El Equipo 1 está ganando.\n");
                    } else if (equipo2 > equipo1) {
                        printf("El Equipo 2 está ganando.\n");
                    } else {
                        printf("El partido está empatado.\n");
                    }

                    printf("Tiros simples: %d\n", simples);
                    printf("Tiros dobles: %d\n", dobles);
                    printf("Tiros triples: %d\n", triples);

                    porcentajeSimples = (simples * 100.0) / (simples + dobles + triples);
                    porcentajeDobles = (dobles * 100.0) / (simples + dobles + triples);
                    porcentajeTriples = (triples * 100.0) / (simples + dobles + triples);

                    printf("Porcentaje de tiros simples: %.2f%%\n", porcentajeSimples);
                    printf("Porcentaje de tiros dobles: %.2f%%\n", porcentajeDobles);
                    printf("Porcentaje de tiros triples: %.2f%%\n", porcentajeTriples);
                    printf("---------------------------\n");
                } else {
                    printf("Error: El valor de punto ingresado es incorrecto, vuelva a intentar.\n");
                }
            } else {
                printf("Error: El valor de equipo ingresado es incorrecto. Debe ser 1 o 2.\n");
            }
        }
    } while (equipoActual != 0);

    printf("Equipo 1: %d\n", equipo1);
    printf("Equipo 2: %d\n", equipo2);

    if (equipo1 > equipo2) {
        printf("Gana equipo 1.\n");
    } else if (equipo2 > equipo1) {
        printf("Gana el equipo 2.\n");
    } else {
        printf("Empate.\n");
    }

    return 0;
}