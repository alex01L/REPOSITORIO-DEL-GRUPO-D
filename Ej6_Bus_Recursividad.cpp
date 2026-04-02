// BUSQUEDA DE UN PACIENTE POR NUMERO DE HISTORIA CLINICA
// METODO DE BUSQUEDA BINARIA (RECURSIVIDAD)

#include <iostream>
using namespace std;

int busquedaBinaria(int codigo[], int inicio, int fin, int buscar){
    
    if(inicio > fin){
        return -1;
    }

    int medio = (inicio + fin) / 2;

    if(codigo[medio] == buscar){
        return medio;
    }

    if(buscar < codigo[medio]){
        return busquedaBinaria(codigo, inicio, medio - 1, buscar);
    }else{
        return busquedaBinaria(codigo, medio + 1, fin, buscar);
    }
}

int main(){

    int n;
    cout << "Ingrese el numero de pacientes: ";
    cin >> n;

    int historia[n];
    string nombre[n];

    // Ingreso de datos (ordenados)
    for(int i = 0; i < n; i++){
        cout << "Ingrese numero de historia clinica: ";
        cin >> historia[i];

        cout << "Ingrese nombre del paciente: ";
        cin >> nombre[i];
    }

    int buscar;
    cout << "\nIngrese el numero de historia clinica a buscar: ";
    cin >> buscar;

    int resultado = busquedaBinaria(historia, 0, n - 1, buscar);

    if(resultado != -1){
        cout << "Paciente encontrado: " << nombre[resultado] << endl;
    }else{
        cout << "Paciente no encontrado." << endl;
    }

    return 0;
}