//caixa eletrônico em c++
//dia 2 de c++ || 01/10/2026

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    //pedindo número inteiro
    int num;
    cout << "Digite o valor: R$" << endl;
    cin >> num;

    int notas100 = num / 100;
    num = num % 100;

    int notas50 = num / 50;
    num = num % 50;

    int notas20 = num / 20;
    num = num % 20;

    int notas10 = num / 10;
    num = num % 10;

    int notas5 = num / 5;
    num = num % 5;

    int notas2 = num / 2;
    num = num % 2;

    int notas1 = num / 1;
    num = num % 1;

    cout << "notas de 100: " << notas100 << endl;
    cout << "notas de 50: " << notas50 << endl;
    cout << "notas de 20: " << notas20 << endl;
    cout << "notas de 10: " << notas10 << endl;
    cout << "notas de 5: " << notas5 << endl;
    cout << "notas de 2: " << notas2 << endl;
    cout << "notas de 1: " << notas1 << endl;

    return 0;
}