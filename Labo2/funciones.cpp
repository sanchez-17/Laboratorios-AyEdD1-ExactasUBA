#include "funciones.h"

//Ejercicio 7
void swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

//ejercicio 9
void division(int dividendo, int divisor, int& cociente, int& resto){
    cociente = (dividendo - dividendo % divisor) / divisor;
    resto = dividendo % divisor;
}
