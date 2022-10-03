#include "vectores.h"
#include <fstream>
#include <string>

// Función para probar en main.cpp si este módulo fue cargado correctamente
void holaModuloVectores(){
    cout << "El módulo vectores fue cargado correctamente" << endl;
}


//Ejercicio
bool divide(vector<int> v, int a){
	// Dados un vector v y un int a, decide si a divide a todos los numeros de v.
    for (int i=0 ; i<v.size() ; i++){
        if (v[i] % a != 0) { return false;}
    }
    return true;
}

//Ejercicio
int mayor(vector<int> v){
	// Dado un vector v, devuelve el valor maximo encontrado.
    int maximo = v[0];
    for(int i=1 ; i< v.size() ; i++){
        if (v[i] > maximo){ maximo = v[i]; }
    }
    return maximo;
}

//Ejercicio
vector<int> reverso(vector<int> v){
	// Dado un vector v, devuelve el reverso.
    vector<int> v2;
    for (int i = v.size() - 1; i >= 0; i--) {
        v2.push_back( v[i]);
    }
    return v2;
}

//Ejercicio
vector<int> rotar(vector<int> v, int k){
	// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
	// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
    vector<int> v1;
    for (int i = k; i < v.size(); i++) {
        v1.push_back(v[i]);
    }
    for (int i = 0; i < k; i++) {
        v1.push_back(v[i]);
    }
    return v1;

}

//Ejercicio
bool esPrimo(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
vector<int> factoresPrimos(int n){
	//que dado un entero devuelve un vector con los factores primos del mismo
    vector<int> v;
    for(int i=2; i<n;i++){
        if(n%i==0 && esPrimo(i)){
            v.push_back(i);
        }
    }
    return v;
}

//Ejercicio
bool esCreciente(vector<int> v){
    for (int i = 0; i < v.size() -1; ++i) {
        if (v[i] > v[i+1]){
            return false;
        }
    }
    return true;
}

bool esDecreciente(vector<int> v){
    for (int i = 0; i < v.size() -1; ++i) {
        if (v[i] < v[i+1]){
            return false;
        }
    }
    return true;
}
bool estaOrdenado(vector<int> v){
    //Dado un vector v de enteros no repetidos, devuelve verdadero si el mismo
    // esta ordenado (ya sea creciente o decrecientemente).
    if(esCreciente(v) || esDecreciente(v)){
        return true;
    }
    return false;

}

//Ejercicio
void mostrarVector(vector<int> v){
	//que dado un vector de enteros muestra por la salida estándar, el vector
	// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]
    cout << "[" ;
    for (int i = 0; i < v.size() ; i++) {
        if (i == v.size() - 1){
            cout << v[i] ;
        } else{
            cout << v[i] << "," ;
        }
    }
    cout << "]" << endl ;
}

//Ejercicio 8
vector<int> leerVector(string nombreArchivo){
    //Dado un archivo que contiene una secuencia de n´umeros enteros separados por espacio (por ejemplo: 1 2 34 4 45),
    //leerlo y devolver un vector con los n´umeros en el mismo orden.

    ifstream fin; vector<int> v;int i = 0;
    fin.open(nombreArchivo, ios::in);

    if (fin.fail()) { // true si hubo error al abrir
        cout << "Error al abrir el archivo" + nombreArchivo << endl;
    } else {
        cout << "Abierto satisfactoriamente el archivo " + nombreArchivo << endl;
    }

    while( !fin.eof() ){
        int a;
        fin >> a;
        v.push_back(a);
        i++;
    }
    fin.close();
    return v;
}

//Ejercicio 9
void guardarVector(vector<int> v, string nombreArchivo){
    //Dado un vector de enteros, grabar sus elementos en un archivo cuyo nombre viene como par´ametro de entrada. Ejemplo:
    //si el vector es <1, 2, 5, 65> el archivo contiene [1, 2, 5, 65].

    ofstream fout;
    fout.open(nombreArchivo);
    fout << "[";
    for(int i=0;i<v.size()-1;i++){
        fout << v[i] << ", ";
    }
    fout << v[v.size()-1] << "]";//escribe el ultimo elemento del vector
    fout.close();
}

//Ejercicio 10

int sumaIzquierda(vector<int> v, int i){
    int s= 0;
    for(int a=0;a<=i;a++){
        s += v[a];
    }
    return s;
}

int sumaDerecha(vector<int> v, int i){
    int s= 0;
    for(int a=v.size()-1;a>i;a--){
        s += v[a];
    }
    return s;
}

int elementoMedio(vector<int>v){
    /*Dado un vector de enteros encontrar el primer elemento de izquierda a derecha tal que los elementos a su izquierda
    suman m´as que los que est´an a su derecha. Ejemplo: <1, 2, 3, 4> el resultado es 3 porque (1+2) < 3 + 4 y (1 + 2 +
    3) > 4. El vector de entrada debe ser le´ıdo desde un archivo y el resultado debe ser mostrado por pantalla. Utilizar el
    archivo elementoMedio.in para probar la funci´on.*/

    for(int i=0; i<v.size();i++){
        if(sumaIzquierda(v,i) > sumaDerecha(v,i)){
            return v[i];
        }
    }
    return 0;
}

//Ejercicio 11
bool estaEnVector(vector<int> v, int b){
    if(v.size()==0){return false;}
    for (int i = 0; i < v.size(); ++i) {
        if(v[i]==b){return true;}
    }
    return false;
}

int cantAparicionesEnVector(vector<int> v, int b){
    int s=0;
    for (int i = 0; i < v.size(); ++i) {
        if(v[i]==b){s++;}
    }
    return s;
}
void cantApariciones(string nombreArchivo){
    /*Dado un archivo que contiene una lista de n´umeros, contar la cantidad de apariciones de cada uno y crear en un archivo
    en el directorio archivos/out con el mismo nombre del archivo de entrada, de manera de tener una l´ınea por cada
    n´umero encontrado, un espacio y su cantidad de apariciones.*/
    vector<int> yaLeidos, cantDeApariciones;
    //Leo el archivo y guardo todos los numeros en un vector "numeros"
    vector<int> numeros = leerVector(nombreArchivo);

    //Cuento la cantidad de apariciones de cada elemento. Guardo el elemento en un vector "NumerosYaLeidos"
    //Guardo la cantidad en un vector "cantidadDeApariciones"
    for(int i=0;i < numeros.size();i++){
        if(!estaEnVector(yaLeidos,numeros[i])){
            //guardo la cant de apariciones
            cantDeApariciones.push_back(cantAparicionesEnVector(numeros,numeros[i]));
            //recuerdo el numero, para no volver a contar sus apariciones
            yaLeidos.push_back(numeros[i]);
        }
    }
    //Creo un archivo e imprimo los resultados
    string directorio = "./template-alumnos/archivos/out/" + nombreArchivo;
    ofstream fout;
    fout.open(directorio);
    for (int i = 0; i < yaLeidos.size(); ++i) {
        fout << "linea " << i+1 << ":" << yaLeidos[i] << " " << cantDeApariciones[i] << endl;
    }
    fout.close();

}

//Ejercicio 12
int cantidadAparicionesDePalabra(string nombreArchivo, string palabra){
    /*Ingresar por consola una palabra a buscar y el nombre de un archivo de texto y devolver la cantidad de apariciones de
    la palabra en el archivo. Mostrar el resultado por pantalla.
    Para testear el ejercicio pueden usar el archivo cantidadAparicionesDePalabra.in.*/
    int contador = 0; string palabraEnArchivo;
    ifstream fin;
    fin.open(nombreArchivo, ios::in);
    while(!fin.eof()){
        fin >> palabraEnArchivo;
        if(palabraEnArchivo == palabra){ contador++;}
    }
    fin.close();
    return contador;
}

//Ejercicio 13
void promedio(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut){
    /*Dados dos archivos en los que cada uno contiene una secuencia de enteros de la misma longitud, guardar el promedio de
    cada par de n´umeros que se encuentran en la misma “posici´on” en el archivo de salida. Ejemplo: si tenemos dos secuencias
            <1, 2, 3, 4> y <1, 25, 3, 12> el resultado debe ser [1, 13.5, 3, 8]. En archivos/ se encuentra promedio1.in y
    promedio2.in. Cada archivo contiene 100 n´umeros random entre 1 y 10.*/
    vector<int> v_1 = leerVector(nombreArchivoIn1), v_2 = leerVector(nombreArchivoIn2);
    int n = v_2.size();//Guardo la longitud de la lista de numeros

    //preparo el archivo de salida
    ofstream fout;
    fout.open(nombreArchivoOut);
    fout << "[";
    for (int i = 0; i <n; ++i) {
        //Si el promedio es un entero
        if( (v_1[i] + v_2[i]) % 2 == 0){
            fout << ( v_1[i] + v_2[i] ) / 2 ;
        }
        else{
            //Si el promedio tiene decimales
            float a = v_1[i], b=v_2[i];
            fout << ( a+b ) / 2;
        }
        if(i!=n-1){fout << ", ";}

    }
    fout << "]";
    fout.close();

}

//Ejercicio 14
vector<int> concatenarVectores(vector<int> v1, vector<int> v2){
    for(int i = 0; i<v2.size();i++){
        v1.push_back(v2[i]);
    }
    return v1;
}

vector<int> ordenarVector(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        int temp = v[i];
        int j = i - 1;
        while(j >= 0 && temp < v[j]){
            v[j+1] = v[j];
            j = j - 1;
        }
        v[j+1] = temp;
    }
    return v;
}

