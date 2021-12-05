// proyecto_historia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

//



#include <iostream>

#include <string>

using namespace std;



int main()

{

    int opcion_1 = 0;

    string nombre;

    // 1 para opcion 1, 0 para opcion 2

    cout << "bienvenido a la historia llamada: La Jugada " << endl;

    cout << "primero danos tu nombre para poder empezar esta historia" << endl;

    cin >> nombre;

    cout << " okay entonces tu nombre es: " << nombre << endl;

    cout << "okay " << nombre << "\nempecemos" << endl;

    cout << "habia una vez una persona llamada " << nombre << "\nmanana tienes un partido de basket en cual tienes que tomar decisiones que van a involucrar la derrota de tu equipo o la victoria  " << endl;

    cout << "\nempieza el partido " << endl;

    cout << "\nviene el salto de inicio para obtener la posesion del balon " << endl;

    cout << "\ndeseas saltar? " << endl;

    cin >> opcion_1;

    if (opcion_1 == 1)

    {

        cout << "\nsaltaste y obtuviste la posesion ahora te toca atacar" << endl;



        if (opcion_1 == 1)

        {

            cout << " \natacas al rival " << endl;

            cout << " \npasas a tu companero o encaras al defensa ? " << endl;

            cin >> opcion_1;

            if (opcion_1 == 1)

            {

                cout << " pasas a tu companero " << endl;
                cout << "tu compañero tira y es canasta" << endl;
                if (opcion_1 == 1)
                {
                    cout << "el rival tiene la posicion del balon, lo encaras o te haces para atras?" << endl;
                    cin >> opcion_1;
                    if (opcion_1 == 1)
                    {
                        cout << "lo encaraste y te marcaron foul" << endl;
                    }
                    else
                    {
                        cout << "te echaste para atras, ahora que decides robar o hacer que tiren?" << endl;
                        cin >> opcion_1;
                        if (opcion_1 == 1)
                        {
                            cout << "robaste pero te marcaron foul, y le conseguiste al rival tres tiros libres" << endl;
                        }
                        else
                        {
                            cout << "hiciste que tiraran, el rival anoto un triple, y pierdes el partido" << endl;
                        }
                    }
                }
            }

            else

            {

                cout << " encaras al defensa y te lo llevas deseas pasar el balon?  " << endl;

                cin >> opcion_1;
                if (opcion_1 == 1)
                {





                    cout << "seguiste con el balon y a la hora de hacer una colada te taparon" << endl;
                    cout << "luego del taponazo que te pusieron te enojaste con el rival, que haces le das un golpazo o lo besas?" << endl;
                    cin >> opcion_1;
                    if (opcion_1 == 1)
                    {
                        cout << "lo golpeaste y se armo una muy grande ahora y terminaste en el hospital " << endl;

                    }
                    else
                    {
                        cout << "lo besaste y te gusto" << endl;
                        cout << "le pides su numero o sencillamente te olvidas?" << endl;
                        cin >> opcion_1;
                        if (opcion_1 == 1)
                        {
                            cout << "pediste su numero y ahora son novios uwu" << endl;
                        }
                        else
                        {
                            cout << "te olvidaste de el" << endl;
                            cout << " f" << endl;
                        }

                    }


                }



            }











        }

    }

    else

    {

        cout << "\nno saltaste perdiste la posesion y te toca defender" << endl;

        if (opcion_1 == 0)

        {

            cout << "ahora " << nombre << " defiende al numero 10 del equipo contrario" << endl;

            cout << "\n........................................................................................................................................" << endl;

            cout << "\nse la van a pasar al numero 10 " << endl;

            cout << "\nrobas el balon o dejas que se la pasan? " << endl;

            cin >> opcion_1;

            if (opcion_1 == 1)

            {

                cout << "\nrobas el balon y creas un contragolpe " << endl;
                if (opcion_1 == 1) {
                    cout << "pasas o o te la llevas?" << endl;
                    cin >> opcion_1;

                    if (opcion_1 == 1)
                    {
                        cout << "pasaste el balon" << endl;
                        if (opcion_1 == 1)
                        {
                            cout << "ahora tienes un compañero abierto se la pasas o te vas solo?" << endl;
                            cin >> opcion_1;
                            if (opcion_1 == 1)
                            {
                                cout << "se la pasaste y la falla" << endl;
                            }
                            else
                            {
                                cout << "te fuiste solo y te tapan" << endl;
                            }
                        }
                    }
                    else
                    {
                        cout << "robaste el balon y fracaste en el intento de pase" << endl;
                        if (opcion_1 == 0)
                        {
                            cout << "fracasaste en intento el rival toma un contragolpe" << endl;
                            cout << "que haces ahora?" << endl;
                            cout << " robas o no haces nada?" << endl;
                            cin >> opcion_1;
                            if (opcion_1 == 1)
                            {
                                cout << "robaste y metiste la canasta" << endl;
                            }
                            else
                            {
                                cout << "no hiciste nada " << endl;
                                cout << "perdiste" << endl;
                            }


                        }

                    }
                }



            }

            else

            {



                cout << " \nel rival mete un triple " << endl;
                if (opcion_1 == 1)
                {
                    cout << "te banquearon por tu error" << endl;
                    cout << "regañas al coach o te vas" << endl;
                    cin >> opcion_1;
                    if (opcion_1 == 1)
                    {
                        cout << "regañaste al coach y le dijiste que mal pedo y aventaste el agua" << endl;
                    }
                    else
                    {
                        cout << "te fuiste" << endl;
                    }
                }





            }

        }

    }





}
