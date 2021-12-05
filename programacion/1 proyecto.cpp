// Practica10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//punteros
//Ricardo Patricio Perez Maginniss

#include <iostream>
#include <locale>
using namespace std;
/*
int main()
{
    setlocale(LC_ALL, "spanish");
    int edad_jp = 20;
    int *apuntador_edad_jp = &edad_jp;
    cout << "el apuntador sin asterisco inprime: " << apuntador_edad_jp << "direccion de mermoria apuntada"<<endl;

    cout << "el apuntador con asterisco imprime: " << *apuntador_edad_jp <<"el valor de la direccion apuntada"<< endl;

    cout << "el apuntador con ampersand imprime: " << &apuntador_edad_jp << "direccion de la memoria propia" << endl;


}

*/
/*
int main ()
{
    int matriz[2][3];
    int valor_dado_por_usuario;
    cout << "arre viejo pon algo" << valor_dado_por_usuario << endl;
    //matriz de rellanado
    for (int i = 0; i < 4; i = i + i)
    {
        for (int j = 0; j < 5; j++)

        {
            cin >> valor_dado_por_usuario;
            matriz[i][j] = valor_dado_por_usuario;
        }


    }
    */

    //matriz de muestreo
int main()
{
    int matriz[2][3];
    int valor_dado_por_usuario;

    for (int i = 0; i < 2; i = i + 1)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "buenas mi amigo, mi compa,mi socio" << endl;
            cout << "pon un valor" << endl;
            cin >> valor_dado_por_usuario;
            matriz[i][j] = valor_dado_por_usuario;


        }

        cout << "\n";

    }
    for (int i = 0; i < 2; i = i + 1)
    {
        for (int j = 0; j < 3; j++) {
            cout << "|" << matriz[i][j] << "|";
        }

        cout << "\n";
    }


}
