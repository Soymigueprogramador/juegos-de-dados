#include <iostream>
#include <cstring>
#include <limits>
#include <cstdlib>   // para system, rand, srand
#include <ctime>     // para time
//#include "funciones.h"

using namespace std;

// Función para mostrar el menú y obtener una opción válida
int opciones() {
    int opcion;
    bool validacion = false;

    do {
        cout << " MENU " << endl;
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << " Opcion 0 = salir " << endl;
        cout << " Opcion 1 = jugar " << endl;
        cout << " Opcion 2 = estadistica " << endl;
        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (cin.fail()) {
            cin.clear(); // limpiar error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // descartar entrada inválida
            cout << "Entrada inválida. Intente de nuevo." << endl;
            system("pause");
        } else if (opcion >= 0 && opcion <= 2) {
            validacion = true;
        } else {
            cout << "Opción no válida." << endl;
            system("pause");
        }

    } while (!validacion);

    return opcion;
}

int main() {
    int opcion;
    bool finalizar = false;

    while (!finalizar) {
        system("cls"); // En Linux/macOS usar system("clear");
        opcion = opciones();

        switch (opcion) {
            case 0:
                cout << "Saliendo del juego..." << endl;
                finalizar = true;
                break;

            case 1:
                cout << "Este juego aún está en etapa de desarrollo." << endl;
                system("pause");
                break;

            case 2:
                cout << "Estadísticas aún no disponibles." << endl;
                system("pause");
                break;
        }
    }

    return 0;
}