//calculadora em C++
//dia 4 em C++ || 29/10/26
//desculpa a demora...

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

//aqui essa merda do inferno
string operador;

double somar (double a, double b){
    return a + b;
}

double subtrair (double a, double b){
    return a - b;
}
    
double multiplicar (double a, double b){
    return a * b;
}
    
double dividir (double a, double b){
    if (b == 0){
        cout << "Impossível digitar por 0" << endl;
        return 1;
    } else {
        return a / b;
    }
}    

bool MostrarEssaMerdaDeMenu(){
    while (true) {
        cout << "=== CALCULADORA === \n" << endl;
        cout << "1- somar" << endl;
        cout << "2- subtrair" << endl;
        cout << "3- multiplicar" << endl;
        cout << "4- dividir" << endl;
        cout << "5- sair" << endl;
    
        int opcao;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        
        if (opcao == 1){
            operador = "+";
            return true;
        } else if (opcao == 2) {
            operador = "-";
            return true;
        } else if (opcao == 3) {
            operador = "*";
            return true;
        } else if (opcao == 4) {
            operador = "/";
            return true;
        } else if (opcao == 5) {
            break;
        } 
    }
}

int main(){
    while (true){
        if (!MostrarEssaMerdaDeMenu()){
            break;
        }    
        
        cout << "=== MENU === \n" << endl;
        
        double a;
        cout << "Digite o número 1: ";
        cin >> a;
    
        double b;
        cout << "Digite o número 2: ";
        cin >> b;
    
        if (operador == "+"){
            cout << "resultado: " << somar(a,b) << endl;
        } else if (operador == "-"){
            cout << "resultado: " << subtrair(a,b) << endl;
        } else if (operador == "*"){
            cout << "resultado: " << multiplicar(a,b) << endl;
        } else if (operador == "/"){
            cout << "resultado: " << dividir(a,b) << endl;
        }
    }    
    return 0;
}
