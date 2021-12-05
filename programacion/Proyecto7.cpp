// Proyecto7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
bool respuesta = true;
bool respuesta_in = false;
//adivina quien

int main()

{
    cout << "voy a adivinar el equipo de futbol" << endl;
    cout << "tus opciones /n1 - chivas/n2- atlas/n3- cruz azul/n4 - pumas/n5- america" << endl;
    cin >> respuesta_in;
        //las chivas;

    if (respuesta == respuesta_in)
    {
        cout <<"tu equipo es de color rojo" << endl;
        cin >> respuesta_in;
   

        if (respuesta == respuesta_in)
        {
            cout << "tu equipo es de gdl" << endl;
            cin >> respuesta_in;
            

            if (respuesta == respuesta_in)
            {
                cout << "tu equipo lleva el color negro" << endl;
                cin >> respuesta_in;
               

                if (respuesta == respuesta_in)
                {
                    cout << "tu equipo es rojinegro" << endl;
                    cin >> respuesta_in;
                

                    if (respuesta == respuesta_in)
                    {
                        cout << "tu equipo lleva decadas sin tocar un trofeo?" << endl;
                        cin >> respuesta_in;
                      
                        if (respuesta == respuesta_in)
                        {
                            cout << "tu equipo es atlas" << endl;

                        }
                        else
                        {
                            cout << "ese equipo no esta en las opciones" << endl;
                        }
                    }
                }
                else
                {
                    cout << "ese equipo no esta en las opciones" << endl;

                }
            }
            else
            {
                cout << "tiene color blanco?" << endl;
                cin >> respuesta_in;

                if (respuesta == respuesta_in)
                {
                    cout << "entonces es rojiblanco" << endl;
                    cin >> respuesta_in;

                    if (respuesta == respuesta_in)
                    {
                        cout << "tu equipo juega con puros mexicanos?" << endl;
                        cin >> respuesta_in;

                        if (respuesta == respuesta_in)
                        {
                            cout << "tu equipo es chivas" << endl;

                        }
                        else
                        {
                            cout << "ese equipo no esta en la opciones" << endl;
                        }
                    }
                        
                }
               
            }
        }
        else
        {
            cout << "tu equipo es de cdmx" << endl;

        }
    }

}
