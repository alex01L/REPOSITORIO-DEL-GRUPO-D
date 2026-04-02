// ORDENAMIENTO DE LA CANTIDAD DE PASAJEROS QUE VIAJAN EN UN AVION
// METODO DE BURBUJA

#include <iostream>
using namespace std;

// Funcion para ingresar datos
void ingresarAsientos(int asientos[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero de asiento del pasajero [" << i + 1 << "]: ";
        cin >> asientos[i];
    }
}

// Funcion para mostrar datos
void mostrarAsientos(int asientos[], int n) {
    for (int i = 0; i < n; i++) {
        cout << asientos[i] << " ";
    }
    cout << endl;
}

// Funcion de ordenamiento Burbuja
void ordenarBurbuja(int asientos[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (asientos[j] > asientos[j + 1]) {
                int aux = asientos[j];
                asientos[j] = asientos[j + 1];
                asientos[j + 1] = aux;
            }
        }
    }
}

int main() {
    int n, asientos[100];

    cout << "===== EJERCICIO 1: ORDENAMIENTO BURBUJA =====" << endl;
    cout << "Ingrese la cantidad de pasajeros: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Cantidad invalida." << endl;
        return 0;
    }

    ingresarAsientos(asientos, n);

    cout << "\nAsientos ingresados: ";
    mostrarAsientos(asientos, n);

    ordenarBurbuja(asientos, n);

    cout << "Asientos ordenados de menor a mayor: ";
    mostrarAsientos(asientos, n);

    return 0;
}