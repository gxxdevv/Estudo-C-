//média de notas em c++
//dia 1 de c++ || 30/09/2026

#include <iostream>
#include <string>


using std::cout;
using std::endl;
using std::cin;
using std::string;


int main(){

    //nota 1
    double nota1;
    cout << "Digite a primeira nota do aluno: " << endl;
    cin >> nota1;

    //nota 2
    double nota2;
    cout << "Digite a segunda nota do aluno: " << endl;
    cin >> nota2;

    //nota 3
    double nota3;
    cout << "Digite a terceita nota do aluno" << endl;
    cin >> nota3;

    //cálculo de média
    double media_escolar = (nota1 + nota2 + nota3) /3;

    //status do aluno
    string status;

    if (media_escolar >= 7){
        status = "aprovado";
    } else if (media_escolar >= 5){
        status = "recuperação";
    } else {
        status = "reprovado";
    }

    //nota 1
    cout << "Nota 1: " << nota1 << endl;
    //nota 2
    cout << "Nota 2: " << nota2 << endl;
    //nota 3
    cout << "Nota 3:" << nota3 << endl;
    //média
    cout << "Média do aluno: " << media_escolar << endl;
    //status
    cout << "Status do aluno: " << status << endl;

    return 0;
}
