#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

    //VAR
    double M, A, IMC;

    //CODE
   cout << "Massa (KG): ";
   cin >> M;
   cout << "Altura (M): ";
   cin >> A;

   IMC = M / (A * A);

   cout << fixed << setprecision (2);
   cout << "IMC: " << IMC << endl;
    if (IMC < 17){
        cout << "Muito abaixo do peso" << endl;
        } else if (IMC >= 17 && IMC < 18.5) {
        cout << "Abaixo so peso" << endl;
        } else if (IMC >= 18.5 && IMC < 25) {
        cout << "Peso ideal" << endl;
        } else if (IMC >= 25 && IMC < 30) {
        cout << "Sobrepeso" << endl;
        } else if (IMC >= 30 && IMC < 35) {
        cout << "Obesidade" << endl;
        } else if (IMC >= 35 && IMC < 40) {
        cout << "Obesidade severa" << endl;
        } else {
        cout << "Obesidade Morbida" << endl;
        }


    return 0;
}
