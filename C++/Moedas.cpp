#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

    //VAR
    int C, Q;
    double R, D;


    //CODE
    C = 1;

    cout << "Quantas vezes voce quer converter?";
    cin >> Q;
    while (C <= Q)
    {
        cout << "Qual o valor? ";
        cin >> R;

        D = R/5.50;

        cout << fixed << setprecision (2);
        cout << "O valor convertido e US: " << D << endl;

    }
    return 0;
}
