//calculadora de desconto em c++
//dia 2 de c++ || 01/10/2026

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){

    while (true){
        double num;
        cout << "Digite o valor do produto: R$" << endl;
        cin >> num;

        double porcentagem;
        cout << "Digite o valor da porcentagem:" << endl;
        cin >> porcentagem;
        
        
        double valordescontado = num * (porcentagem/100);
        double sla = num - valordescontado;

        cout << "preço original: " << num << endl;
        cout << "desconto: " << porcentagem << endl;
        cout << "valor descontado: " << valordescontado << endl;
        cout << "preço final: " << sla << endl;

        string pergunta;
        cout << "Gostaria de verificar mais descontos? (sim/não):" << endl;
        cin >> pergunta;

        if (pergunta == "não") break;
    }
    return 0;
}
