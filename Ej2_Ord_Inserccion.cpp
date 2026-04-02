// ORDENAMIENTO DEL NUMERO DE LIBROS DE UNA BIBLIOTECA
// METODO DE INSERCCION

#include <iostream>
using namespace std;

// Funcion para ingresar datos
void ingresarAnios(int anios[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el anio de publicacion del libro [" << i + 1 << "]: ";
        cin >> anios[i];
    }
}

// Funcion para mostrar datos
void mostrarAnios(int anios[], int n) {
    for (int i = 0; i < n; i++) {
        cout << anios[i] << " ";
    }
    cout << endl;
}

// Funcion de ordenamiento por Insercion
void ordenarInsercion(int anios[], int n) {
    for (int i = 1; i < n; i++) {
        int aux = anios[i];
        int j = i - 1;

        while (j >= 0 && anios[j] > aux) {
            anios[j + 1] = anios[j];
            j--;
        }

        anios[j + 1] = aux;
    }
}

int main() {
    int n, anios[100];

    cout << "===== EJERCICIO 2: ORDENAMIENTO POR INSERCION =====" << endl;
    cout << "Ingrese la cantidad de libros: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Cantidad invalida." << endl;
        return 0;
    }

    ingresarAnios(anios, n);

    cout << "\nAnios ingresados: ";
    mostrarAnios(anios, n);

    ordenarInsercion(anios, n);

    cout << "Anios ordenados de menor a mayor: ";
    mostrarAnios(anios, n);

    return 0;
}