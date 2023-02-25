/*************************
Fecha: 17-02-2023
Autor: Paula Galindo
Tema: Taller 02

Problema: 
Se desea hacer un aplicaci�n que genere un conjunto de n�meros aleatorios entre 0 y 
20. En caso que el usuario quiera, se debe presentar un histograma sobre la frecuencia 
de los n�meros del conjunto de n�meros aleatorios. 
La aplicaci�n deber� presentar un men�, que identifique en dos partes: 

a) presentar la generaci�n del conjunto de n�meros aleatorios 

b) presentar el histograma del conjunto de n�meros aleatorios.
**************************/
#include <iostream>
#include <cstdlib>
using namespace std;

int generarNumerosAleatorios(int *numeros, int tamano) {
    for (int i = 0; i < tamano; i++) {
        numeros[i] = rand() % 10; // Generar un n�mero aleatorio entre 0 y 20
    }
}

int imprimirHistograma(int *numeros, int tamano) {
    int frecuencias[10] = {0}; // arreglo de frecuencias
    for (int i = 0; i < tamano; i++) {
        frecuencias[numeros[i]]++; // Incrementar la frecuencia del n�mero
    }
    for (int i = 0; i <= 10; i++) {
        cout << i << ": ";
        for (int j = 0; j < frecuencias[i]; j++) {
            cout << "*"; // Imprimir asteriscos para representar la frecuencia
        }
        cout << endl;
    }
}
int main() {
    int tamano;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> tamano;//As� se sabe la cantidad de n�meros que se va a generar 
    int numeros[tamano];//el tama�o de la variable de numeros es lo que est� dentro de este arreglo
    bool salir = false;// Se declara para poder dar la opci�n de salir 
    while (!salir) {
    	
    	//Se crea el men� para el usuario 
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Generar conjunto de numeros aleatorios" << endl;
        cout << "2. Imprimir histograma" << endl;
        cout << "3. Salir" << endl;
        int opcion;
        cin >> opcion;
        switch (opcion) {
            case 1: //Se llama a la funci�n y se imprimen los valores 
                generarNumerosAleatorios(numeros, tamano);
                cout << "Estos son los numeros aleatorios:" << endl;
                for (int i = 0; i < tamano; i++) {
                    cout << numeros[i] << " ";
                }
                cout << endl;
                break;
            case 2://Se llama a la funci�n y se imprime el histograma
                imprimirHistograma(numeros, tamano);
                cout << "Este es el histograma." << endl;
                break;
            case 3:
                salir = true;
                cout << "Usted ha salido del programa" << endl;
                break;
            default:
                cout << "Opci�n invalida." << endl;
                break;
        }
    }
    return 0;
}
