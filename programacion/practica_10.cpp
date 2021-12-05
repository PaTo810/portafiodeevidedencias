// practica_10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct persona 
{
    int desviar;
    int planchar;
    int iq;
    int flash;
    int powerup;
    string nombre;
}jugador[20];

int main()
{
    /*
    srand(time(NULL));
    persona el_bicho;
    persona Karen;
    persona Alejandro;
    persona Ángel;
    persona Dylan;
    persona el_rich;
    persona Oscar;
    persona Yussel;
    persona ferchus;
    persona Kuvassi;
    persona Uriel;
    persona shasho;
    persona ISRAEL;
    persona el_chilo;
    persona jp;
    persona Eric;
    persona Tapia;
    persona Abraham;
    persona Kevin;

    pato.ataque = rand() & 10;
    el_bicho.ataque = rand() % 10;

    if (pato.ataque > el_bicho.ataque)
    {
        cout << "el bicho te humillo we" << endl;

    }
    */


   
    /*
    string nombre[] = { "pato","karen","alex","jacinto","dylan","rich","oscar","yuss","ferchus","kuvassi","angel","shasho","isra","chilo","jp","eric","tapia","abraham","kevin" };
    srand(time(NULL));
    persona c;
    persona b;
    c.desvios=0
    b:desvios=11;
    string yamete;

    cout << "como andamos compita, bievenido a mi batte royale muerte a cuchillos" << endl;

    for (int i = 0; i < 20; i++)
    {
        fflush(stdin);
        cout << "nombre: " << nombre[i] << endl;
        jugador[i].desviar = rand() % 11;
        cout << "desviar: " << jugador[i].desviar << endl;
        jugador[i].planchar = rand() % 11;
        cout << "plancha: " << jugador[i].planchar << endl;
        jugador[i].iq = rand() % 11;
        cout << "iq: " << jugador[i].iq << endl;
        jugador[i].flash = rand() % 11;
        cout << "flash: " << jugador[i].flash << endl;
        jugador[i].powerup = rand() % 11;
        cout << "powerup: " << jugador[i].powerup << endl;
       
        
        cout << "\n" << endl;
    }
    for (int i = 0; i < 20; i++)
    {
        
        if ( jugador[i + 1].desviar> jugador[i].desviar)
        {
            c = jugador[i];
            yamete = nombre[i];
        }
        else
        {
            if (i > 20) 
            {

            }
            else
            {


                c = jugador[i + 1];
                yamete = nombre[i + 1];
            }
        }
    }
    cout << "el que tenga mas desvios gana: "<< yamete << endl;
    */
    

       
}
