// 28_9_2021 if else.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Ricardo Maginniss
// veremos la sintaxis
// de las palabras reservadas if e if else

#include <iostream>
using namespace std;

int main()
{
    bool flag = false;
    int a, b;
    a = 1;
    b = 2;
    string correo = "zap589@amerike.edu.mx";
    string contrasena; "amerike 2001";
    string correo_in;
    string contrasena_in;
    int opcion;
    // palabra reservada entre parentesis se pondra la condicion a cumplir 
    // si no se cumple simplemente se saltara la funcion


    if (a + b == 3)

    {
        cout << "estas dentro del if" << endl;

    }

    else//simplemente ejecuta todo lo que no es verdadero
    {
        cout << "esto es del else " << endl;

    }

    cout << "aca es fuera de las elecciones " << endl;



    // solicitar correo
    cout << "ingresa tu correo" << endl;
    cin >> correo_in;
    if (correo == correo_in)
    {



        //solicitar contrasena
        cout << "ingresa tu contrasena" << endl;
        cin >> contrasena_in;
        if (contrasena == contrasena_in)


        {
            cout << "bienvenido" << endl;

        }
        else
        {
            cout << "intentalo de nuevo -contraseña incorrecta" << endl;
        }
    }
    else
    {
        cout << "el correo ingresado no esta en la base datos" << endl;
    }
    cout << " aca es fuera de las condiciones" << endl;

    cout << "ingresa una opcion del 1 al 3" << endl;
    cin >> opcion;
    if (opcion == 1)
    {
        cout << "escogiste la 1" << endl;
    }
    else if (opcion == 2)
    {
        cout << "escogiste la 2" << endl;
    }
    else if (opcion == 3)
    {
        cout << "escogiste la 3" << endl;
    }
}