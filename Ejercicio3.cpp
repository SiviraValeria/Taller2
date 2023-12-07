// Ejercicio 3. Cuatro enteros entre 0 y 100 representan las puntuaciones de un estudiante de un curso de informatica. Escribir un programa para encontrar la media de estas puntuaciones e indicar su valor en alfabeto.

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
// Declaro 6 variables. 5 de tipo "double" para almacenar las notas ingresadas por el usuario y la media. Y una variable tipo "char" para indicar la literal de la media obtenida.
    double nota1, nota2, nota3, nota4, media;
    char letra = 'A';
// Muestro la tabla con el valor de cada literal.
    cout<<"\n\t Media          Puntuacion"<<endl; 
    cout<<"\t[90-100]             A   "<<endl;
    cout<<"\t[80-90]              B   "<<endl;
    cout<<"\t[70-80]              C   "<<endl;  
    cout<<"\t[60-70]              D   "<<endl;
    cout<<"\t[0-60]               E   "<<endl<<endl; 
//Solicito al usuario ingresar las notas del estudiante.
    cout<<"Ingresar las 4 notas (0-100) obtenidas por el estudiante de Informatica"<<endl;
    cout<<"\nIngrese la nota 1 del estudiante: "; cin>>nota1;
    cout<<"Ingrese la nota 2 del estudiante: "; cin>>nota2;
    cout<<"Ingrese la nota 3 del estudiante: "; cin>>nota3;
    cout<<"Ingrese la nota 4 del estudiante: "; cin>>nota4;
// Calculo la media obtenida de las 4 notas ingresadas.
    media = (nota1 + nota2 + nota3 + nota4) / 4;
// Realizo las sentencias para condicionar cada media y poder asignarle su respectivo valor literal.
    if(media>=90&&media<=100){
        letra = 'A';
    }
    else if (media>=80&&media<90){
        letra = 'B';
    }
    else if (media>=70&&media<80){
        letra = 'C';
    }
    else if(media>=60&&media<70){
        letra = 'D';
    }
    else{
        letra = 'E';
    }
// Muestro el resultado en pantalla de la media obtenida en numeros y su literal respectiva.
    cout<<"\nLa media es de: "<<media<<"\nSiendo su valor alfabeto: "<<letra<<endl;

    system("pause");
    return 0; // Fin del programa.
}

// Alumno: Valeria Sivira.
