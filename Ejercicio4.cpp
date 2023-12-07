//Ejercicio 4. Se desea leer las edades de tres de los hijos de un matrimonio y escribir la edad mayor, la menor y la media de las tres edades.

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int hijo1, hijo2, hijo3, mayor, menor;
    double medio; // Declaro las variables necesarias, una para cada hijo y otras 3 para determinar los tipos de edades.

    cout<<"\n\t\tEdades de los 3 hijos de un matrimonio"<<endl<<endl; //Titulo decorativo.

    cout<<"Ingrese la edad del hijo 1: "; cin>>hijo1; // Solicito al usuario que ingrese las edades de los 3 hijos.
    cout<<"Ingrese la edad del hijo 2: "; cin>>hijo2;
    cout<<"Ingrese la edad del hijo 3: "; cin>>hijo3;

    mayor=hijo1; // Inicializo la variable "mayor" con la edad del hijo1.
    medio= (hijo1 + hijo2 + hijo3) / 3; // En esta linea de codigo saco el promedio de la edad mediana.

    if(mayor<hijo2&&mayor<hijo3){
        menor=hijo1;
    }
    else if(mayor>hijo2&&mayor>hijo3){
        mayor=hijo1;
    } // En estas lineas de codigo determino cuando la edad del hijo1 sera la mayor o la menor.
    if(hijo2<hijo1&&hijo2<hijo3){
        menor=hijo2;
    }
    else if(hijo2>hijo1&&hijo2>hijo3){
        mayor=hijo2;
    }// En estas lineas de codigo determino cuando la edad del hijo2 sera la mayor o menor.
    if(hijo3<hijo1&&hijo3<hijo2){
        menor=hijo3;
    }
    else if(hijo3>hijo1&&hijo3>hijo2){
        mayor=hijo3;
    } // En estas lineas de codigo determino cuando la edad del hijo3 sera la mayor o menor.

//Imprimo los resultados obtenidos de cada sentencia.
    cout<<"\nLa edad mayor es de "<<mayor<<endl;
    cout<<"La edad mediana es de "<<medio<<endl;
    cout<<"La edad menor es de "<<menor<<endl;

    system("pause");
    return 0; // Fin del programa.
}

// Alumno: Valeria Sivira.
