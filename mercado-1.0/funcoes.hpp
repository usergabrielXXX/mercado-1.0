#include "cabecalhos.hpp"

// função que define uma pausa (sleep)

void sleep(void){
    const int TEMPO = 600;
    sleep_for(milliseconds(TEMPO));
}

// permitir que a entrada só seja validada se for entrada numerica
bool inserir_numeros(const string &x){
    if(x.empty())
        return false;
    
    for(auto &c : x){
        if(!isdigit(static_cast<unsigned char>(c))){
            cout << NEGRITO << ITALICO << VERMELHO_CLARO << "SOMENTE NÚMEROS!" << RESET << '\n';
            return false;
        }
    }

    return true;
}
    
vector<string> nomes_autorizados = {"gabriel", "maria", "fernando", "luiza"};

bool login(const string& nome_digitado){

    for(const auto& nome : nomes_autorizados){
        if(nome_digitado == nome){
            return true; // achou
        }
    }

    return false;
}
