#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream archivoEntrada("datos.csv");
    ofstream archivoSalida("resultados.csv");

    if (!archivoEntrada.is_open()) {
        cout << "No se pudo abrir el archivo de entrada." << endl;
        return 1;
    }

    if (!archivoSalida.is_open()) {
        cout << "No se pudo crear el archivo de salida." << endl;
        return 1;
    }

    archivoSalida << "Suma,Promedio" << endl;

    string linea;
    while (getline(archivoEntrada, linea)) {
        stringstream ss(linea);
        string valor;
        int numero;
        int suma = 0;
        int contador = 0;

        while (getline(ss, valor, ',')) {
            numero = stoi(valor); 
            suma += numero;
            contador++;
        }

        if (contador > 0) {
            float promedio = (float)suma / contador;
            archivoSalida << suma << "," << promedio << endl;
        }
    }

    archivoEntrada.close();
    archivoSalida.close();

    cout << "Procesamiento completado. resultados.csv" << endl;

    return 0;

}
