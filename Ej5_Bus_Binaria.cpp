// BUSQUEDA DE UNA CIUDAD POR SU CODIGO POSTAL
// METODO DE BUSQUEDA BINARIA

#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Ingrese el numero de ciudades: ";
    cin >> n;

    string ciudad[n];
    int codigo[n];

    // Ingreso de datos de cada ciudad
    for (int i = 0; i < n; i ++){
        cout << "Ingrese el nombre de la ciudad [" << i + 1 << "]: ";
        cin >> ciudad[i];

        cout << "Ingrese el codigo postal de la ciudad [" << ciudad[i] << "]: ";
        cin >> codigo[i];
    }

    // Mostrar agenda de ciudades
    cout << " AGENDA DE CIUDADES " << endl;

    for (int i = 0; i < n; i ++){
        cout << ciudad[i] << "  " << codigo[i] << endl;
    }

    // Buscar ciudad (Metodo Binario)
    int buscar;
    cout << "Ingrese el codigo postal de la ciudad a buscar: ";
    cin >> buscar;

    for (int i = 0; i < n; i ++){
        if (codigo[i] == buscar){
            cout << "La ciudad que buscas se encuentra en la posicion [" << i + 1 << "]" << endl;
            cout << "El nombre de la ciudad es: " << ciudad[i] << endl;
        }
    }

    return 0;
}