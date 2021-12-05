// tarea.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
   
    int a;
    float b;
    char c;
    double d;
    string f;

    printf ("ingresa el valor booleano \n vamos wey ingresalo");
    printf("\ningreso el valor booleano: ");
    scanf_s ("%d", &a);
    printf("\nel numero que ingresaste es: %d", a);

    printf("ingresa el valor float \n vamos wey ingresalo");
    printf("\ningreso el valor float: ");
    scanf_s("%f", &b);
    printf("\nel numero que ingresaste es: %.2f", b);

    printf("ingresa el valor char \n vamos wey ingresalo");
    printf("\ningreso el valor char: ");
    scanf_s("%d", &c);
    printf("\nel numero que ingresaste es: %d", c);

    printf("ingresa el valor double \n vamos wey ingresalo");
    printf("\ningreso el valor double: ");
    scanf_s("%d", &d);
    printf("\nel numero que ingresaste es: %d", d);

    printf("ingresa el valor string \n vamos wey ingresalo");
    printf("\ningreso el valor string: ");
    scanf_s("%s", &f);
    printf("\nel numero que ingresaste es: %s", f);




}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
