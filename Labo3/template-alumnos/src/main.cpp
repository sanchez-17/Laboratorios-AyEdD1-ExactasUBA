#include "generador.h"
#include "vectores.h"
#include <fstream>
#include <string>

using namespace std;

int main() {
    // funcion para generar automaticamente los archivos numericos
    //generarDatosLaboratorio(); // descomentar para crear automaticamente los archivos necesarios en la parte de entrada-salida. Una vez creados, se puede volver a comentar
    //holaModuloVectores(); // función definida en vectores.cpp
    vector<int> v1 = {10,5,15};
    vector<int> v2 = {5,2,3};

    //ejercicio 1
    //cout << divide(v2,2) << endl;*/

    //ejercicio 2
    //cout << mayor(v2) << endl;

    //ejercicio 3
    /*vector<int> v3 = reverso({});
    mostrarVector(v1);
    mostrarVector(v3);*/

    //ejercicio 4
    /*vector<int> v4_0 = {1,2,3,4,5,6};
    vector<int> v4_1 = rotar(v4_0,2);
    mostrarVector(v4_1);*/

    //ejercicio 5
    //vector<int> v5_0 = {5,5,4,3,2,1,1};
    //cout << estaOrdenado(v5_0) << endl;

    //Ejercicio 6
    //vector<int> v6_0 = factoresPrimos(142857);
    //mostrarVector(v6_0);

    //Ejercicio 7
    //vector<int> v7_0 = leerVector("leerVector.in");
    //mostrarVector(v7_0);

    //Ejercicio 9
    /*vector<int> v9_0 = {5,52,4,35,2,18,12};
    guardarVector(v9_0, "ejercicio9.in");*/

    //Ejercicio 10
    /*vector<int> v10_0 = leerVector("elementoMedio.in");
    int s = elementoMedio(v10_0);
    cout<<s;*/

    //Ejercicio 11
    //cantApariciones("10000NumerosEntre1y50.in");

    //Ejercicio 12
    /*string palabra;
    cout << "Ingrese palabra a buscar: ";
    cin >> palabra;
    int i = cantidadAparicionesDePalabra("./template-alumnos/archivos/cantidadAparicionesDePalabra.in",palabra);
    cout << i << endl;*/

    //Ejercicio 13
    //promedio("promedio1.in","promedio2.in","ejercicio13.in");

    //Ejercicio 14
    //ordenarSecuencias("ordenarSecuencia1.in","ordenarSecuencia2.in","ejercicio14.txt");

    //Ejercicio 15
    //vector<int> v = interseccion();
    return 0;
}