void ordenarSecuencias(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut){
    /*
    Dados dos archivos en los que cada uno contiene una secuencia de enteros ordenada, ordenarlos y guardar el resultado
    en el archivo de salida. Ejemplo: si tenemos dos secuencias <1, 4, 8, 19> y <3, 25, 31> el resultado debe ser [1,
    3, 4, 8, 25, 31].
    En archivos/ se encuentra ordenarSecuencia1.in y ordenarSecuencia2.in. Cada archivo contiene 5000 n´umeros
            ordenados entre 1 y 1000. El primer archivo contiene los n´umeros pares en el rango y el segundo los impares.}
    */
    vector<int> v1 = leerVector(nombreArchivoIn1), v2 = leerVector(nombreArchivoIn2),v;
    v = concatenarVectores(v1,v2);
    v = ordenarVector(v);
    guardarVector(v,nombreArchivoOut);

}

//Ejercicio 15
vector<int> interseccion(){
    /*Funcion que pide al usuario que se ingrese por teclado dos nombres de archivos que contengan solo numeros enteros,
            luego calcule la interseccion (los elementos comunes a ambos archivos), que debe mostrar por pantalla, ademas de
    devolverla como vector.*/
    string nombreArchivo1, nombreArchivo2;
    cout << "Ingrese nombre del archivo 1: ";
    cin >> nombreArchivo1;
    cout << "Ingrese nombre del archivo 2: ";
    cin >> nombreArchivo2;

    vector<int> v1= leerVector(nombreArchivo1),v2= leerVector(nombreArchivo2),v;
    for (int i=0;i<v2.size();i++){
        if(cantAparicionesEnVector(v1,v2[i]) >=1){
            v.push_back(v2[i]);
        }
    }
    mostrarVector(v);
    return v;

}