// BUSQUEDA DE UN PACIENTE POR NUMERO DE HISTORIA CLINICA
// METODO DE BUSQUEDA BINARIA (RECURSIVIDAD)

#include <iostream>
using namespace std;

// Funcion para ingresar pacientes
void ingresarPacientes(int historia[], char nombres[][30], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero de historia clinica del paciente [" << i + 1 << "]: ";
        cin >> historia[i];

        cout << "Ingrese el nombre del paciente [" << i + 1 << "] (sin espacios): ";
        cin >> nombres[i];
    }
}

// Funcion para mostrar pacientes
void mostrarPacientes(int historia[], char nombres[][30], int n) {
    cout << "\nHistoria\tPaciente" << endl;
    for (int i = 0; i < n; i++) {
        cout << historia[i] << "\t\t" << nombres[i] << endl;
    }
}

// Funcion para ordenar por historia clinica
void ordenarPacientes(int historia[], char nombres[][30], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (historia[j] > historia[j + 1]) {
                int auxHistoria = historia[j];
                historia[j] = historia[j + 1];
                historia[j + 1] = auxHistoria;

                char auxNombre[30];
                for (int k = 0; k < 30; k++) {
                    auxNombre[k] = nombres[j][k];
                    nombres[j][k] = nombres[j + 1][k];
                    nombres[j + 1][k] = auxNombre[k];
                }
            }
        }
    }
}

// Funcion de busqueda binaria recursiva
int busquedaBinariaRecursiva(int historia[], int inicio, int fin, int buscar) {
    if (inicio > fin) {
        return -1;
    }

    int medio = (inicio + fin) / 2;

    if (historia[medio] == buscar) {
        return medio;
    }

    if (buscar < historia[medio]) {
        return busquedaBinariaRecursiva(historia, inicio, medio - 1, buscar);
    } else {
        return busquedaBinariaRecursiva(historia, medio + 1, fin, buscar);
    }
}

int main() {
    int n, buscar, resultado;
    int historia[100];
    char nombres[100][30];

    cout << "===== EJERCICIO 6: BUSQUEDA BINARIA RECURSIVA =====" << endl;
    cout << "Ingrese la cantidad de pacientes: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Cantidad invalida." << endl;
        return 0;
    }

    ingresarPacientes(historia, nombres, n);

    cout << "\n--- DATOS INGRESADOS ---" << endl;
    mostrarPacientes(historia, nombres, n);

    ordenarPacientes(historia, nombres, n);

    cout << "\n--- PACIENTES ORDENADOS POR HISTORIA CLINICA ---" << endl;
    mostrarPacientes(historia, nombres, n);

    cout << "\nIngrese el numero de historia clinica a buscar: ";
    cin >> buscar;

    resultado = busquedaBinariaRecursiva(historia, 0, n - 1, buscar);

    if (resultado != -1) {
        cout << "\nPaciente encontrado." << endl;
        cout << "Historia clinica: " << historia[resultado] << endl;
        cout << "Nombre: " << nombres[resultado] << endl;
        cout << "Posicion: [" << resultado + 1 << "]" << endl;
    } else {
        cout << "\nPaciente no encontrado." << endl;
    }

    return 0;
}