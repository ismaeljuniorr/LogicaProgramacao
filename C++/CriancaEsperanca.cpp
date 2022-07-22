#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

    //VAR
    char Nome;
    double Sal, NSal;
    int Dep;

    //CODE

    cout << "Qual o nome do funcionario? ";
    cin >> Nome;
    cout << "Qual o salario do funcionario? ";
    cin >> Sal;
    cout << "Qual a quantidade de dependentes? ";
    cin >> Dep;

    switch (Dep){
    case 0 :
        NSal = Sal + (Sal*5/100);
        break;
    case 1 :
        NSal = Sal + (Sal*10/100);
        break;
    case 2 :
        NSal = Sal + (Sal*10/100);
        break;
    case 3 :
        NSal = Sal + (Sal*10/100);
        break;
    case 4 :
        NSal = Sal + (Sal*15/100);
        break;
    case 5 :
        NSal = Sal + (Sal*15/100);
        break;
    case 6 :
        NSal = Sal + (Sal*15/100);
        break;
    case 7 :
        NSal = Sal + (Sal*18/100);
        break;
    }

    cout << fixed << setprecision (2);
    cout << "O novo salario de " << Nome << "sera de R$ " << NSal << endl;





    return 0;
}
