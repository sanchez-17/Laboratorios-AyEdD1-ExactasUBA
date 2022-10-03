#include "labo1.h"

//ejercicio 5
int fibonacci(int n){
    int suma = 1;
    int a = 0;
    int b = 1;
    if(n==0 || n==1){return n;}
    for (int i = 2; i <= n ; ++i) {
        suma = a + b;
        a = b;
        b = suma;
    }
    return suma;
}