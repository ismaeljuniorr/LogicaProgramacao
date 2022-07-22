#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    //Declaração das VAR
    double area, base, altura, perimetro, diagonal;

    //Entrada de dados
    cout << "Digite o valor da base" << endl;
    cin >> base;
    cout << "Digite a altura do retangulo" << endl;
    cin >> altura;

    //processamento dos dados

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2) + pow(altura,2));


    //saída dos dados
    cout << fixed << setprecision(3);
    cout << "AREA = " <<area << endl;
    cout << "PERIMETRO = " <<perimetro << endl;
    cout << "DIAGONAL = " <<diagonal << endl;

    return 0;
}
