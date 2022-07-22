#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

    //VAR
    double nota1, nota2, media;

    //CODE
    cout << "-----------------------" << endl;
    cout << "ESCOLA JAVALI CANSADO " << endl;
    cout << "-----------------------" << endl;
    cout << "Primeira nota: ";
    cin >> nota1;
    cout << "Segunda nota: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    cout << fixed << setprecision (1);
    cout << "MEDIA: " << media << endl;

    if (media >= 9 && media <= 10){
        cout << "APROVEITAMENTO: A " << endl;
    } else if (media >= 8 && media < 9 ){
        cout << "APROVEITAMENTO: B " << endl;
    } else if (media >= 7 && media <8){
        cout << "APROVEITAMENTO: C " << endl;
    } else if (media >= 6 && media < 7){
        cout << "APROVEITAMENTO: D " << endl;
    } else if (media >= 5 && media < 6){
        cout << "APROVEITAMENTO: E " << endl;
    } else {
        cout << "APROVEITAMENTO: F " << endl;
    }

    cout << "-----------------------";

            return 0;
}
