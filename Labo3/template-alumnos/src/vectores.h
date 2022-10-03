#ifndef EJERCICIOS_H
#define EJERCICIOS_H

#include <iostream>
#include <vector>

using namespace std;

void holaModuloVectores();

//Ejercicio
bool divide(vector<int> v, int a);
// Dados un vector v y un int a, decide si a divide a todos los numeros de v.

//Ejercicio
int mayor(vector<int> v);
// Dado un vector v, devuelve el valor maximo encontrado.

//Ejercicio
vector<int> reverso(vector<int> v);
// Dado un vector v, devuelve el reverso.

//Ejercicio
vector<int> rotar(vector<int> v, int k);
// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].

//Ejercicio
bool estaOrdenado(vector<int> v);
//Dado un vector v de enteros no repetidos, devuelve verdadero si el
// mismo est´a ordenado (ya sea creciente o decrecientemente).

//Ejercicio
bool esPrimo(int n);
vector<int> factoresPrimos(int n);
// Dado un entero devuelve un vector con los factores primos del mismo

//Ejercicio
void mostrarVector(vector<int> v);
// Dado un vector de enteros muestra por la salida estándar, el vector
// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]

// Y aca van todos los otros headers de los ejercicios del laboratorio

//Ejercicio 8
vector<int> leerVector(string nombreArchivo);
//Dado un archivo que contiene una secuencia de n´umeros enteros separados por espacio (por ejemplo: 1 2 34 4 45),
//leerlo y devolver un vector con los n´umeros en el mismo orden.


//Ejercicio 9
void guardarVector(vector<int> v, string nombreArchivo);
//Dado un vector de enteros, grabar sus elementos en un archivo cuyo nombre viene como par´ametro de entrada. Ejemplo:
//si el vector es <1, 2, 5, 65> el archivo contiene [1, 2, 5, 65].

//Ejercicio 10
int sumaIzquierda(vector<int> v, int i);
int sumaDerecha(vector<int> v, int i);
int elementoMedio(vector<int>v);
/*Dado un vector de enteros encontrar el primer elemento de izquierda a derecha tal que los elementos a su izquierda
suman m´as que los que est´an a su derecha. Ejemplo: <1, 2, 3, 4> el resultado es 3 porque (1+2) < 3 + 4 y (1 + 2 +
3) > 4. El vector de entrada debe ser le´ıdo desde un archivo y el resultado debe ser mostrado por pantalla. Utilizar el
archivo elementoMedio.in para probar la funci´on.*/

//Ejercicio 11
bool estaEnVector(vector<int> v, int b);
int cantAparicionesEnVector(vector<int> v, int b);
void cantApariciones(string nombreArchivo);
/*Dado un archivo que contiene una lista de n´umeros, contar la cantidad de apariciones de cada uno y crear en un archivo
en el directorio archivos/out con el mismo nombre del archivo de entrada, de manera de tener una l´ınea por cada
n´umero encontrado, un espacio y su cantidad de apariciones.*/

//Ejercicio 12
int cantidadAparicionesDePalabra(string nombreArchivo, string palabra);
/*Ingresar por consola una palabra a buscar y el nombre de un archivo de texto y devolver la cantidad de apariciones de
la palabra en el archivo. Mostrar el resultado por pantalla.
Para testear el ejercicio pueden usar el archivo cantidadAparicionesDePalabra.in.*/

//Ejercicio 13
void promedio(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut);
/*Dados dos archivos en los que cada uno contiene una secuencia de enteros de la misma longitud, guardar el promedio de
cada par de n´umeros que se encuentran en la misma “posici´on” en el archivo de salida. Ejemplo: si tenemos dos secuencias
        <1, 2, 3, 4> y <1, 25, 3, 12> el resultado debe ser [1, 13.5, 3, 8]. En archivos/ se encuentra promedio1.in y
promedio2.in. Cada archivo contiene 100 n´umeros random entre 1 y 10.*/

//Ejercicio 14
vector<int> concatenarVectores(vector<int> v1, vector<int> v2);
vector<int> ordenarVector(vector<int> v);

void ordenarSecuencias(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut);
/*
Dados dos archivos en los que cada uno contiene una secuencia de enteros ordenada, ordenarlos y guardar el resultado
en el archivo de salida. Ejemplo: si tenemos dos secuencias <1, 4, 8, 19> y <3, 25, 31> el resultado debe ser [1,
3, 4, 8, 25, 31].
En archivos/ se encuentra ordenarSecuencia1.in y ordenarSecuencia2.in. Cada archivo contiene 5000 n´umeros
        ordenados entre 1 y 1000. El primer archivo contiene los n´umeros pares en el rango y el segundo los impares.
*/

//Ejercicio 15
vector<int> interseccion();
/*Funci´on que pide al usuario que se ingrese por teclado dos nombres de archivos que contengan solo n´umeros enteros,
        luego calcule la intersecci´on (los elementos comunes a ambos archivos), que debe mostrar por pantalla, adem´as de
devolverla como vector.*/
#endif