//dia 6 de c++ | 05/11/2026
//sistema de banco no terminal

#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <random>
#include <map> 

using namespace std;

struct conta {
    string nome;
    string senha;
    double saldo;
};


map<string,conta> contas;


void limpar() {
    system("clear");
}


void espere(){
    cout << "digite enter para prosseguir" << "\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}


void CriarConta(){
    limpar();
    conta novaConta;

    cin.ignore();
    cout << "=== LOGIN ===" << "\n";
    string nome;
    cout << "digite seu nome: ";
    getline(cin, nome);
        
    string senha;
    cout << "digite a senha da conta: ";
    cin >> senha;
        
    double saldo;
    cout << "digite um saldo inicial pra sua conta (ex: 250): ";
    cin >> saldo;
        
    novaConta.nome = nome;
    novaConta.senha = senha;
    novaConta.saldo = saldo;
    
    contas[nome] = novaConta;
}

void deposito(string nome){
    while (true){
        limpar();
            
        cout << "=== DEPÓSITO ===" << "\n";
        double deposito;
        cout << "Quanto deseja depositar? R$";
        cin >> deposito;
    
        if (deposito <= 0){
            cout << "[sistema] Não é possível adicionar valores iguais ou menores que 0" << endl;
        } else {   
            contas[nome].saldo += deposito;
            
            cout << "[sistema] Depósito realizado com sucesso!" << "\n";
            cout << "Valor depositado: " << deposito << "\n";
            espere();
            return;
        }    
    }    
}

void saque(string nome){
    while (true){
        limpar();
        cout << "=== SAQUE ===" << "\n";
        
        double saque;
        cout << "Quanto deseja sacar? R$";
        cin >> saque;
        
        if (saque > contas[nome].saldo){
            limpar();
            cout << "[sistema] Ops! Valor maior que disponível na conta" << "\n";
            cout << "[sistema] valor disponível: R$" << contas[nome].saldo << "\n";
        } else {
            if (saque <= 0){
                cout << "[sistema] Não é possível adicionar valores iguais ou menores que 0" << endl;
                espere();
            } else {
                cout << "[sistema] Saque realizado com sucesso!" << "\n";
                contas[nome].saldo -= saque;
                cout << "[sistema] Saque de: R$" << saque << endl;
                espere();
                break;
            }    
        }
    }
}

void saldo(string nome){
    limpar();
    cout << "=== SALDO ===" << "\n";
    cout << "Saldo: " << contas[nome].saldo << "\n";
    espere();
}

void entrar(){
    while (true){
        limpar();
        string nome;
        cout << "Digite o nome da conta: ";
        cin >> nome;

        if (contas.find(nome) == contas.end()){
            cout << "[sistema] Ops, usuário não existe!" << endl;
            espere();
            return;
        } else {
            bool autenticado = false;

            for (int i=1; i<=3; i++){
                limpar();
                string senhadigitada;
                cout << "Digite sua senha: ";
                cin >> senhadigitada;

                if (contas[nome].senha == senhadigitada){
                    autenticado = true;
                    break;
                } else {
                    cout << "[sistema] Senha incorreta! Tentativas restantes: " << (3-i) << "\n";
                    espere();
                }
            }

            if (!autenticado){
                limpar();
                cout << "[sistema] Conta bloqueada!" << "\n";
                cout << "[sistema] Para mais informações, entre em contato." << "\n";
                espere();
                return;
            }

            while (true){
                limpar();
                cout << "=== OLÁ, " << contas[nome].nome << " ===" << "\n";
                cout << "▸ 1 • Realizar depósito" << "\n";
                cout << "▸ 2 • Realizar saque" << "\n";
                cout << "▸ 3 • Consultar saldo" << "\n";
                cout << "▸ 4 • Sair" << "\n";

                int OpcaoEntrar;
                cout << "Escolha uma opção: ";
                cin >> OpcaoEntrar;

                switch (OpcaoEntrar){
                    case 1:
                        deposito(nome);
                        break;

                    case 2:
                        saque(nome);
                        break;

                    case 3:
                        saldo(nome);
                        break;

                    case 4:
                        cout << "Adeus!" << endl;
                        espere();
                        return;

                    default:
                        cout << "Digite Uma opção válida!" << "\n";
                        espere();
                        break;
                }
            }
        }
    }
}

void menu() {
    while (true){
        limpar();
        cout << "▸ 1 • Criar conta" << "\n";
        cout << "▸ 2 • Entrar na conta" << "\n";
        cout << "▸ 3 • Sair" << "\n";
        
        int OpcaoMenu;
        cout << "Escolha uma opção: ";
        cin >> OpcaoMenu;
        
        switch (OpcaoMenu){
            case 1:
                CriarConta();
                break;
                
            case 2:
                entrar();
                break;    
                
            case 3:
                cout << "Adeus! Volte sempre!" << endl;
                return;
                
            default:
                cout << "Digite Uma opção válida!" << "\n";
                espere();
                break; 
        }
    }    
}

int main() {
    menu();
    return 0;
}
