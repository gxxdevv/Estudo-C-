//conversor de temperatuda em c++
//dia 1 de c++ || 30/09/2026

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    //esqueci o que eu ia falar
    double temperatura_celsius;
    cout << "Qual a temperatura em Celsius? (ex: 19.4): " << endl;
    cin >> temperatura_celsius;

    //sei lá, a fórmula
    double fahrenheit = (temperatura_celsius * 1.8) + 32;

    //mostrando resultado pro usuário
    cout << "temperatura em Celsius: " << temperatura_celsius << endl;
    cout << "temperatura em Fahrenheit: " << fahrenheit << endl;

    return 0;
}
