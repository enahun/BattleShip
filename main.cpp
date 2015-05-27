#include <cstdlib>
#include <iostream>
using namespace std;
int x, y; //Variables para las coordenadas
char continuar;
bool seguir;
string tableroEncabezado = "  |A|B|C|D|E|F|G|H|I|J|";
string jugador1, jugador2; //Arreglo para los nombres de los jugadores
int fin = 0, verificador,gana1,gana2; //Variable para verificar el final del juego
int tablero1[10][10];
int tablero2[10][10];

void matriz(int tablero[10][10])// mostrar los tableros de juego
{

    for (int i = 0; i < 10; i++)
        for (int j; j < 10; j++)
            tablero[i][j] = 0;

    cout << "\t\t\t     " << tableroEncabezado << endl << endl;
    cout << "\t\t\t    0   ";
    for (x = 0; x < 10; x++) //Mostrar el tablero
    {
        for (y = 0; y < 10; y++) {
            cout << tablero[x][y] << " ";
        }
        cout << endl << "\t\t\t    ";
        if (x + 1 < 10) {
            cout << x + 1 << "   "; //Imprime filas
        }
    }
    cout << endl;
}

void coordenadas1(void)//ingresar las coordenadas del priemer tablero
{
    int a, b;
    cout << "Ingresa las coordenadas 'X'(filas) y 'Y' (columnas): " << endl << endl;
    cout << "Portaviones de 5 espacios........................." << endl << endl;
    for (x = 0; x < 1; x++) {
        for (y = 0; y < 5; y++) {
            cout << "Espacio " << y + 1 << ". Posicion 'X': ";
            cin>>a;
            cout << endl;
            cout << "Espacio " << y + 1 << ". Posicion 'Y': ";
            cin>>b;
            cout << endl;
            tablero1[a][b] = 1; //Valor del espacio ocupado
        }
    }
    cout << " Buque de Guerra 4 espacios................................" << endl << endl;
    for (x = 0; x < 1; x++) {
        for (y = 0; y < 4; y++) {
            cout << "Espacio " << y + 1 << ". Posicion 'X': ";
            cin>>a;
            cout << endl;
            cout << "Espacio " << y + 1 << ". Posicion 'Y': ";
            cin>>b;
            cout << endl;
            tablero1[a][b] = 1; //Valor del espacio ocupado
        }
    }
    cout << "Fragata de 3 espacios................................." << endl << endl;
    for (x = 0; x < 1; x++) {
        for (y = 0; y < 3; y++) {
            cout << "Espacio " << y + 1 << ". Posicion 'X': ";
            cin>>a;
            cout << endl;
            cout << "Espacio " << y + 1 << ". Posicion 'Y': ";
            cin>>b;
            cout << endl;
            tablero1[a][b] = 1; //Valor del espacio ocupado
        }
    }
    cout << "Dragaminas de 2 espacios.................................." << endl << endl;
    for (x = 0; x < 1; x++) {
        for (y = 0; y < 2; y++) {
            cout << "Espacio " << y + 1 << ". Posicion 'X': ";
            cin>>a;
            cout << endl;
            cout << "Espacio " << y + 1 << ". Posicion 'Y': ";
            cin>>b;
            cout << endl;
            tablero1[a][b] = 1; //Valor del espacio ocupado 
        }
    }
}

void coordenadas2(void)//ingresar las coordenadas del segundo tablero
{
    int a, b;
    cout << "Ingresa las coordenadas 'X'(filas) y 'Y' (columnas): " << endl << endl;
    cout << "Portaviones de 5 espacios........................." << endl << endl;
    for (x = 0; x < 1; x++) {
        for (y = 0; y < 5; y++) {
            cout << "Espacio " << y + 1 << ". Posicion 'X': ";
            cin>>a;
            cout << endl;
            cout << "Espacio " << y + 1 << ". Posicion 'Y': ";
            cin>>b;
            cout << endl;
            tablero1[a][b] = 1; //Valor del espacio ocupado
        }
    }
    cout << " Buque de Guerra 4 espacios................................" << endl << endl;
    for (x = 0; x < 1; x++) {
        for (y = 0; y < 4; y++) {
            cout << "Espacio " << y + 1 << ". Posicion 'X': ";
            cin>>a;
            cout << endl;
            cout << "Espacio " << y + 1 << ". Posicion 'Y': ";
            cin>>b;
            cout << endl;
            tablero1[a][b] = 1;
        }
    }
    cout << "Fragata de 3 espacios................................." << endl << endl;
    for (x = 0; x < 1; x++) {
        for (y = 0; y < 3; y++) {
            cout << "Espacio " << y + 1 << ". Posicion 'X': ";
            cin>>a;
            cout << endl;
            cout << "Espacio " << y + 1 << ". Posicion 'Y': ";
            cin>>b;
            cout << endl;
            tablero1[a][b] = 1;
        }
    }
    cout << "Dragaminas de 2 espacios.................................." << endl << endl;
    for (x = 0; x < 1; x++) {
        for (y = 0; y < 2; y++) {
            cout << "Espacio " << y + 1 << ". Posicion 'X': ";
            cin>>a;
            cout << endl;
            cout << "Espacio " << y + 1 << ". Posicion 'Y': ";
            cin>>b;
            cout << endl;
            tablero1[a][b] = 1;
        }
    }
}

