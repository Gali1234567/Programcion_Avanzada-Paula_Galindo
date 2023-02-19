/*************************
Fecha: 15-02-2023
Autor: Paula Galindo
Tema: Taller 01

Problema: 
1.- Crear un array con 10 elementos
2.- Crear una función para generar números aleatorios entre 0 y 25
3.- Llenar el array con 10 números aleatorios
4.- Crear un puntero
5.- Imprimir el contenido del array usando el puntero
6.- Imprimir las direcciones del contenido del array usando el puntero. 
**************************/
#include <iostream>
#include <cstdlib>
using namespace std;

// Función que genera un número aleatorio entre 0 y 25
int NumeroAleatorio() {
    return rand() % 26;
}

int main() {
    // Crear un vector con 10 elementos
    int vector_a[10];
    
    // Llenar el vector con 10 números aleatorios
    for (int i = 0; i < 10; i++) {
        vector_a[i] = NumeroAleatorio();
    }
    
    // Crear un puntero que apunta al primer elemento del vector 
    int *apuntador_b = vector_a;
    
    // Imprimir el contenido del vector usando el puntero
    for (int i = 0; i < 10; i++) {
        cout << *(apuntador_b + i) << " ";
    }
    cout << endl;
    
    // Imprimir las direcciones del contenido del vector usando el puntero
    for (int i = 0; i < 10; i++) {
    	//Se accede a la dirección de memoria del elemento i sumando i a la dirección de memoria
        cout << apuntador_b + i << " "; 
    }
    cout << endl;
    
    return 0;
}

