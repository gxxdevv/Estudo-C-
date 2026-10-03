//contador em c++
//dia 3 de c++ || 02/10/2026

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    int num;
    cout << "Digite um número inteiro: " << endl;
    cin >> num;

    int contador = 0;

    while (true){
        int numexibidos = contador;
        
        if (contador == num) {
            cout << "Acabou" << endl;
            cout << "números exibidos: " << numexibidos << endl;
            break;
        } else {
            contador += 1 ;
            cout << contador << endl;
        }
    }

    return 0;
}
