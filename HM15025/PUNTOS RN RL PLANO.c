/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cristian
 *
 * Created on 12 de noviembre de 2018, 09:23 AM
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, opcion;

    do {
        printf("\n   1. Calcular la distancia entre los puntos.");
        printf("\n   2. Calcular la ecuacion de la recta.");
        printf("\n   3. Salir.");

        scanf("%d", &opcion);
        switch (opcion) {

            case 1:
/*
                declaracion de los puntos
*/
                struct Tpunto {
                    float x1;
                    float x2;
                    float y1;
                    float y2;

                };

                struct TlistaPuntos {
                    int tam;

                };
/*
                pide y muestra el valor de la distancia entre los puntos
*/
                int distancia_puntos(struct Tpunto x, struct Tpunto y);

                main(void) {

                    float dist, x1, y1, x2, y2;
                    printf("\n Escribe el los puntos x1,y1,x2,y2:");
                    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
                    dist = Tpunto(x1, y1, x2, y2);
                    printf("\nLa distancia entre los puntos es: %.4f", dist);
                    system("PAUSE");
                    return (0);
                }
/*
                formula para calcular la distancia
*/
                float Tpunto(float x1, float y1, float x2, float y2) {
                    float d;
                    d = sqrt(((x2 - x1)*(x2 - x1))+((y2 - y1)*(y2 - y1)));

                    return d;
                    
                    case 2:
                        
                        
                }
        }
        while (opcion != 3);

    }
}