void disparos1(void) //Disparos del primer jugador
{
    cout << "******************************************************" << endl;
    cout << "\t\t\t         <<<" << jugador1 << ">>>" << endl;
    matriz(tablero1);   //Muestra tablero del jugador
    cout << endl;
    cout << "Realizar  disparo "<<jugador1<< endl;
    cout << "Coordenada en 'X': ";
    cin>>x;
    cout << endl;
    cout << "Coordenada en 'Y': ";
    cin>>y;
    cout << endl;
    if (tablero2[x][y] == 1) //si es igual a 1 en esa posicion acerto, de lo contrario fallo
    {
        tablero2[x][y] = 2;
        cout << "Tiro perfecto" << endl;
        //gana1++;
    } 
    else 
    {
        cout << " Fallaste " << endl;
    }
    verificador = 0;
}

void disparos2(void) //Disparos del segundo jugador
{
    cout << "******************************************************" << endl;
    cout << "\t\t\t         <<<" << jugador2 << ">>>" << endl;
    matriz(tablero2); //Muestra tablero del jugador
    cout << endl;
    cout << "Realizar  disparo "<<jugador2<<endl;
    cout << "Coordenada en 'X': ";
    cin>>x;
    cout << endl;
    cout << "Coordenada en 'Y': ";
    cin>>y;
    cout << endl;
    if (tablero1[x][y] == 1) //si es igual a 1 en esa posicion acerto, de lo contrario fallo
    {
        tablero1[x][y] = 2;
        cout << "Tiro perfecto" << endl;
    } 
    else 
    {
        cout << " Fallaste " << endl;
    }
    verificador = 1;
}

void verificacion(int matriz[10][10]) //  verificar el juego
{
   
    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            if (matriz[x][y] == 1) {
                fin = fin + 1;
            }
        }
    }
    if (fin == 0) {
        if (verificador == 0) //Verifica primer jugador si gano
        {
            cout << "El jugador " << jugador1 << "GANO" << endl;
        }
        else //verificador no es igual a 0 segundo jugador gana
        {
            cout << "El jugador " << jugador2 << "GANO" << endl;
        }
        //Resetea el tamblero
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                tablero1[i][j] = 0;
                tablero2[i][j] = 0;
            }
        }
    }
    else {
        cout << "Continua el juego..."<< endl;
    }
}

int main(int argc, char *argv[]) //Funcion principal
{
    seguir = true;
    while (seguir) //Continua o sale del juego.
    {
        //Ingresar el nombre de los jugadores
        cout << "\n\n\t\t\t +++++ BattleShip +++++" << endl;
        cout << "Escribe el nombre del primer jugador: ";
        cin>>jugador1;
        cout << endl;
        cout << "Escribe el nombre del segundo jugador: ";
        cin>>jugador2;
        cout << endl;

        //ingreso de coordenadas del primer jugador
        cout << "********************************************************" << endl;
        cout << "\t\t\t     +++++" << jugador1 << "+++++" << endl;
        cout << "\t\t      Ingresa las coordenadas de las naves" << endl;
        matriz(tablero1); //Asigna los valores del tablero imprime primer tablero
        coordenadas1(); //ingresa coordenadas jugador 1 en primer tablero

        //Especificacion de coordenadas del segundo jugador
        cout << "********************************************************" << endl;
        cout << "\t\t\t      +++++" << jugador2 << "+++++" << endl;
        cout << "\t\t      Ingresa las coordenadas de las naves" << endl;
        matriz(tablero2); //Asigna los valores del tablero imprime primer tablero
        coordenadas2(); //ingresa coordenadas jugador 1 en primer tablero

        cout << "\t\t\t    +++++Inicio BattleShip+++++"<<endl;
        do 
        {
            disparos1(); //Ingresar disparos primer jugador
            verificacion(tablero2); //Verificar Disparos 

            if (fin != 0)   //Si fallla
            {
                disparos2();                 //Ingresar disparos segundo jugador
                verificacion(tablero1);     //Verificar disparos
            }
        } 
        while (fin != 0); //true si no es 0

        cout << "Reiniciar juego"<<endl;
        cout << "Presionar S para salir";
        cin>>continuar;
        cout << endl;
        if (continuar == 's' | continuar == 'S') 
        {
            seguir = true;
            
        } 
        else 
        {
            seguir = false;
        }
        
    }

    return 0;
}
