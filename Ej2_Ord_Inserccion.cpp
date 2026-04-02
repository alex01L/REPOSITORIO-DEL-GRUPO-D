// ORDENAMIENTO DEL NUMERO DE LIBROS DE UNA BIBLIOTECA
// METODO DE INSERCCION

#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Ingrese el numero de libros: ";
    cin >> n;

    int vector[n];
    // Ingrese el año de publicacion de los libros
    for (int i = 0; i < n; i ++){
        cout << "Ingrese el anio de publicacion del libro [" << i + 1 << "]: ";
        cin >> vector[i];
    }

    // Mostrar libros si ordenar
    cout << " LIBROS PUBLICADOS" << endl;
    for (int i = 0; i < n; i ++){
        cout << "  " << vector[i];
    }
	cout << endl;
    // Ordenamiento de los libros por el año de publicacion (METODO DE INSECCION)
    for (int i = 1; i < n; i++){
        int aux = vector[i];
        int j = i - 1;
        while (j >= 0 && vector[j] > aux){
            vector[j + 1] = vector[j];
            j--;
        }
        vector[j + 1] = aux;
    }

    // Mostrar libros ordenados
    cout << " LIBROS PUBLICADOS DE MANERA ORDENADA" << endl;
    for (int i = 0; i < n; i ++){
        cout << "  " << vector[i];
    }

    return 0;
}