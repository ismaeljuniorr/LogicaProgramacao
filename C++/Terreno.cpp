#include <iostream>


int main()
{
    double largura, comprimento, metroQuadrado, area, preco;

    //Entrada de dados
    std::cout << "Digite a largura do terreno" << std::endl;
    std::cin >>largura;
    std::cout << "Digite o comprimento do terreno" << std::endl;
    std::cin >>comprimento;
    std::cout << "Digite o valor do metro quadrado" << std::endl;
    std::cin >>metroQuadrado;

    //processamento dos dados
    area = largura * comprimento;
    preco = area * metroQuadrado;


    //saída dos dados
    std::cout << "Area do terreno = "<<area << std::endl;
    std::cout << "Preco do terreno = "<<preco << std::endl;;

    return 0;
}
