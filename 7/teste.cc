//dia 5 de c++ 02/11/2026
//urna no terminal

#include <iostream>
#include <map>
#include <string>
#include <limits>
#include <cstdlib>

using namespace std;

void clear(){
    system("clear");  
}

void wait(){
    cout << "digite enter para prosseguir" << "\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

//candidatos a presidência
map<string,int> criarCanditatos() {
    return {
        {"Lula", 13},
        {"Bolsonaro", 22},
        {"Renan Santos", 14},
        {"Cury", 70},
        {"Zema", 30},
        {"Caiado", 55}
    };    
}    

//número de votos de cada candidato
map<string,int> numdeVotos(){
    return {
        {"Lula", 0},
        {"Bolsonaro", 0},
        {"Renan Santos", 0},
        {"Cury", 0},
        {"Zema", 0},
        {"Caiado", 0}
    };
}

void votacao(map<string,int> &candidatos, map<string,int> &votos, int &nulo){

    while (true){
        clear();
        bool encontrado = false;
        cout << "=== VOTAÇÃO ===" << "\n";
        cout << "Candidatos: " << "\n";
        
        for (const auto& candidato : candidatos){
            cout << candidato.first << "-" << candidato.second << "\n";
        }
        
        int escolha;
        cout << "Em qual candidato irá votar? (digite o número do candidato): ";
        cin >> escolha;
        
        for (const auto& candidato : candidatos){
            
            if (escolha == candidato.second){
                encontrado = true;
                votos[candidato.first]++;
                break;
            };
        }
        
        if (!encontrado){
            cout << "voto nulo" << "\n";
            nulo++;
            wait();
            return;
        }
    }
}

void resultado(map<string,int> &votos, const int nulo){
    clear();
    cout << "=== RESULTADO DA ELEIÇÃO ===" << "\n";
    
    for (const auto& resultado: votos){
        cout << "candidato: " << resultado.first << "-" << resultado.second << "\n";
    }
    
    cout << "votos nulos: " << nulo << "\n";
    
    wait();
    
}

void menu(map<string,int> &candidatos, map<string,int> &votos){
    int nulo = 0;
    
    while (true){
        clear();
        cout << "=== URNA ELETRÔNICA ==" << "\n";
        cout << "[1] Votar" << "\n";
        cout << "[2] encerrar votação" << "\n";
        cout << "[3] sair" << "\n";
        
        int opcao;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        
        switch (opcao){
            case 1:
                votacao(candidatos, votos, nulo);
                break;
                
            case 2:
                resultado(votos, nulo);
                return;
                
            case 3:
                cout << "Adeus!" << endl; 
                return;  
                
            default:
                cout << "digite um número entre (1 e 3)" << endl;
                break;        
        }
    }    
}

int main(){
    auto candidatos = criarCanditatos();
    auto votos = numdeVotos();
    menu(candidatos, votos);
    return 0;
}
