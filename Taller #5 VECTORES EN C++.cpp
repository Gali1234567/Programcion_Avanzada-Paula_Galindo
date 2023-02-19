/**************************
Autor : Paula Galindo
Taller # 5  08/02/23
Tema : Vectores en C++
Ejercicio vectores en C++

***************************/
// Se crea el dominio de la biblioteca Global
//Se crea la biblioteca que a�ade las funciones de vectores
#include<iostream>
#include <vector>
using namespace std;
//Se crea la funci�n principal 
int main()
{
    //Se declara el objeto del tipo , vector tipo entero
    vector<int> num;
    int i,j,k ;
    //Se asigna el tama�o 5 al vector y se inicializa en 1
    num.assign(7,4);
    cout<<"\t El tama�o del vector 1 es  \t"<< num.size()<<endl;
    for(i=0; i<num.size();i++)
    cout<<num[i]<<endl;
    //Se le a�ade al final de vector un valor (push_back TIENE ESA FUNCI�N)
    num.push_back(8);
    num.push_back(6);

    //Se imprimen los valores del vector 
    for(i=0; i<num.size();i++)
    cout<<num[i]<<endl;
    // Se saca el tama�o del vector 
    cout<<"\t El tama�o del vector es  \t"<< num.size()<<endl;
    
    return 0;
}
