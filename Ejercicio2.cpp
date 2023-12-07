// Ejercicio 2. Escribir un programa que lea un limite maximo entero positivo, una base entera positiva, y visualice todas las potencias de la base, menores que el valor especificado limite maximo.

#include <iostream>
#include <cstdlib>
#include <math.h> //Agrego la biblioteca "math.h" para emplear la funcion "pow".

using namespace std;

int main() {

    int limite_maximo, base, exponente; //Declaro 3 variables. Una para indicar el limite maximo de exponente, otra para almacenar la base que indique el usuario y una ultima para indicar el exponente que se va a incrementar. 

    cout<<"\nIndique un numero de base entero positivo: "; cin>>base; //Pido al usuario que indique una base entera positiva.
    cout<<"Indique un limite maximo de exponente: "; cin>>limite_maximo; //Pido al usuario que indique un limite maximo de exponente.

    cout<<"\nBase        Exponente        Resultado" << endl; //Esta linea de codigo es para realizar una tabla de resultados.
     for (exponente = 1; exponente <= limite_maximo; exponente++){
        cout<<" "<<base<<"\t\t"<<exponente<<"\t\t"<<pow(base,exponente)<<endl; //Utilizo la funcion "pow" para realizar la potencia respectiva.
     } // Con este ciclo "for" le pido al programa que empiece con exponente 1 y se detenga hasta que el exponente sea menor o igual al limite maximo ingresado por el usuario y por ultimo, le incremento al exponente para que vaya aumentando.

    system("pause");
    return 0; // Fin del programa.
}

// Alumno: Valeria Sivira (30.621.832).
