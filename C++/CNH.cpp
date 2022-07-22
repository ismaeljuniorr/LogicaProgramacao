#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

    //VAR
    int ano, nasc, idade;
    bool apto;

    //CODE
    cout << "--------------------------" << endl;
    cout << "DEPARTAMENTO DE TRANSITO" << endl;
    cout << "--------------------------" << endl;
    cout << "Digite o ano atual (Ex: 2022): ";
    cin >> ano;
    cout << "Digite o ano do seu nascimento (Ex: 1998): ";
    cin >> nasc;

    idade = ano - nasc;
        if (idade >= 18){
                apto = true;
        } else {
                apto = false;
        }
    //--------------------------//
    cout << "-------- STATUS --------" << endl;
    cout << "Idade: "<<idade<<" anos" << endl;
        if ( apto == true){
            cout << "APTO A TIRAR A CARTEIRA" << endl;
        } else {
            cout << "INAPTO A TIRAR A CARTEIRA" << endl;
        }
    cout << "------------------------";

    return 0;
}
