// BUSQUEDA DE UN CONTACTO EN UNA AGENDA
// METODO DE BUSQUEDA LINEAL

#include <iostream>
using namespace std;

// Funcion para ingresar contactos
void ingresarContactos(char nombres[][30], char telefonos[][15], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del contacto [" << i + 1 << "] (sin espacios): ";
        cin >> nombres[i];

        cout << "Ingrese el telefono de " << nombres[i] << ": ";
        cin >> telefonos[i];
    }
}

// Funcion para mostrar agenda
void mostrarAgenda(char nombres[][30], char telefonos[][15], int n) {
    cout << "Nombre\t\tTelefono" << endl;
    for (int i = 0; i < n; i++) {
        cout << nombres[i] << "\t\t" << telefonos[i] << endl;
    }
}

// Funcion de comparacion de cadenas
bool sonIguales(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i]) {
            return false;
        }
        i++;
    }
    return true;
}

// Funcion de busqueda lineal
void buscarContacto(char nombres[][30], char telefonos[][15], int n, char buscar[]) {
    bool encontrado = false;

    for (int i = 0; i < n; i++) {
        if (sonIguales(nombres[i], buscar)) {
            cout << "\n--- CONTACTO ENCONTRADO ---" << endl;
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Telefono: " << telefonos[i] << endl;
            cout << "Posicion: [" << i + 1 << "]" << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "\nContacto no encontrado." << endl;
    }
}

int main() {
    int n;
    char nombres[100][30], telefonos[100][15], buscar[30];

    cout << "===== EJERCICIO 4: BUSQUEDA LINEAL =====" << endl;
    cout << "Ingrese la cantidad de contactos: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Cantidad invalida." << endl;
        return 0;
    }

    ingresarContactos(nombres, telefonos, n);

    cout << "\nAgenda registrada:" << endl;
    mostrarAgenda(nombres, telefonos, n);

    cout << "\nIngrese el nombre del contacto a buscar: ";
    cin >> buscar;

    buscarContacto(nombres, telefonos, n, buscar);

    return 0;
}