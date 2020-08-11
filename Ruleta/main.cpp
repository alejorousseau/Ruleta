#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<windows.h>

using namespace std;

void subrayar(void);

int main()
{

    int num;
    int tipoApuesta;
    int rango;
    int apuesta, premio;
    int opcion;

    srand(time(NULL));
    num = rand() % 36;

    cout << "RULETA by rookie";
    subrayar();

    cout << "INGRESE EL TIPO DE APUESTA";
    subrayar();

    cout << endl << "1- ROJO / NEGRO" << endl;
    cout << "2- PAR / IMPAR" << endl;
    cout << "3- FALTA 1(1 - 18) / PASA (19 - 36)" << endl;
    cout << "4- DOBLE DOCENA / DOBLE COLUMNA" << " (Proximamente)" << endl;
    cout << "5- DOCENA / COLUMNA" << " (Proximamente)" << endl;
    cout << "6- SISENA" << " (Proximamente)" << endl;
    cout << "7- CUADRO (4 NUMEROS) / ESQUINA (0-3)" << " (Proximamente)" << endl;
    cout << "8- TRANSVERSAL (LINEA)" << " (Proximamente)" << endl;
    cout << "9- CABALLO (2 NUMEROS)" << " (Proximamente)" << endl;
    cout << "10- PLENO (1 NUMERO)" << " (Proximamente)" << endl;

    cout << endl << "Ingrese el tipo de apuesta: ";
    cin >> tipoApuesta;
    cout << endl << "Ingrese el monto de la apuesta: $";
    cin >> apuesta;

    system("cls");

    switch(tipoApuesta)
    {
        case 1:
            cout << endl << "1- ROJO / NEGRO";
            subrayar();
            cout << "1- ROJO" << endl;
            cout << "2- NEGRO" << endl;
            cout << endl << "Ingrese elija el color: ";
            cin >> opcion;
            break;

        case 2:
            cout << "1- PAR" << endl;
            cout << "2- IMPAR" << endl;
            cout << endl << "Ingrese una opcion: ";
            cin >> opcion;

            if(opcion == 1 && num % 2 == 0)
            {
                premio = apuesta *2;
                cout << endl << "El la bolilla cayo en el un par!! GANO!!" << endl;
                cout << endl << "Su premio es de $" << premio << endl;
            }
            else if(opcion == 2 && num % 2 != 0)
            {
                premio = apuesta *2;
                cout << endl << "El la bolilla cayo en el un impar!! GANO!!" << endl;
                cout << endl << "Su premio es de $" << premio << endl;
            }
            else
            {
                if(num % 2 == 0)
                {
                    cout << endl  << "La bolilla cayo en casillero par! Mejor suerte la proxima!" << endl;
                }
                else
                {
                    cout << endl  << "La bolilla cayo en casillero impar! Mejor suerte la proxima!" << endl;
                }
            }
            break;

        case 3:
            cout << "3- FALTA 1";
            subrayar();
            cout << "1- (1 - 18)" << endl;
            cout << "2- (19 - 36)" << endl;
            subrayar();
            cout << "Elija un rango: ";
            cin >> rango;

            if(rango == 1 && num >= 1 && num <= 18)
            {
                premio = apuesta * 2;
                cout << endl << "El la bolilla cayo en el " << num << "!! GANO!!" << endl;
                cout << endl << "Su premio es de $" << premio << endl;
            }
            else if(rango == 2 && num >= 19 && num <= 36)
            {
                premio = apuesta * 2;
                cout << endl << "El la bolilla cayo en el " << num << "!! GANO!!" << endl;
                cout << endl << "Su premio es de $" << premio << endl;
            }
            else
            {
                cout << endl << "El la bolilla cayo en el " << num << "!! Mejor suerte para la proxima!!" << endl;
            }
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
            break;

        case 8:
            break;

        case 9:
            break;

        case 10:
            break;

    }


    cout << endl << "Bolilla en la casilla " << num << endl;


    return 0;
}

void subrayar(void)
    {
        cout << endl;
        for(int i = 0; i < 45; i++)
        {
            cout << "-";
        }
        cout << endl;
    }
