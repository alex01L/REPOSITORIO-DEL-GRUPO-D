// ORDENAMIENTO DE NOTAS DE ESTUDIANTES DESDE LA MAS ALTA HASTA LA MAS BAJA
// METODO DE SELECCION

#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;
    string nombre[n];
    int nota[n];

    // Ingrese de los nombres de los estudiantes y su nota
    for (int i = 0; i < n; i ++){
        cout << "Ingrese el nombre del estudiantes [" << i + 1 << "]: ";
        cin >> nombre[i];
        
        cout << "Ingrese la nota del estudiante [" << nombre[i] << "]: ";
        cin >> nota[i];
    }

    // Mostrar los nombres de los estudiantes y las notas
    cout << " ESTUDIANTES            NOTAS" << endl;
    for (int i = 0; i < n; i ++){
        cout << "  " << nombre[i] << " 				 " << nota[i] << endl;
    }
    cout << endl;

    // Ordenamiento de los nombres de los estudiantes (METODO DE SELECCION)
    for (int i = 0; i < n - 1; i ++){
        int min = i;
        for (int j = i + 1; j < n; j ++){
            if (nota[j] > nota[min]){
                min = j;
            }
        }
        int aux = nota[min];
        nota[min] = nota[i];
        nota[i] = aux;
    }

    // Mostrar los nombres de los estudiantes y sus notas ya ordenadas 
    cout << " ESTUDIANTES ORDENADOS" << endl;
     cout << " ESTUDIANTES            NOTAS" << endl;
    for (int i = 0; i < n; i ++){
        cout << "  " << nombre[i] << "  			" << nota[i] << endl;
    }
    cout << endl;

    return 0;
}