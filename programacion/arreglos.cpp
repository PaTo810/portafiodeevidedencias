//Practica7_arreglos
//zap589 Ricardo Maginniss
//demostrar el funcionamiento de los arreglos

#include <iostream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;

int main()
{
    string titulo[10];
    int fecha[10];
    string autor[10];

    for (int i = 0; i < 10; i = i + 1)
    {
        cout << "arre pa rifate con el titulo numero: " << i << endl;
        cin >> titulo[i];
        getline(cin, titulo[i]);

        cout << "arre viejo rolate la fecha" << endl;
        cin >> fecha[i];
        cin.ignore();

        cout << "arre we rolate el nombre del autor" << endl;
        cin >> autor[i];
        getline(cin, autor[i]);


        cout << titulo[i] << endl;
        cout << fecha[i] << endl;
        cout << autor[i] << endl;
        cout << "gracias amigo" << endl;

    }
}