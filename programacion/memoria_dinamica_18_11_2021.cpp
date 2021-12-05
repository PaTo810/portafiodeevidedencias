// memoria_dinamica_18_11_2021.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;
/*
int imprimir(string* tortillas, int tamanio) 
{
    for (int i = 0; i < tamanio; i++)
    {
        cout << "tortilla del juego " << i+1<<" es: "<<tortillas[i] << endl;
    }
    return 0;
}
int main()
{
    setlocale(LC_ALL, "spanish");
    //arreglos de 1 dimension dinamica
    //declarar la variable auxiliar que creara el arreglo
   std::string* titulos = NULL;
   //declaramos la variable del tamaño del arrelo
   int size;
   //solicitamoa el tamaño del arreglo 
   std::cout << "cuantas cajas en tu caja quieres? ";
   cin >> size;
   //crear el arreglo a partir del tamaño ingresado
   titulos = new std::string[size];

   //metodo de captura de informacion 
   for (int i = 0; i < size; i ++) 
   {
       cout << "ingresa titulos de juegos de mesa " <<
           "lo solicite Titulo: " << i + 1 << std::endl;
       //
       if (i == 0) {
           cin.ignore();
       }
       //metodo para recibir cadenas de caracteres con espacio
       getline(cin, titulos[i]);
       //funcion limpiar pantalla
       system("CLS");
   }
   int regreso;
   regreso = imprimir(titulos, size);

   delete[]titulos;
   titulos = NULL;
}
*/

//areglos dinamicos
int main()
{
    setlocale(LC_ALL, "spanish");
    //necesitamos las variables
    int filas=0;
    int col = 0;
    cout << " cuantas filas pa? "<<endl;
    cin >> filas;
    cout << " cuantas columnas ? " << endl;
    cin >> col;
    //variable puntera de punteros auxiliar para la creacion del arreglo dentro del arreglo
    int** matriz = new int* [filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[col];
    }
    for()
    delete[] matriz;
    matriz = NULL;
    cout <<
}