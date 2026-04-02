// BUSQUEDA DE UNA CIUDAD POR SU CODIGO POSTAL
// METODO DE BUSQUEDA BINARIA

#include <iostream>
using namespace std;

// Funcion para ingresar datos
void ingresarProductos(int productos[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el codigo del producto [" << i + 1 << "]: ";
        cin >> productos[i];
    }
}

// Funcion para mostrar datos
void mostrarProductos(int productos[], int n) {
    for (int i = 0; i < n; i++) {
        cout << productos[i] << " ";
    }
    cout << endl;
}

// Funcion para ordenar (Burbuja)
void ordenarProductos(int productos[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (productos[j] > productos[j + 1]) {
                int aux = productos[j];
                productos[j] = productos[j + 1];
                productos[j + 1] = aux;
            }
        }
    }
}

// Funcion de busqueda binaria
int busquedaBinaria(int productos[], int n, int buscado) {
    int inicio = 0, fin = n - 1;

    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;

        if (productos[medio] == buscado) {
            return medio;
        } else if (buscado < productos[medio]) {
            fin = medio - 1;
        } else {
            inicio = medio + 1;
        }
    }

    return -1;
}

int main() {
    int n, productos[100], buscado, posicion;

    cout << "===== EJERCICIO 5: BUSQUEDA BINARIA =====" << endl;
    cout << "Ingrese la cantidad de productos: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Cantidad invalida." << endl;
        return 0;
    }

    ingresarProductos(productos, n);

    cout << "\nCodigos ingresados: ";
    mostrarProductos(productos, n);

    ordenarProductos(productos, n);

    cout << "Codigos ordenados: ";
    mostrarProductos(productos, n);

    cout << "\nIngrese el codigo a buscar: ";
    cin >> buscado;

    posicion = busquedaBinaria(productos, n, buscado);

    if (posicion != -1) {
        cout << "Producto encontrado en la posicion [" << posicion + 1 << "]." << endl;
    } else {
        cout << "Producto no encontrado." << endl;
    }

    return 0;
}