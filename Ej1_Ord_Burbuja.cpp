// ORDENAMIENTO DE LA CANTIDAD DE PASAJEROS QUE VIAJAN EN UN AVION
// METODO DE BURBUJA

#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Ingrese la cantidad pasajeros que viajaran: ";
    cin >> n;

    int vector[n];

    for (int i = 0; i < n; i++){
        cout << "Ingrese el numero de asiento de pasajero [" << i + 1 << "]: ";
        cin >> vector[i];
    }

    cout << "ASIENTOS " << endl;
    for (int i = 0; i < n; i ++){
        cout << "  " <<  vector[i];
    }
	cout << endl;
    // Ordenamiento por el metodo de Burbuja
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (vector[j] > vector[j + 1]){
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }

    cout << "ASIENTOS ORDENADOS " << endl;
    for (int i = 0; i < n; i ++){
        cout << "  " << vector[i];
    }
}