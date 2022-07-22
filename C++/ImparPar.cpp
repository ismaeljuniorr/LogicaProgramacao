#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    //VAR
    int N;

    //CODE
    cout << "Digite um numero qualquer: ";
    cin >> N;
        if (N % 2 == 0){
            cout << "O numero "<<N<< " e PAR";
        } else {
            cout << "o numero "<<N<< " e IMPAR";
        }


    return 0;
}
