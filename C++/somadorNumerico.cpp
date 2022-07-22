#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

    //VAR
    int cont, N, S, maior;

    //CODE
    cont = 1;
    S = 0;

    while (cont <= 5){
        cout << "Digite o " << cont << "o. valor: ";
        cin >> N;
        if (N > maior){
            maior = N;
        }
        S = S + N;
        cont = cont + 1;

    }
        cout << "A soma de todos os valores foi " << S << endl;
        cout << "O maior valor digitado foi " << maior << endl;






            return 0;
}
