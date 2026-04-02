// ORDENAMIENTO DE NOTAS DE ESTUDIANTES DESDE LA MAS ALTA HASTA LA MAS BAJA
// METODO DE SELECCION

#include <iostream>
using namespace std;

// Funcion para ingresar datos
void ingresarEstudiantes(char nombres[][30], int notas[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del estudiante [" << i + 1 << "] (sin espacios): ";
        cin >> nombres[i];

        cout << "Ingrese la nota de " << nombres[i] << ": ";
        cin >> notas[i];
    }
}

// Funcion para mostrar datos
void mostrarEstudiantes(char nombres[][30], int notas[], int n) {
    cout << "Estudiante\tNota" << endl;
    for (int i = 0; i < n; i++) {
        cout << nombres[i] << "\t\t" << notas[i] << endl;
    }
}

// Funcion de ordenamiento por Seleccion
void ordenarSeleccion(char nombres[][30], int notas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int mayor = i;

        for (int j = i + 1; j < n; j++) {
            if (notas[j] > notas[mayor]) {
                mayor = j;
            }
        }

        // Intercambiar notas
        int auxNota = notas[i];
        notas[i] = notas[mayor];
        notas[mayor] = auxNota;

        // Intercambiar nombres
        char auxNombre[30];
        for (int k = 0; k < 30; k++) {
            auxNombre[k] = nombres[i][k];
            nombres[i][k] = nombres[mayor][k];
            nombres[mayor][k] = auxNombre[k];
        }
    }
}

int main() {
    int n, notas[100];
    char nombres[100][30];

    cout << "===== EJERCICIO 3: ORDENAMIENTO POR SELECCION =====" << endl;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Cantidad invalida." << endl;
        return 0;
    }

    ingresarEstudiantes(nombres, notas, n);

    cout << "\nLista original:" << endl;
    mostrarEstudiantes(nombres, notas, n);

    ordenarSeleccion(nombres, notas, n);

    cout << "\nLista ordenada de mayor a menor:" << endl;
    mostrarEstudiantes(nombres, notas, n);

    return 0;
}