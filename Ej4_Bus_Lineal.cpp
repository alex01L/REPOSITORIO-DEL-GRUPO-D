// BUSQUEDA DE UN CONTACTO EN UNA AGENDA
// METODO DE BUSQUEDA LINEAL

#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Ingrese el numero de contactos: ";
    cin >> n;

    string nombre[n];
    string telefono[n];

    // Ingreso de datos de cada contacto
    for (int i = 0; i < n; i ++){
        cout << "Ingrese el nombre del contacto [" << i + 1 << "]: ";
        cin >> nombre[i];

        cout << "Ingrese el numero de telefono del contacto [" << i + 1 << "]: ";
        cin >> telefono[i];
    }

    // Mostrar agenda de contactos
    cout << " AGENDA DE CONTACTOS " << endl;

    for (int i = 0; i < n; i ++){
        cout << nombre[i] << "  " << telefono[i] << endl;
    }

    // Buscar contacto (Metodo Lineal)
    string buscar;
    cout << "Ingrese el nombre del contacto a buscar: ";
    cin >> buscar;

    for (int i = 0; i < n; i ++){
        if (nombre[i] == buscar){
            cout << "El contacto  " << nombre[i] << " se encuentra en la posicion [" << i + 1 << "]" << endl;
            cout << "El numero de telefono es: " << telefono[i] << endl;
        }
    }

    return 0;
}