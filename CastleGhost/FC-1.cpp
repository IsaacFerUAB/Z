#include <iostream>
#include <time.h>
#include <map> //almacena el grafo
#include <vector> //array mas dinamico
using namespace std;


int Aleatori(int min, int max)
{
    int rand();
    int Ale;
    Ale = rand() % (max - min + 1) + min;
    return Ale;
}
void Tutorial(){
    cout << " 1. Tendras que introducir un numero correspondiente a una posicion de el escenario." << endl;
    cout << " 2. Si aciertas, habras ganado, sino, el fantasma te dara una pista en funcion de la distancia entre tu eleccion y su posicion actual." << endl;
    cout << " 3. Deberas introducir otra posicion para tratar de encontrar-lo." << endl << endl;
    cout << "-> El fantasma se cansara de una ubicacion si tardas demasiado en encontrar-lo y podra moverse a alguna nueva ubicacion cercana." << endl;
    cout << "-> Si no quieres seguir jugando escribe  ""Huir"" para dejar de jugar." << endl << endl;
    cout << "Si quieres volver a ver estas instrucciones escribe <Ayuda> o <Help>" << endl;

}
void Asktutorial(){

    string entry;
    bool ask = true;

    do{
        cout << "¿Quieres una breve explicacion de como jugar?" << endl << endl << "1 --> Si" << endl << "0 --> No" << endl;
        cin >> entry;

        if (entry.size() ==  1 && entry[0] == '1'){
            ask = false;
            Tutorial();

        } else if(entry.size() ==  1 && entry[0] == '0'){
            system("cls");
            cout << "EMPEZAMOS" << endl;
            ask = false;
            

        } else{
            cout << "Introduce una entrada valida (Y/N)" << endl;
        }

    }while(ask == true);

}

void Intro(){
cout << "------------------------------------------------------" << endl;
cout << "                 EL FANSTASMA ERRANTE                 " << endl;
cout << "------------------------------------------------------" << endl << endl;
cout << "En este tablero encantado me escondo entre las sombras…" << endl;
cout << "Soy el Fantasma Errante, y si quieres escapar de mi embrujo tendrás que encontrar mi escondite." << endl;
cout << "Cada turno podrás decir un número: ese será el lugar donde crees que estoy." << endl;
cout << "Yo, desde el más allá, te susurraré cuán lejos o cerca estás de descubrirme." << endl;
cout << "A veces sentirás mi aliento helado muy próximo… otras, solo un ecWo lejano entre las casillas." << endl << endl;
cout << "¿Te atreves a jugar y desvelar mi posición antes de que desaparezca para siempre?" << endl;
}

int GhostPosGen(){


}

int main(){


srand( (unsigned)time( NULL ) ); //random

    Intro();
    Asktutorial();
    

}