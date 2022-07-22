#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

    //VAR
    int D;
    double Valor;

    //CODE
    cout << "---------------------------" << endl;
    cout << " CRIANCA ESPERANCA " << endl;
    cout << "---------------------------" << endl;
    cout << "Muito obrigado por ajudar" << endl;
    cout << "[1] para doar R$ 10" << endl;
    cout << "[2] para doar R$ 25" << endl;
    cout << "[3] para doar R$ 50" << endl;
    cout << "[4] para doar outros valores" << endl;
    cout << "[5] para cancelar" << endl;
    cin >> D;
    switch (D){
        case 1 :
            Valor = 10;
            break;
        case 2 :
            Valor = 25;
            break;
        case 3 :
            Valor = 50;
            break;
        case 4 :
            cout << "Qual o valor da doacao R$?";
            cin >> Valor;
            break;
        case 5 :
            Valor = 0;
            }
    cout << "------------------------" << endl;
    cout << "SUA DOACAO FOI DE R$" << Valor << endl;
    cout << "MUITO OBRIGADO!" << endl;
    cout << "------------------------" << endl;











    return 0;
}
