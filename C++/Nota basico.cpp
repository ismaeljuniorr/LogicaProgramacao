#include <iostream>

using namespace std;

int main(){

    float nota1, nota2, media;

    cout << "Digite as duas notas: ";
    cin >> nota1 >> nota2;
    while (nota1 != 50 && nota2 != 50){
        media = (nota1 + nota2)  / 2;
        cout << "Media: " << media << endl;
        cout << "Digite as duas notas do outro aluno: ";
        cin >> nota1 >> nota2;
       }
    cout << "Acabou!";






    return 0;

}
