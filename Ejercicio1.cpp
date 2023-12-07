// Ejercicio 1. Escribir un programa que lea tres enteros y emita un mensaje que indique si estan o no en orden numerico.

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    // Declaro 3 variables, una para cada entero.
    int n1,n2,n3;
    
// Pido al usuario que ingrese los numeros y los guardo en su respectiva variable.
    cout<<"\nPor favor ingrese tres numeros enteros: "<<endl; 
    cout<<"Numero1: "; cin>>n1;
    cout<<"Numero2: "; cin>>n2;
    cout<<"Numero3: "; cin>>n3;

// Para saber si los 3 enteros ingresados estan en orden numerico, se necesita comprobar que numero es mayor y menor que el otro, por tanto, ejecuto las sentencias "if, else-if y else" para comprobarlo.
    if ((n1<n2)&&(n2<n3)){ // Primero se determina que el n1 sea menor que el n2 y el n2 menor que el n3.
        cout<<"Los numeros estan en orden ascendente"<<endl;
    }else if ((n1>n2)&&(n2>n3)){ // Luego se determina si el n1 es mayor que el n2 y el n2 mayor que el n3.
        cout<<"Los numeros estan en orden descendente"<<endl;
    }else{ // Si no se cumplen entonces no estan ordenados.
        cout<<"Los numeros no estan en ningun orden"<<endl;
    }

    system("pause"); 
    return 0; // Fin del programa.
}

// Alumno: Valeria Sivira.
