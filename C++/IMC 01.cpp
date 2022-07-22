#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

    //VAR
    double M, A, IMC;

    //CODE
    cout << "Massa (KG)\n";
    cin >> M;
    cout << "Altura\n";
    cin >> A;

    IMC = M / (A * A);

    cout << fixed << setprecision (2);
    cout << "IMC: "<<IMC << endl;

        if (IMC >= 18.5 && IMC < 25){
            cout << "Parabens! Voce esta com peso ideal" << endl;
        } else {
            cout << "Voce nao esta na faixa de peso ideal";
        }



    return 0;
}
